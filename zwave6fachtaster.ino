// LED pin numbe
// 13 pin - user LED of Z-Uno board
#define switch1 9
#define switch2 10
#define switch3 11
#define switch4 12
#define switch5 13
#define switch6 14
#define Led1 15
#define Led2 19
#define Led3 20
#define Led4 21
#define Led5 23
#define Led6 22

// Last saved LED value
byte currentValue1;
byte currentValue2;
byte currentValue3;
byte currentValue4;
byte currentValue5;
byte currentValue6;
byte val1;
byte val2;
byte val3;
byte val4;
byte val5;
byte val6;
byte state1  = 1;
byte state2  = 1;
byte state3  = 1;
byte state4  = 1;
byte state5  = 1;
byte state6  = 1;

ZUNO_SETUP_CHANNELS(ZUNO_SWITCH_BINARY(getter1, setter1),
                    ZUNO_SWITCH_BINARY(getter2, setter2),
                    ZUNO_SWITCH_BINARY(getter3, setter3),
                    ZUNO_SWITCH_BINARY(getter4, setter4),
                    ZUNO_SWITCH_BINARY(getter5, setter5),
                    ZUNO_SWITCH_BINARY(getter6, setter6),
                    ZUNO_SENSOR_BINARY(ZUNO_SENSOR_BINARY_TYPE_GENERAL_PURPOSE, getter7));

// the setup routine runs once when you press reset:
void setup() {
  pinMode(Led1, OUTPUT); // setup pin as output
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode (switch1, INPUT);
  pinMode (switch2, INPUT);
  pinMode (switch4, INPUT);
  pinMode (switch4, INPUT);
  pinMode (switch5, INPUT);
  pinMode (switch6, INPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  val1 = digitalRead(switch1);
  val2 = digitalRead(switch2);
  val3 = digitalRead(switch3);
  val4 = digitalRead(switch4);
  val5 = digitalRead(switch5);
  val6 = digitalRead(switch6);
  
  if (val1 == HIGH && state1 == 1){ 
    digitalWrite(Led1,LOW );
    currentValue1 = 0;
    state1 = 0;
    zunoSendReport(1);}
    
  if (val1 == LOW && state1 == 0 && currentValue1 == 0)
  {
    currentValue1 = 255;
    digitalWrite (Led1, HIGH);
    state1 = 1;
     zunoSendReport(1);
     }
 

if (val2 == HIGH && state2 == 1){ 
    digitalWrite(Led2,LOW );
    currentValue2 = 0;
    state2 = 0;
    zunoSendReport(2);}
    
  if (val2 == LOW && state2 == 0 && currentValue2 == 0)
  {
    currentValue2 = 255;
    digitalWrite (Led2, HIGH);
    state2 = 1;
     zunoSendReport(2);
     }
     

if (val3 == HIGH && state3 == 1){ 
    digitalWrite(Led3,LOW );
    currentValue3 = 0;
    state3 = 0;
    zunoSendReport(3);}
    
  if (val3 == LOW && state3 == 0 && currentValue3 == 0)
  {
    currentValue3 = 255;
    digitalWrite (Led3, HIGH);
    state3 = 1;
     zunoSendReport(3);
     }
   
 if (val4 == HIGH && state4 == 1){ 
    digitalWrite(Led4,LOW );
    currentValue4 = 0;
    state4 = 0;
    zunoSendReport(4);}
    
  if (val4 == LOW && state4 == 0 && currentValue4 == 0)
  {
    currentValue4 = 255;
    digitalWrite (Led4, HIGH);
    state4 = 1;
     zunoSendReport(4);
     }
 

if (val5 == HIGH && state5 == 1){ 
    digitalWrite(Led5,LOW );
    currentValue5 = 0;
    state5 = 0;
    zunoSendReport(5);}
    
  if (val5 == LOW && state5 == 0 && currentValue5 == 0)
  {
    currentValue5 = 255;
    digitalWrite (Led5, HIGH);
    state5 = 1;
     zunoSendReport(5);
     }
  

if (val6 == HIGH && state6 == 1){ 
    digitalWrite(Led6,LOW );
    currentValue6 = 0;
    state6 = 0;
    zunoSendReport(6);}
    
  if (val6 == LOW && state6 == 0 && currentValue6 == 0)
  {
    currentValue6 = 255;
    digitalWrite (Led6, HIGH);
    state6 = 1;
     zunoSendReport(6);
     }    
  }
  // loop is empty, because all the control comes over the Z-Wave

void setter1(byte value) {
  if (value > 0) {               
    digitalWrite (Led1, HIGH);
    Serial.print(value);
  } else {                         
    digitalWrite(Led1, LOW);   
  }
  currentValue1 = value;
}

byte getter1() {
  return currentValue1;
  }

  
void setter2(byte value) {
  if (value > 0) {               
    digitalWrite (Led2, HIGH);
    Serial.print(value);
  } else {                         
    digitalWrite(Led2, LOW);   
  }
  currentValue2 = value;
}

byte getter2() {
  return currentValue2;
  }

void setter3(byte value) {
  if (value > 0) {               
    digitalWrite (Led3, HIGH);
    Serial.print(value);
  } else {                         
    digitalWrite(Led3, LOW);   
  }
  currentValue3 = value;
}

byte getter3() {
  return currentValue3;
  }

void setter4(byte value) {
  if (value > 0) {               
    digitalWrite (Led4, HIGH);
    Serial.print(value);
  } else {                         
    digitalWrite(Led4, LOW);   
  }
  currentValue4 = value;
}

byte getter4() {
  return currentValue4;
  }

void setter5(byte value) {
  if (value > 0) {               
    digitalWrite (Led5, HIGH);
    Serial.print(value);
  } else {                         
    digitalWrite(Led5, LOW);   
  }
  currentValue5 = value;
}

byte getter5() {
  return currentValue5;
  }  

void setter6(byte value) {
  if (value > 0) {               
    digitalWrite (Led6, HIGH);
    Serial.print(value);
  } else {                         
    digitalWrite(Led6, LOW);   
  }
  currentValue6 = value;
}

byte getter6() {
  return currentValue6;
  }



  
byte getter7() {
  Serial.println("reportgett2");
  Serial.println(currentValue1);
  return currentValue1;
  
}
