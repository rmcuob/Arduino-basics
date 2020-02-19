# Arduino Hands-on Workshop
Arduino is an open-source platform used for building electronics projects. Arduino consists of both a physical programmable circuit board (often referred to as a microcontroller) and a piece of software, or IDE (Integrated Development Environment) that runs on your computer, used to write and upload computer code to the physical board.

In this workshop you will be introduced to:

- micro controllers and the Arduino 
- Arduino Pinout
- Controlling devices 
- Time controlled devices 
- Introduction to breakout boards (using IR proximity sensor)
- Hands-on LED Light On/Off function with IR proximity sensor 
- Hands-on assignment (project)


## Requirements:

- Download [Ardunio IDE](https://www.arduino.cc/en/Main/Software)
- Sign up to [TinkerCAD](https://www.tinkercad.com/)

## Code Cheatsheet 

### Digital io 

- Setup pin as INPUT or OUTPUT pin:
      
      Syntax
        pinMode(pin, mode)

      Parameters
        pin: the Arduino pin number to set the mode of.
        mode: INPUT, OUTPUT, or INPUT_PULLUP. See the Digital Pins page for a more complete description of the functionality.

      Returns
        Nothing
      
- Read digital HIGH or LOW from pin:
      
        Syntax
          digitalRead(pin)

        Parameters
          pin: the Arduino pin number you want to read

        Returns
          HIGH or LOW
      
- Set pin to HIGH or LOW:

      Syntax
        digitalWrite(pin, value)

      Parameters
        pin: the Arduino pin number.
        value: HIGH or LOW.
        
      Returns
        Nothing
### Communication

- Setup Serial:

      Serial.begin(speed)  //usually speed for the Ardunio UNO is set to 9600
      Serial.begin(speed, config) 
      
      speed: in bits per second (baud). Allowed data types: long.
      
- Print to Serial Monitor:

      Syntax
        Serial.println(val)
        Serial.println(val, format)

      Parameters
        Serial: serial port object. See the list of available serial ports for each board on the Serial main page.
        val: the value to print. Allowed data types: any data type.
        format: specifies the number base (for integral data types) or number of decimal places (for floating point types).

      Returns
        println() returns the number of bytes written, though reading that number is optional. Data type: size_t.

### Advanced I/O
- tone:

        Description:
        Generates a square wave of the specified frequency (and 50% duty cycle) on a pin.
        Only one tone can be generated at a time. If a tone is already playing on a different pin, the call to tone() will have no      effect. If the tone is playing on the same pin, the call will set its frequency.

      Use of the tone() function will interfere with PWM output on pins 3 and 11 (on boards other than the Mega).


      Syntax
         tone(pin, frequency)
         tone(pin, frequency, duration)

      Parameters
        pin: the Arduino pin on which to generate the tone.
        frequency: the frequency of the tone in hertz. Allowed data types: unsigned int.
        duration: the duration of the tone in milliseconds (optional). Allowed data types: unsigned long.

      Returns
        Nothing
 

## References:
- [Ardunio Offical Reference](https://www.arduino.cc/reference/en/)

## Credits:
- Slides [Theodore Harki](https://github.com/Theod0re)

## Contributors:
- [Omar Hamza](https://github.com/omarmhamza)
- [Mahmoud Matar](https://github.com/mahmoud451)
