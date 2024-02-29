<div class="Box-sc-g0xbh4-0 bJMeLZ js-snippet-clipboard-copy-unpositioned" data-hpc="true"><article class="markdown-body entry-content container-lg" itemprop="text"><div class="markdown-heading" dir="auto"><h1 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Syropod 高级控制器</font></font></h1><a id="user-content-syropod-high-level-controller" class="anchor-element" aria-label="永久链接：Syropod 高级控制器" href="#syropod-high-level-controller"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><a href="https://research.csiro.au/robotics/" rel="nofollow"><img src="https://camo.githubusercontent.com/2ec59b8d4ecc7b15dbd0327446aec22a6b0eaea258bb60180681c8f79de63718/68747470733a2f2f692e696d6775722e636f6d2f51794d547747332e6a7067" alt="蜥脚亚目旗帜" title="澳大利亚联邦科学与工业研究组织（CSIRO）机器人公司" data-canonical-src="https://i.imgur.com/QyMTwG3.jpg" style="max-width: 100%;"></a></p>
<p dir="auto"><a href="https://github.com/csiro-robotics/syropod_highlevel_controller"><img src="https://camo.githubusercontent.com/3ea14ebe8ee121f36fbfd72cc2013e01d76d6506f6b456bb89760bb94a7976f8/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f43757272656e7425323076657273696f6e2d302e352e31312d6f72616e6765" alt="版本" title="版本" data-canonical-src="https://img.shields.io/badge/Current%20version-0.5.11-orange" style="max-width: 100%;"></a> <a href="https://github.com/csiro-robotics/syropod_highlevel_controller/blob/master/LICENSE"><img src="https://camo.githubusercontent.com/4b8e0e6450059a997e7f5392b0f9acc5fcd48986c880e56df3a833b72e25a431/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c6963656e73652d4253442532464d49542d626c7565" alt="执照" title="执照" data-canonical-src="https://img.shields.io/badge/License-BSD%2FMIT-blue" style="max-width: 100%;"></a></p>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Syropod 高级控制器 (SHC) 是一款多功能控制器，能够为准静态多足机器人生成身体姿势和步态。</font><font style="vertical-align: inherit;">这个用 C++ 实现的 ROS 包可以轻松部署在具有不同传感器、腿部和关节配置的腿式机器人上。</font><font style="vertical-align: inherit;">SHC 旨在为给定的步态序列、步距、步频和输入身体速度生成脚尖轨迹。</font><font style="vertical-align: inherit;">控制器可以利用 IMU 等输入传感器和共同努力反馈来提供稳健的轨迹，即使在倾斜和不平坦的地形中也是如此。</font><font style="vertical-align: inherit;">SHC 是由</font></font><a href="https://research.csiro.au/robotics/" rel="nofollow"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">CSIRO 机器人和自主系统小组</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">开发的，用于支持其正在进行的腿式机器人运动研究。</font><font style="vertical-align: inherit;">它现在作为开源包与教程一起发布，以造福于 OpenSHC 等更广泛的社区。</font><font style="vertical-align: inherit;">下面的横幅图片和视频剪辑显示了许多 CSIRO 的腿式机器人运行 SHC。</font></font></p>
<p align="center" dir="auto">
<animated-image data-catalyst="" style="width: 500px;"><a href="https://research.csiro.au/robotics/our-work/research-areas/legged-robots/" rel="nofollow" data-target="animated-image.originalLink"><img alt="小发明维兹莫零" align="center" src="https://camo.githubusercontent.com/6563c37c67f1c8cdff3a0863f4fb57a6729b254880b9611a4cd04286aba9628b/68747470733a2f2f692e696d6775722e636f6d2f4843726d5244532e676966" data-canonical-src="https://i.imgur.com/HCrmRDS.gif" style="max-width: 100%; display: inline-block;" data-target="animated-image.originalImage"></a>
      <span class="AnimatedImagePlayer" data-target="animated-image.player" hidden="">
        <a data-target="animated-image.replacedLink" class="AnimatedImagePlayer-images" href="https://research.csiro.au/robotics/our-work/research-areas/legged-robots/" target="_blank">
          
        <span data-target="animated-image.imageContainer">
            <img data-target="animated-image.replacedImage" alt="小发明维兹莫零" class="AnimatedImagePlayer-animatedImage" src="https://camo.githubusercontent.com/6563c37c67f1c8cdff3a0863f4fb57a6729b254880b9611a4cd04286aba9628b/68747470733a2f2f692e696d6775722e636f6d2f4843726d5244532e676966" style="display: block; opacity: 1;">
          <canvas class="AnimatedImagePlayer-stillImage" aria-hidden="true" width="500" height="281"></canvas></span></a>
        <button data-target="animated-image.imageButton" class="AnimatedImagePlayer-images" tabindex="-1" aria-label="玩小发明 Wizmo 零" hidden=""></button>
        <span class="AnimatedImagePlayer-controls" data-target="animated-image.controls" hidden="">
          <button data-target="animated-image.playButton" class="AnimatedImagePlayer-button" aria-label="玩小发明 Wizmo 零">
            <svg aria-hidden="true" focusable="false" class="octicon icon-play" width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
              <path d="M4 13.5427V2.45734C4 1.82607 4.69692 1.4435 5.2295 1.78241L13.9394 7.32507C14.4334 7.63943 14.4334 8.36057 13.9394 8.67493L5.2295 14.2176C4.69692 14.5565 4 14.1739 4 13.5427Z">
            </path></svg>
            <svg aria-hidden="true" focusable="false" class="octicon icon-pause" width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg">
              <rect x="4" y="2" width="3" height="12" rx="1"></rect>
              <rect x="9" y="2" width="3" height="12" rx="1"></rect>
            </svg>
          </button>
          <a data-target="animated-image.openButton" aria-label="在新窗口中打开 Gizmo Wizmo Zero" class="AnimatedImagePlayer-button" href="https://research.csiro.au/robotics/our-work/research-areas/legged-robots/" target="_blank">
            <svg aria-hidden="true" class="octicon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16">
              <path fill-rule="evenodd" d="M10.604 1h4.146a.25.25 0 01.25.25v4.146a.25.25 0 01-.427.177L13.03 4.03 9.28 7.78a.75.75 0 01-1.06-1.06l3.75-3.75-1.543-1.543A.25.25 0 0110.604 1zM3.75 2A1.75 1.75 0 002 3.75v8.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 12.25v-3.5a.75.75 0 00-1.5 0v3.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-8.5a.25.25 0 01.25-.25h3.5a.75.75 0 000-1.5h-3.5z"></path>
            </svg>
          </a>
        </span>
      </span></animated-image>
