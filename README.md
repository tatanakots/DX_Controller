# DX Controller

一个基于MaiPico再开发的适用于某品牌洗衣机的控制器。

### 项目特点

1. 由于 ~~ 买错配件 ~~ 新版比较好看，所以主控替换为搭载RP2350的树莓派Pico 2。
1. 更改了部分按键映射，以匹配丝印的键位。
1. 增加了TDX Pro，可以制作大台。（还在测试中）

### 串口配置

以下配置说明均为默认 `config_common.json` 中的配置，如果你修改过 `config_common.json` 中的配置，请根据你的配置进行修改。

| 串口名称 | 1P端口号 | 2P端口号 |
| ------- | -------- | -------- |
| TDX Controllor Command Line Port | 不重复的随意端口号 | 不重复的随意端口号 |
| TDX Controllor Touch Port | COM3 | COM4 |
| TDX Controllor LED Port | COM21 | COM23 |
| TDX Controllor AIME Port | COM1 | 仅需设置一个即可，无法同时使用两个读卡器 |

### 命令行使用说明

可以通过[这个链接](https://googlechromelabs.github.io/serial-terminal/)打开命令行工具，选择 `TDX Controllor Command Line Port` 连接后按提示使用即可。

### 关于授权

由于固件修改自[MaiPico](https://github.com/whowechina/mai_pico)，而该项目中对固件指定了使用[GPL 3.0](/firmware/LICENSE)协议，所以固件部分按照[GPL 3.0](/firmware/LICENSE)协议开源，其余我自己创建和修改的部分则按照[MIT](/LICENSE)协议开源。
