# Room Temperature Monitor - *Engineering Class Final Project*
![cad](https://github.com/ibyteibit/Room-Temperature-Monitor/blob/main/pics/CAD.png) ![final](https://github.com/ibyteibit/Room-Temperature-Monitor/blob/main/pics/Final.png)
## Description
- A Temperature Monitor designed to detect the air temperature and display it on the LCD
- When the temperature falls beyond a user-specified range, an alarm is triggered (beeping buzzer and flashing LED)
- Can be powered internally with a 9V battery, or externally with a cable for longer periods
## Materials & Tools

## Methodology
- Modeled the enclosure with CAD (OnShape) and 3D printed the internal battery holder (Cura)
- Connected internal wiring safely and efficiently with solder, heat-shrink tubing, spade connectors, twist-nut caps, PCB, and header pins for the Arduino & LCD
- Converted the voltage from the TMP36 sensor to a °F temp in the C++ code