</p>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">目录</font></font></h2><a id="user-content-table-of-contents" class="anchor-element" aria-label="固定链接：目录" href="#table-of-contents"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><a href="#Getting-Started"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">入门</font></font></a></li>
<li><a href="#Features"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">特征</font></font></a></li>
<li><a href="#Config-Files"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">配置文件</font></font></a></li>
<li><a href="#Nodes"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">节点</font></font></a></li>
<li><a href="#Changelog"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">变更日志</font></font></a></li>
<li><a href="#Authors"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">作者</font></font></a></li>
<li><a href="#License"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">执照</font></font></a></li>
<li><a href="#Contributing"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">贡献</font></font></a></li>
<li><a href="#Issues"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">问题</font></font></a></li>
</ul>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">入门</font></font></h2><a id="user-content-getting-started" class="anchor-element" aria-label="永久链接：开始使用" href="#getting-started"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">如果您还没有查看过使用 OpenSHC 的教程，请参阅</font></font><a href="https://github.com/csiro-robotics/shc_tutorials"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">OpenSHC 教程</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">。</font></font></p>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">请参阅各个平台启动文件夹中的自述文件，了解有关设置与 OpenSHC 一起使用的平台的信息。</font></font></p>
<p dir="auto"><font style="vertical-align: inherit;"></font><a href="https://youtu.be/-E7-2UMP5XU" rel="nofollow"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">OpenSHC</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">的视频概述</font><font style="vertical-align: inherit;">：</font></font></p>
<p align="center" dir="auto">
<a href="https://youtu.be/-E7-2UMP5XU" rel="nofollow"><img alt="开放SHC" align="center" width="500" src="https://camo.githubusercontent.com/a1ff154c847ec7024f276e1ffb247c86e9f2aafd12f15f8e922912c608f87d8b/68747470733a2f2f696d6775722e636f6d2f564261624c56722e6a7067" data-canonical-src="https://imgur.com/VBabLVr.jpg" style="max-width: 100%;"></a>
</p>
<div class="markdown-heading" dir="auto"><h3 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">要求</font></font></h3><a id="user-content-requirements" class="anchor-element" aria-label="永久链接：要求" href="#requirements"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Ubuntu 18.04 LTS 和 ROS Melodic；</font><font style="vertical-align: inherit;">或者</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Ubuntu 20.04 LTS 和 ROS Noetic</font></font></li>
</ul>
<div class="markdown-heading" dir="auto"><h3 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">依赖关系</font></font></h3><a id="user-content-dependencies" class="anchor-element" aria-label="永久链接：依赖关系" href="#dependencies"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">OpenSHC 需要特定于机器人的配置和启动存储库（例如</font></font><a href="https://github.com/csiro-robotics/bullet_syropod"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Bullet Syropod）</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">才能运行。</font><font style="vertical-align: inherit;">请参阅该自述文件以获取更多信息。</font></font></li>
</ul>
<div class="markdown-heading" dir="auto"><h3 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">安装</font></font></h3><a id="user-content-installation" class="anchor-element" aria-label="永久链接：安装" href="#installation"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre>mkdir -p openshc_ws/src
<span class="pl-c1">cd</span> openshc_ws/src
git clone https://github.com/csiro-robotics/syropod_highlevel_controller.git
<span class="pl-c1">cd</span> ..
catkin build</pre><div class="zeroclipboard-container">
    <clipboard-copy aria-label="Copy" class="ClipboardButton btn btn-invisible js-clipboard-copy m-2 p-0 tooltipped-no-delay d-flex flex-justify-center flex-items-center" data-copy-feedback="Copied!" data-tooltip-direction="w" value="mkdir -p openshc_ws/src
