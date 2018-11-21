# stm8_arduino
## 对官方版本NUCLEO_8S208RB部分做了一些改动
- 修改了boards.txt和platform.txt，将预定义宏改为STM8S103，可以通过stm8flasher方式烧写
- 注释了一些STM8S103F3没有的资源代码，使得编译通过，但运行不成功，待后续开发
