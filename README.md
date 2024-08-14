This repository contains the code and setup instructions for a line follower robot using an Arduino board. The bot is designed to follow a black line on a white surface using two IR sensors and a set of motors.

*Hardware Setup
  Arduino Board: Used to control the bot.
  Motors: Four motor pins are connected to pins 2, 3, 4, and 5 of the Arduino.
  IR Sensors: Two IR sensors are connected to pins 6 and 7 of the Arduino.

*Pin Configuration
  Motor Pins:
  Motor 1: Pin 5 (IN1), Pin 4 (IN2)
  Motor 2: Pin 3 (IN3), Pin 2 (IN4)
  IR Sensor Pins:
  IR Sensor 1: Pin 6
  IR Sensor 2: Pin 7

*Uploading the Code
  1. Connect your Arduino: Use the USB cable to connect your Arduino board to your computer.
  2. Select your board and port: In the Arduino IDE, go to Tools > Board and select your Arduino board. Then, go to Tools > Port and select the correct port for your Arduino.
  3. Upload the code: Click the upload button (right arrow) in the Arduino IDE to compile and upload the code to your Arduino board.

*Usage
  Once the code is uploaded, the 8-bit LED module should start running the sequence described in the loop function. Each LED will light up in sequence with a delay of 500 milliseconds between each step.

*Contributing
  If you would like to contribute to this project, feel free to fork the repository and submit a pull request. Contributions are welcome!

*Contact
  For any questions or suggestions, please feel free to open an issue or contact me at nasincubator@gmail.com.com or whatsapp us at +91 95990 63468/ 8920562814

By following these instructions, you should be able to successfully control an 8-bit LED module with your Arduino board. Happy coding!