cd openshc_ws/src
git clone https://github.com/csiro-robotics/syropod_highlevel_controller.git
cd ..
catkin build" tabindex="0" role="button">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg>
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
    </clipboard-copy>
  </div></div>
<div class="markdown-heading" dir="auto"><h3 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">刊物</font></font></h3><a id="user-content-publications" class="anchor-element" aria-label="永久链接：出版物" href="#publications"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">OpenSHC的详细信息发布在以下文章中：</font></font></p>
<p dir="auto"><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">B. Tam、F. Talbot、R. Steindl、A. Elfes 和 N. Kottege，“OpenSHC：多功能多足机器人控制器”，IEEE Access，卷。</font><font style="vertical-align: inherit;">8，第 188908-188926 页，2020 年，doi：</font></font><a href="https://doi.org/10.1109/ACCESS.2020.3031019" rel="nofollow"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">10.1109/ACCESS.2020.3031019</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">。</font></font></em></p>
<div class="markdown-heading" dir="auto"><h4 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">如何引用</font></font></h4><a id="user-content-how-to-cite" class="anchor-element" aria-label="永久链接：如何引用" href="#how-to-cite"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<div class="highlight highlight-text-bibtex notranslate position-relative overflow-auto" dir="auto"><pre><span class="pl-k">@article</span>{<span class="pl-en">tam2020openshc</span>,
    <span class="pl-s">author</span>=<span class="pl-s"><span class="pl-pds">{</span>Benjamin Tam and Fletcher Talbot and Ryan Steindl and Alberto Elfes and Navinda Kottege<span class="pl-pds">}</span></span>,
    <span class="pl-s">title</span>=<span class="pl-s"><span class="pl-pds">{</span>OpenSHC: A Versatile Multilegged Robot Controller<span class="pl-pds">}</span></span>,
    <span class="pl-s">journal</span>=<span class="pl-s"><span class="pl-pds">{</span>IEEE Access<span class="pl-pds">}</span></span>,
    <span class="pl-s">year</span>=<span class="pl-s"><span class="pl-pds">{</span>2020<span class="pl-pds">}</span></span>,
    <span class="pl-s">volume</span>=<span class="pl-s"><span class="pl-pds">{</span>8<span class="pl-pds">}</span></span>,
    <span class="pl-s">number</span>=<span class="pl-s"><span class="pl-pds">{</span><span class="pl-pds">}</span></span>,
    <span class="pl-s">pages</span>=<span class="pl-s"><span class="pl-pds">{</span>188908-188926<span class="pl-pds">}</span></span>,
    <span class="pl-s">doi</span>=<span class="pl-s"><span class="pl-pds">{</span>10.1109/ACCESS.2020.3031019<span class="pl-pds">}</span></span>
}</pre><div class="zeroclipboard-container">
    <clipboard-copy aria-label="Copy" class="ClipboardButton btn btn-invisible js-clipboard-copy m-2 p-0 tooltipped-no-delay d-flex flex-justify-center flex-items-center" data-copy-feedback="Copied!" data-tooltip-direction="w" value="@article{tam2020openshc,
    author={Benjamin Tam and Fletcher Talbot and Ryan Steindl and Alberto Elfes and Navinda Kottege},
    title={OpenSHC: A Versatile Multilegged Robot Controller},
    journal={IEEE Access},
    year={2020},
    volume={8},
    number={},
    pages={188908-188926},
    doi={10.1109/ACCESS.2020.3031019}
}" tabindex="0" role="button">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copy js-clipboard-copy-icon">
    <path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path>
