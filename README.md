# Automated-Street-Lighting-Using-IOT
➢ Needs no manual operation for switching ON and OFF. When there is a need of light it automatically switches ON. When darkness rises to a certain level then sensor circuit gets activated and switches ON and when there is other source of light i.e. daytime, the street light gets OFF. The sensitiveness of the street light can also be adjusted. In our project we have used six LEDs as a symbol of street lamp, and for high power switching we have connected Relay (electromagnetic switch). \
➢ The output has only two states high and low and cannot remain in any intermediate stage. It is powered by an AC source.  \
➢ LDR (Light Dependent Resistor) is a special type of resistor whose value depends on the brightness of the light which is falling on it. It has resistance of about 1 mega ohm when in total darkness, but a resistance of only about 5k ohms when brightness illuminated. It responds to a large part of light spectrum. Since, voltage is directly proportional to conductance so more voltage we will get from this divider when LDR is getting light and low voltage in darkness.  \


# Software Requirements:
  ➢ Arduino 1.8.5 (IDE) 
  
# Hardware Requirements:
  ➢ Arduino UNO R3 \
  ➢ AC power supply \
  ➢ Light Dependent Resistor (LDR) Sensor (Day/Night Detection)\
  ➢ Cables (Male-to-Male and Female-to-Female) \
  ➢ LEDs (Light Emitting Diodes) \
  ➢ 2 Bulbs (0.5 watt) \
  ➢ Relay \
  ➢ Resistor 10K \
  ➢ IR Sensors – 4 (Infrared Sensors – Obstacle Detection) \
  ➢ Breadboard
  
# Major Functionality
  ➢ As soon as any obstacle is detected by the infrared sensor, the light and the bulb turns ON and remains in that state right up until that vehicle is passed through. \
  ➢ Day and night detection is done extensively that is, no unnecessary use of street lights and no unnecessary wastage of energy and resources. \
  ➢ Moreover, a constant supply of LED and bulb output is provided using relay along the path of traversal of the automobile. Which in turn, keeps turning on the nearest LED and the corresponding bulb also switches on just when the vehicle is about to pass through the street light. 

# Flowchart
➢ Whenever the LDR sensor senses the light intensity, it gets passed onto the declared variable ‘c’. \
➢ Which then, is assigned the LDR input and is checked on the basis of trial and error whether the value is less than 1000. If so, an integer variable,’pr’ for the IR sensor is declared. \
➢ That integer variable is assigned the IR input i.e., the obstacle detection task. \
➢ If the pr variable reads ‘HIGH’ i.e., the IR sensor detects any obstacle, it turns the LED on and with the help of the relay, bulbs are turned on as well. \
➢ Otherwise, two more scenarios come into picture. 1) The LDR sensor does not detect light (daytime) and the lights remain off or 2) The IR sensor does not any obstacle and again, the lights remain off for the rest of the course of the program. \
➢ And this is how in 3 different scenarios the program terminates.

# Limitations of Project
➢ The project heavily relies on IR sensors and its working. In a scenario where the car is moving with some higher speeds or better yet, multiple cars are moving with high speeds, incompetence in the IR sensors increases and the results might not be in our favour that is, faulty results can be the outcome. \
➢ Moreover, the signal strength, which has been amplified using relay module or transistor is heavily dependent on relay-used as a switch which in itself, is a multiport repeater that is, in the case of signal breakage due to interference by EM waves (Elecetromagnetic Waves) it wou;d replicate the signals and not lose the signal strength or its highest intensity. \
➢ And, better prospects for its implementations in society that is, its primary implementation in parks, housing colonies, government quarters should be thought of and some action plan along with the initiative should be ready. \
➢ Prospects for gathering real-time tarffic analysis by using various Google services such as GPS, Google Maps etc.
