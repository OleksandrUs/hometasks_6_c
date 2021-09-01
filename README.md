**Description**

*Home tasks are:*

Develop application that communicates with PC trough UART.
• Application should send just echo.
• You should use only CMSIS library.
• UART driver should contain following functions:
- init();
- open();
- read();
- write();
- close();
- deinit();

**Requirements**

CubeMX 6.3.0<br>
CubeIDE 1.7.0<br>
Discovery kit with stm32f303vct6<br>

**Build project**
- To build the program open the project in CubeIDE and run the command in menu Project->Build All (Ctrl+B)<br>

**Run the program**
- To run the program click Run button on the toolbox or run the command in menu Run->Run<br>
Discovery kit with stm32f303vct6 must be connected to the computer.

**Notes**
The program is in file main.c (./uart_echo/Core/Src/main.c).