</svg>
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-check js-clipboard-check-icon color-fg-success d-none">
    <path d="M13.78 4.22a.75.75 0 0 1 0 1.06l-7.25 7.25a.75.75 0 0 1-1.06 0L2.22 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018L6 10.94l6.72-6.72a.75.75 0 0 1 1.06 0Z"></path>
</svg>
    </clipboard-copy>
  </div></div>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">特征</font></font></h2><a id="user-content-features" class="anchor-element" aria-label="永久链接：特点" href="#features"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p align="center" dir="auto">
<animated-image data-catalyst="" style="width: 500px;"><a href="https://research.csiro.au/robotics/our-work/research-areas/legged-robots/" rel="nofollow" data-target="animated-image.originalLink"><img alt="子弹战龙" align="center" src="https://camo.githubusercontent.com/9240648b623aa4fc9a559f8c07da2071de8fa41fc05793e9fee8b0949362aaca/68747470733a2f2f692e696d6775722e636f6d2f6348415a3130592e676966" data-canonical-src="https://i.imgur.com/cHAZ10Y.gif" style="max-width: 100%; display: inline-block;" data-target="animated-image.originalImage"></a>
      <span class="AnimatedImagePlayer" data-target="animated-image.player" hidden="">
        <a data-target="animated-image.replacedLink" class="AnimatedImagePlayer-images" href="https://research.csiro.au/robotics/our-work/research-areas/legged-robots/" target="_blank">
          
        <span data-target="animated-image.imageContainer">
            <img data-target="animated-image.replacedImage" alt="子弹战龙" class="AnimatedImagePlayer-animatedImage" src="https://camo.githubusercontent.com/9240648b623aa4fc9a559f8c07da2071de8fa41fc05793e9fee8b0949362aaca/68747470733a2f2f692e696d6775722e636f6d2f6348415a3130592e676966" style="display: block; opacity: 1;">
          <canvas class="AnimatedImagePlayer-stillImage" aria-hidden="true" width="500" height="281"></canvas></span></a>
        <button data-target="animated-image.imageButton" class="AnimatedImagePlayer-images" tabindex="-1" aria-label="Play Bullet Syropod" hidden=""></button>
        <span class="AnimatedImagePlayer-controls" data-target="animated-image.controls" hidden="">
          <button data-target="animated-image.playButton" class="AnimatedImagePlayer-button" aria-label="Play Bullet Syropod">
            <svg aria-hidden="true" focusable="false" class="octicon icon-play" width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
              <path d="M4 13.5427V2.45734C4 1.82607 4.69692 1.4435 5.2295 1.78241L13.9394 7.32507C14.4334 7.63943 14.4334 8.36057 13.9394 8.67493L5.2295 14.2176C4.69692 14.5565 4 14.1739 4 13.5427Z">
            </path></svg>
            <svg aria-hidden="true" focusable="false" class="octicon icon-pause" width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg">
              <rect x="4" y="2" width="3" height="12" rx="1"></rect>
              <rect x="9" y="2" width="3" height="12" rx="1"></rect>
            </svg>
          </button>
          <a data-target="animated-image.openButton" aria-label="在新窗口中打开" class="AnimatedImagePlayer-button" href="https://research.csiro.au/robotics/our-work/research-areas/legged-robots/" target="_blank">
            <svg aria-hidden="true" class="octicon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16">
              <path fill-rule="evenodd" d="M10.604 1h4.146a.25.25 0 01.25.25v4.146a.25.25 0 01-.427.177L13.03 4.03 9.28 7.78a.75.75 0 01-1.06-1.06l3.75-3.75-1.543-1.543A.25.25 0 0110.604 1zM3.75 2A1.75 1.75 0 002 3.75v8.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 12.25v-3.5a.75.75 0 00-1.5 0v3.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-8.5a.25.25 0 01.25-.25h3.5a.75.75 0 000-1.5h-3.5z"></path>
            </svg>
          </a>
        </span>
      </span></animated-image>
