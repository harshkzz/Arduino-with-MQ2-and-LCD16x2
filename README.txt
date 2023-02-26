# Arduino-with-MQ2-and-LCD16x2-i2c
MQ2 Gas Sensor with Arduino and LCD 16x2 using i2c Interface

This project helps you to print various proportion of gasses present in the atmosphere.
For this particular example we will be measuring LPG, Smoke and CO2 in PPM (parts per million).

Features
* Print the amount of different gasses present in the atmosphere in PPM.
* Inbuilt potentiometer on the i2c board allows you to control the brightness of the display.
* Easy 4 wire connection.


Parts 
* Arduino UNO (could be any arduino board ie, mega, nano etc. Make sure to select the right board in the arduino IDE )
* 16x2 LCD display (could be of any resolution as long as it has the ability to be connected with i2c module)
* Arduino compatible i2c Board
* MQ2 Gas Sensor Module
* Jumper Wire for connection

Prerequisite (Software)
* Arduino IDE
* LiquidCrystal Library (give as zip file)
* DHT Library (give as zip file)

Step 1- Getting the i2c address
While working with i2c devices we first need to find their i2c address which allows us to communicate with the i2c interface.
For example mine had 0x3F as the address. Remember this address as this will be needed in the second code.
Another famous i2c address is 0x27 so chances are yours will be either of two..
1. Connect the i2c board to the LCD as shown in the image given.
2. Follow the connection given in the circuit diagram between i2c Board and Arduino with the help of jumper wire.
   1. VCC => 5V
   2. GND => GND
   3. SDA => A4
   4. SCL => A5
3. Connect your Arduino board to your computer with the appropriate cable.
4. Past the first code (LCD_ADDRESS.ino) in the Arduino IDE.
5. Go to the Tools => Board and select your particular board
6. In the Tools section also select the COM port in which you have connected your arduino board
(If you are using a genuine Arduino board then it will show your arduino board right beside the COM port number ).
7. If you are still unable to determine your COM port then right click on the home button (windows) and open device manager.
In device manager expand the ports section and from there you’ll be able to determine your COM port.
8. After selecting the right COM and Arduino Board upload the code to the Arduino board.
9. When you see “Done Uploading” on the top of the terminal, goto Tools and select the serial monitor.
10.  After few seconds this should be displayed
 Found Address
 0x3F
 Note down the address for future reference


Step 2- Connecting MQ2 Gas Sensor
1. To connect the MQ2 gas sensor with arduino follow the circuit diagram
   1. VCC => 5V
   2. GND => GND
   3. AO => A0 

Step 3-
Now change the address in the given field in the code with your lcd address and upload the second code which is MQ2_LCD 
onto the board and check if text is being displayed or not. If not, try turning the potentiometer on the i2c board.

Video Instruction
Refer to this video for full tutorial:-
https://www.youtube.com/watch?v=MMUsPS5HUYA
