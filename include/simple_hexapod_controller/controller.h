#pragma once
#include "model.h"

//States for walking controller
enum RobotState
{
  STARTING,
  STOPPING,
  MOVING,
  STOPPED
};

enum LegState
{
  SWING,
  STANCE,
  SWING_TRANSITION,
  STANCE_TRANSITION,
  STANCE_SUPPORT, //NOT IMPLEMENTED
  TOUCHDOWN_CORRECTION,
  LIFTOFF_CORRECTION
};

//Controller that handles walking
struct WalkController
{
  Model *model;
  Pose pose; //DEBUGGING
  
  Parameters params;
  
  RobotState state = STOPPED;
  
  double timeDelta;
  
  //Walk parameters
  double stepFrequency;  
  double stepClearance;
  double bodyClearance;
  
  std::vector<int> legSelectionPattern;
  std::vector<int> sideSelectionPattern;
  
  Vector3d footSpreadDistances;
  double minFootprintRadius;
  double stanceRadius; // affects turning circle
  Vector3d identityTipPositions[3][2];
  Vector2d localCentreVelocity;
  Vector2d localCentreAcceleration;
  double angularVelocity;
  double moveToStartTime;
  double maximumBodyHeight;
  
  int targetsNotMet = 6;
    
  struct LegStepper
  {
    double phase;
    double phaseOffset;
    double stancePhase;
    double swingPhase;
    double transitionPeriod;
    
    LegState state = STANCE;
    
    Vector2d strideVector; // length gives stride length
    Vector3d currentTipPosition;
    Vector3d originTipPosition;
    Vector3d defaultTipPosition;
    
    bool tipTouchdown;
    
    bool firstIteration = true;
    
    Vector3d updatePosition(Leg leg,
                            double liftHeight, 
                            Vector2d localCentreVelocity, 
                            double angularVelocity,
                            double stepFrequency,
                            double timeDelta);
  } legSteppers[3][2];
  
  vector<Vector3d> targets; //DEBUGGING
  
  // Determines the basic stance pose which the hexapod will try to maintain, by finding the largest footprint radius that each leg can achieve for the specified level of clearance
  // stepFrequency- preferred step cycles per second
  // bodyClearance, stepClearance- 0 to 1, 1 is vertical legs
  // stanceLegYaws- natural yaw pose per leg
  // minYawLimits- the minimum yaw (or hip) joint limit around centre for each leg

  WalkController(Model *model, Parameters params);
  
  // curvature is 0 to 1 so 1 is rotate on the spot, 0.5 rotates around leg stance pos
  // bodyOffset is body pose relative to the basic stance pose, note that large offsets may prevent achievable leg positions
  // call this function even when not walking (newLocalVelocity=0), otherwise joint angles will just freeze
  void updateWalk(Vector2d newLocalVelocity, double newCurvature, double stepFrequencyMultiplier);
  double iteratePhase(double phase);
  bool targetReached(double phase, double targetPhase);
};

//Controller that handles changes in body pose
struct PoseController
{
  Model *model;
  Parameters params;
  
  double timeDelta;
  
  double moveToPoseTime;
  Vector3d originTipPosition[3][2];
  
  Pose currentPose;
  Pose targetPose;  
  
  PoseController(Model *model, Parameters params);
  bool updatePose(Vector3d targetTipPositions[3][2], Pose targetPose, double timeToPose, bool moveLegsSequentially=false);
  double getPitchCompensation(double phase);
  double getRollCompensation(double phase);
};