</p>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">完全可配置，适用于具有不同物理特性的各种平台设计，包括最多八个腿，每个腿最多有 5 个自由度。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">四种动态可切换步态选项（波浪、缓步、波纹和三脚架）以及轻松设计自定义步态的能力。</font><font style="vertical-align: inherit;">（参见配置/readme.md）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">用户定义的身体间隙、步距和步频。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">6 个自由度的手动身体姿势。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">手动腿部操纵 - 同时选择最多两条腿，并切换笛卡尔空间中任一尖端位置的手动操纵或直接控制关节位置（仅限 3DOF 腿）。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">两种启动方式选择：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">直接模式将腿尖位置从初始位置线性移动到默认步行站立位置。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">完整的启动/关闭序列链，允许 Syropod 从“打包”状态启动，并生成一个序列，从地面站起来进入其默认的行走姿势。</font><font style="vertical-align: inherit;">同样能够关闭并转换回打包状态。</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">可选的阻抗控制器具有动态腿部刚度，以确保腿部与地面接触并提供一定程度的崎岖地形行走能力。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">可选 IMU 车身补偿，使用 IMU 数据始终保持车身水平。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">可选的倾斜补偿，力求在倾斜平面上行走时将身体重心保持在估计的支撑中心上方。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">可选的定制自动身体姿势系统，根据自动姿势参数的定义，循环地摆出每个机器人腿的姿势。</font><font style="vertical-align: inherit;">（参见配置/readme.md）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">巡航控制模式可以强制 Syropod 具有恒定的预定义输入速度或将当前输入速度设置为恒定。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">自动导航模式，当与正确的传感功能相结合并运行 syropod_auto_navigation 节点时，可以为输入航路点提供自主导航并避开障碍物。</font></font></li>
</ul>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">配置文件</font></font></h2><a id="user-content-config-files" class="anchor-element" aria-label="永久链接：配置文件" href="#config-files"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">有关参数的信息，请参阅config 文件夹中的</font></font><a href="/csiro-robotics/syropod_highlevel_controller/blob/master/config/readme.md"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">readme.md</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">。</font></font></p>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">节点</font></font></h2><a id="user-content-nodes" class="anchor-element" aria-label="永久链接：节点" href="#nodes"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<div class="markdown-heading" dir="auto"><h3 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">syropod_highlevel_control</font></font></h3><a id="user-content-syropod_highlevel_control" class="anchor-element" aria-label="永久链接：syropod_highlevel_control" href="#syropod_highlevel_control"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<div class="markdown-heading" dir="auto"><h4 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">订阅的主题</font></font></h4><a id="user-content-subscribed-topics" class="anchor-element" aria-label="固定链接：订阅的主题" href="#subscribed-topics"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<div class="markdown-heading" dir="auto"><h5 tabindex="-1" class="heading-element" dir="auto"><a href="https://github.com/csiro-robotics/syropod_remote"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">syropod_远程</font></font></a></h5><a id="user-content-syropod_remote" class="anchor-element" aria-label="永久链接：syropod_remote" href="#syropod_remote"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">系统状态：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：整个 Syropod 高级控制器系统的所需状态。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/system_state</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">机器人状态：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：机器人的期望状态。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/robot_state</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">所需速度：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：机器人所需的身体速度。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/desired_velocity</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Twist</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">所需姿势：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：机器人所需的身体姿势。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/desired_pose</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Twist</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">拍照模式：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：所需的手动人体姿势输入模式。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/pose_mode</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">姿势重置模式：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：所需的手动身体姿势重置模式。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/pose_reset_mode</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">步态选择：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：机器人步行控制器所需的步态选择。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/gait_selection</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">巡航控制模式：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：所需的巡航控制模式。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/cruise_control_mode</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">自动导航模式：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：所需的自动导航模式。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/auto_navigation_mode</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主要腿选择：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：选择用于主要操作的所需腿。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/primary_leg_selection</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主要腿部状态：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：选择用于主要操纵的腿部的所需状态。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/primary_leg_state</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主要尖端速度：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：选择用于主要操纵的腿的所需尖端速度。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/primary_tip_velocity</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Point</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">次要腿选择：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：选择所需的腿进行二次操作。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/secondary_leg_selection</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">次要腿状态：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：选择用于辅助操纵的腿部的所需状态。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/secondary_leg_state</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">二次尖端速度：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：选择用于二次操纵的腿所需的尖端速度。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/ secondary_tip_velocity</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Point</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">参数选择：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述： 可能调整所需的参数选择。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/parameter_selection</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">参数调整：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述： 所选参数的所需调整（增量/减量）。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_remote/parameter_ adjustment</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Int8</font></font></li>
</ul>
</li>
</ul>
<div class="markdown-heading" dir="auto"><h5 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">syropod_操作</font></font></h5><a id="user-content-syropod_manipulation" class="anchor-element" aria-label="永久链接：syropod_manipulation" href="#syropod_manipulation"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主要腿尖姿势：</font></font></p>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：为笛卡尔空间内的主要操作选择的腿部所需姿势。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_manipulation/primary_tip_pose</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Pose</font></font></li>
</ul>
</li>
<li>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">次要腿尖姿势：</font></font></p>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：为笛卡尔空间内的二次操作选择的腿部所需姿势。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_manipulation/secondary_tip_pose</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Pose</font></font></li>
</ul>
</li>
</ul>
<div class="markdown-heading" dir="auto"><h5 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">电机和传感器输入</font></font></h5><a id="user-content-motor-and-sensor-inputs" class="anchor-element" aria-label="永久链接：电机和传感器输入" href="#motor-and-sensor-inputs"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">惯性测量单元数据：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：来自板载 IMU 的输入数据。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/imu/数据</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：sensor_msgs::Imu</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">提示状态数据：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：包含每条腿尖端的力/扭矩和范围传感器数据的自定义消息。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/tip_states</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：syropod_high-level_controller::TipState</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">联合状态数据：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：硬件发布的 Syropod 内关节的实际状态。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：“ </font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/joint_states</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：sensor_msgs::JointState</font></font></li>
</ul>
</li>
</ul>
<div class="markdown-heading" dir="auto"><h4 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">已发表的主题</font></font></h4><a id="user-content-published-topics" class="anchor-element" aria-label="永久链接：已发布的主题" href="#published-topics"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<div class="markdown-heading" dir="auto"><h5 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Dynamixel 电机接口</font></font></h5><a id="user-content-dynamixel-motor-interface" class="anchor-element" aria-label="永久链接：Dynamixel 电机接口" href="#dynamixel-motor-interface"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">所需的关节位置（每个关节）
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：每个单独关节所需的关节位置。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod/*LEG_ID*_*JOINT_ID*_joint/command</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Float64</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">期望的联合状态（组合）
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：所有关节所需的关节状态数组。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/desired_joint_state</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：sensor_msgs::JointState</font></font></li>
</ul>
</li>
</ul>
<div class="markdown-heading" dir="auto"><h5 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">各种各样的</font></font></h5><a id="user-content-miscellaneous" class="anchor-element" aria-label="永久链接：其他" href="#miscellaneous"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">身体速度：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：机器人身体所需的速度。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_highlevel_controller/body_velocity</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Twist</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">身体姿势：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：机器人身体所需的位姿。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/syropod_highlevel_controller/pose</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：geometry_msgs::Twist</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">ASC 六足位移台状态：（待删除）
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">描述：用于切换磁脚的 ASC Hexapod 特定消息（每条腿是否处于站立状态的布尔值）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/leg_state_*LEG_ID*_bool</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：std_msgs::Bool</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">腿部状态：
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">说明： 支路状态消息结合了多个支路特定数据以供调试使用。
</font></font><ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">header：带时间戳的标头</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">名称： 腿名称</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">walker_tip_pose：从行走控制器生成的所需尖端姿势（walk_plane 框架）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">target_tip_pose：挥杆周期结束时未来所需的尖端姿势（walk_plane 框架）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">poser_tip_pose：从姿势控制器（base_link 帧）生成的所需尖端姿势</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">model_tip_pose：由模型反向/正向运动学最终确定的所需尖端姿势（base_link 框架）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">model_tip_velocity：由模型逆/正向运动学（模型）最终确定的所需尖端速度。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">joint_positions：每个关节所需的关节位置数组。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">joint_velocities：每个关节所需的关节速度数组。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">joint_efforts：每个关节所需的联合努力的数组。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">tance_progress：沿着姿态状态的进度（0.0-&gt;1.0，如果没有处于姿态则为-1）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">swing_progress：沿着摇摆状态的进度（0.0-&gt;1.0，如果不在摇摆状态则为-1）</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">time_to_swing_end：该腿完成摆动周期的时间。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">pose_delta：从当前时间到摆动周期结束时，walk_plane 坐标系相对于世界坐标系的姿态估计变化。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">auto_pose：从自动姿势系统应用于该腿的自动循环姿势。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">tip_force：阻抗控制计算中使用的尖端力矢量</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">导纳_delta：垂直尖端位置偏移 - 导纳控制的输出。</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">virtual_stiffness：导纳控制计算中使用的当前虚拟刚度</font></font></li>
</ul>
</li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">主题：</font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">/shc/*LEG_ID*_leg/state</font></font></em></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">类型：syropod_highlevel_controller::LegState（自定义消息）</font></font></li>
</ul>
</li>
</ul>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">变更日志</font></font></h2><a id="user-content-changelog" class="anchor-element" aria-label="永久链接：变更日志" href="#changelog"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">有关发布详细信息，</font><font style="vertical-align: inherit;">请参阅</font></font><a href="/csiro-robotics/syropod_highlevel_controller/blob/master/CHANGELOG.md"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">CHANGELOG.md 。</font></font></a><font style="vertical-align: inherit;"></font></p>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">作者</font></font></h2><a id="user-content-authors" class="anchor-element" aria-label="永久链接：作者" href="#authors"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<ul dir="auto">
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">弗莱彻·塔尔博特</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">瑞恩·斯坦德尔</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">托马斯·莫尔纳</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">托马斯·洛</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">奥沙达·贾亚辛格</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">纳文达·科特吉</font></font></li>
</ul>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">执照</font></font></h2><a id="user-content-license" class="anchor-element" aria-label="永久链接：许可证" href="#license"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">该项目根据 CSIRO 开源软件许可协议（BSD / MIT 许可的变体）获得许可 - 有关详细信息，请参阅</font></font><a href="/csiro-robotics/syropod_highlevel_controller/blob/master/LICENSE"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">许可</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">文件。</font></font></p>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">贡献</font></font></h2><a id="user-content-contributing" class="anchor-element" aria-label="永久链接：贡献" href="#contributing"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">感谢您有兴趣做出贡献。</font><font style="vertical-align: inherit;">我们鼓励社区创建新功能并修复错误。</font></font><a href="https://github.com/csiro-robotics/syropod_highlevel_controller/issues"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">如果这是一个新功能，请通过问题跟踪器</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">创建一个新问题</font><font style="vertical-align: inherit;">并描述预期的功能，以便我们可以讨论实现。</font><font style="vertical-align: inherit;">另外，搜索现有问题并对您提议的工作发表评论。</font><font style="vertical-align: inherit;">请分叉该存储库，处理您的更改，然后发送拉取请求。</font></font></p>
<div class="markdown-heading" dir="auto"><h2 tabindex="-1" class="heading-element" dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">问题</font></font></h2><a id="user-content-issues" class="anchor-element" aria-label="永久链接：问题" href="#issues"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z"></path></svg></a></div>
<p dir="auto"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">请使用</font></font><a href="https://github.com/csiro-robotics/syropod_highlevel_controller/issues"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">问题跟踪器</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">报告错误或通过电子邮件</font></font><a href="mailto:shc-support@csiro.au"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">shc-support@csiro.au</font></font></a><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">与我们联系。</font></font></p>
</article></div>
