# Password-Based-Circuit-Breaker
A device which uses a microcontroller, in the form of Arduino Uno, to turn a circuit on/off by checking the password entered.

**Introduction**
Password Based Circuit Breaker is a project that helps in controlling the circuit with the help of a password. The control (ON/OFF) of the input circuits lies with the user. This project is arranged in such a way that the user has to enter the password to turn ON/OFF the circuit.
This project consists of an Arduino Uno(ATmega328P), 4x3 Matrix Keypad, 16 x 2 LCD Display, 2–Channel Relay Module and two Loads. Here, the LCD is used to display the information related to the load and the keypad is used to enter the password. Two loads (acting as input circuits) are used to indicate circuit breaker state (Light ON – Circuit Active and Light OFF – Circuit Not Active).
This project aims at ensuring the safety of the user while dealing with high voltage circuits. If there is any fault in the circuit connections, then the user will switch off the power supply to the circuit by entering the password and comfortably repair the connections, and afterwards the used switch on the supply to the particular circuit by entering the appropriate password. Separate passwords are assigned for each circuit.

**Project Description**
This project uses a microcontroller, in the form of Arduino Uno, to turn a circuit on/off by checking the password entered.
It consists of a 4x3 keypad (uses digital pins of Arduino) to help enter the password and a 16x2 LCD (connected to Arduino via an I2C Module) is used to display the password entered and displays the status of the load. A relay module is used to connect the two AC loads to the Arduino Uno. The relay module turns the circuit on or off based on the password entered.
The entire setup is soldered on a zero board. The relay module can be used to connect any 2 loads to make their operation password based.

**Component Description**
The following components are used in the project:
1. Arduino Uno
Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller. The board can operate on an external supply from 6 to 20 volts. If supplied with less than 7V, however, the 5V pin may supply less than five volts and the board may become unstable. If using more than 12V, the voltage regulator may overheat and damage the board. The recommended range is 7 to 12 volts.
2. 4x3 Keypad
This keypad has 12 buttons, arranged in a telephone-line 3x4 grid. The keys are connected into a matrix, so you only need 7 microcontroller pins (3-columns and 4-rows) to scan through the pad.
3. 16x2 LCD Display
As the name suggests, it includes 16 Columns & 2 Rows so it can display 32 characters (16×2=32) in total & every character will be made with 5×8 (40) Pixel Dots. So the total pixels within this LCD can be calculated as 32 x 40 otherwise 1280 pixels. In LCD, instead of electron diffraction at a glass display, a liquid crystal display has a backlight that provides light to each pixel that is arranged in a rectangular network.
4. I2C Module
The LCD is not directly connected to the Arduino board but is connected using an I2C module. An I2C Module has an inbuilt PCF8574 I2C chip that converts I2C serial data to parallel data for the LCD display. These modules are currently supplied with a default I2C address of either 0x27 or 0x3F. The I2C module helps reduce the number of digital pins used to connect it to Arduino.
5. 2 Channel Relay Module
The 2 Channel Relay Module is a convenient board which can be used to control high voltage, high current load such as motor, solenoid valves, lamps and AC load. It is designed to interface with microcontrollers such as Arduino, PIC etc. The relay has two outputs-normally open and normally closed (NO and NC). When the IN1 or IN2 pin is connected to ground, NO will be open and NC will be closed, and when IN1 or IN2 is not connected to ground the opposite occurs.
Dual-Channel Relay Module Specifications
· Supply voltage – 3.75V to 6V
· Trigger current – 5mA
· Current when relay is active - ~70mA (single), ~140mA (both)
· Relay maximum contact voltage – 250VAC, 30VDC
· Relay maximum current – 10A



**ARDUINO CODE:-**Attached in the repository.
