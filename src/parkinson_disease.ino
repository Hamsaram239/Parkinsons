#include<LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 11, d5 = 10, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int X=A3;
int Y=A2;
int sound=A1;
int emg=A0;
int valueX;
int valueY;
int emgvalue;
int value1;
void setup() {
  // put your setup code here, to run once:
pinMode(X,INPUT);
pinMode(Y,INPUT);
pinMode(sound,INPUT);
pinMode(emg,INPUT);
Serial.begin(9600);
lcd.begin(16,2);
lcd.clear();
lcd.print("PARKINSON DISEASE");
lcd.setCursor(0,1);
lcd.print("MONITOR SYSTEM");
Serial.print("PARKINSON DISEASE MONITOR SYSTEM");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
EMG_MONITOR();
accelometerRead();
soundcheck();
}

void EMG_MONITOR(){
  
//int i=0;
 emgvalue=analogRead(emg);
 lcd.clear();
 lcd.print("emgvalue:");
 lcd.print(emgvalue);
Serial.print("EMGvalue:");
Serial.println(emgvalue);
delay(1000);
if(emgvalue>500);
{
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("PARKINSON DISEASE ");
 lcd.setCursor(0,1);
 lcd.print("DETECTED");
 delay(1000); 
}
}
void accelometerRead(){
  valueX=analogRead(X);
  valueY=analogRead(Y);
  Serial.println(valueX);
  Serial.println(valueY);
  delay(1000);
  if(valueX>400 || valueX<300)
  {
    lcd.clear();
    lcd.print("FELL DOWN");
    //Serial.print("A");
    
    delay(1000);
  }
//  if(valueY>400 || valueY<300)
//  {
//    lcd.clear();
//    lcd.print("FELL DOWN");
////    delay(1000);
//  }
  else{
     lcd.clear();
    lcd.print("NORMAL");
   
   Serial.print("NORMAL");
    delay(1000);
    
  }
  
}
void soundcheck(){
  value1=analogRead(sound);
  Serial.print("NoiseValue:");
  Serial.print(value1);
  if(value1<100){
    lcd.clear();
    lcd.print("LOW VOICE");
    delay(1000);
  }
}
 
