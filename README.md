# MaRS Recruitment TaSK #2

## *Task:*
Make an object counter, which uses an IR sensor to count the number of passing objects and display the count on an LCD screen. 

---
## *Aim:*

  The aim of this project is to design a object counter that uses an IR sensor for detecting the number of object that crosses it and to display the count on a LCD Screen and update it as per required.


---
## *Principle:*
 
-The IR sensor detects an object when it interrupts the infrared beam.<br>
-Every time an object passes, the count is incremented.<br>
-The total count is displayed in real-time on the LCD screen.<br>

---
## *Components Used:*

Arduino UNO<br>
IR Sensor<br>
LCD(16x2)<br>
I2C<br>
Jumper Wires<br>
Arduino IDE<br>
Bread Board


---
## *Logic And Thought Process:*
  When I first saw the question, I did not think deeper and I started coding it.Only later I realised,with the help of my seniors that I had committed a logical error.My first code incremented count also when the object was stationary infront of the IR sensor.My only condition was,<br><br>if(ir_value==HIGH){<br>count++;<br>}<br>which was wrong as stated.The logic of the corrected code is as follows:-<br>
I was surfing through google, when I was advised to think a little bit more..After a series of hit and trials, I declared a boolean variable which was initialised FALSE and was updated to TRUE when the IR sensed something...With that boolean in hand I created another "if statement" which incremented count when the conditions boolean==TRUE and the IR's reading being low were satisfied.The if statement also changed the boolean value back to FALSE once the count was incremented.So,when an object comes in the range of the IR sensor...It is detected and the boolean value is changed to TRUE...If the object stays there and is still in the range of IR sensor, no change takes place...the state of the sensor is read again in the second if statement...If the value becomes low i.e., when the object crosses the field of IR sensor,count is incremented and the boolean is changed back to FALSE and the value of count is displayed on the LCD.So basically only when the object crosses the IR sensor the count value is incremented.




---

## *Connections:*
-**IR SENSOR:-** <br>
 GND pin ->  GND pin of Arduino UNO<br>VCC pin -> 3.3v power pin of the Arduino UNO<br>D0 pin -> Digital pin 2 of the Arduino<br>-**The (16x2) LCD is connected to a I2C module:-**<br><br>The GND pin -> GND of Arduino<br>The VCC pin -> 5v power pin of Arduino<br>SDA->Analog pin 4<br>SDL->Analog pin 5.

---
## *References:*
Nothing..😜(Thanks to Seniors)<br>
(Libraries from GitHub)
