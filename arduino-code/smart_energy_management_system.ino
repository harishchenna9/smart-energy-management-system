// C++ code
//
#include<LiquidCrystal.h>
LiquidCrystal lcd(22,23,25,27,29,21);
const int solar1=53;
const int solar2=51;
const int solar3=13;
const int solar4=47;
const int solar5=37;
const int battery1=45;
const int battery2=43;
const int battery3=41;
const int battery4=39;
const int battery5=35;
const int relay1=2;
const int relay2=3;
const int relay3=4;
const int Domestic_L=5;
const int Industrial_L1=6;
const int Industrial_L2=7;
const int Emergency_L=8;
void setup()
{
  lcd.begin(16,4);
  pinMode(solar1, INPUT);
  pinMode(solar2, INPUT);
  pinMode(solar3, INPUT);
  pinMode(solar4, INPUT);
  pinMode(solar5, INPUT);
  pinMode(battery1, INPUT);
  pinMode(battery2, INPUT);
  pinMode(battery3, INPUT);
  pinMode(battery4, INPUT);
  pinMode(battery5, INPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(Domestic_L,INPUT);
  pinMode(Industrial_L1,INPUT);
  pinMode(Industrial_L2,INPUT);
  pinMode(Emergency_L,INPUT);
 lcd.print("S H E M S");
  Serial.begin(9600);
}

void loop()
{
  int solar_voltage = digitalRead(solar1) + digitalRead(solar2) + digitalRead(solar3) + digitalRead(solar4) + digitalRead(solar5);
  int battery_voltage = digitalRead(battery1) + digitalRead(battery2) + digitalRead(battery3) + digitalRead(battery4) + digitalRead(battery5);
   if((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==LOW)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==LOW)){
      if(solar_voltage>=2){
      digitalWrite(relay1,LOW);
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY SOLAR");
  delay(500);
      
      }
      else if (battery_voltage>=2){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY BATTERY");
  delay(500);
        
      }
      else if ((solar_voltage+battery_voltage)>=2){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<2){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
     else if((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==LOW)){
      if(solar_voltage>=4){
      digitalWrite(relay1,LOW);
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY SOLAR");
  delay(500);
  
      }
      else if (battery_voltage>=4){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY BATTERY");
  delay(500);
      }
      else if ((solar_voltage+battery_voltage)>=4){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<4){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
    else if((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==LOW)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==LOW)){
      if(solar_voltage>=4){
      digitalWrite(relay1,LOW);
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY SOLAR");
  delay(500);
  
      }
      else if (battery_voltage>=4){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY BATTERY");
  delay(500);
      }
      else if ((solar_voltage+battery_voltage)>=4){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<4){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
    else if((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==LOW)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==HIGH)){
      if(solar_voltage>=3){
      digitalWrite(relay1,LOW);
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY SOLAR");
  delay(500);
  
      }
      else if (battery_voltage>=3){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY BATTERY");
  delay(500);
      }
      else if ((solar_voltage+battery_voltage)>=3){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<3){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
     else if((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==LOW)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==HIGH)){
      if(solar_voltage>=5){
      digitalWrite(relay1,LOW);
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY SOLAR");
  delay(500);
  
      }
      else if (battery_voltage>=5){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY BATTERY");
  delay(500);
      }
      else if ((solar_voltage+battery_voltage)>=5){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<5){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
     else if((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==LOW)){
      
      if ((solar_voltage+battery_voltage)>=6){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<6){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
     else if((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==LOW)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==LOW)){
      if ((solar_voltage+battery_voltage)>=6){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else if ((solar_voltage+battery_voltage)<6){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
     else if((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==LOW)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==HIGH)){
      
      if ((solar_voltage+battery_voltage)>=7){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else{
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
    else if((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==HIGH)){
      
      if ((solar_voltage+battery_voltage)>=7){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else{
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
    else if((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==LOW)){
      
      if ((solar_voltage+battery_voltage)>=8){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,LOW);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("RUN BY S&B");
  delay(500);
      }
       else{
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
      }
        
    }
    else if(((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==LOW))||((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==LOW)&&(digitalRead(Emergency_L)==HIGH))||((digitalRead(Domestic_L)==LOW)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==HIGH))){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
        
    }
    else if((digitalRead(Domestic_L)==HIGH)&&(digitalRead(Industrial_L1)==HIGH)&&(digitalRead(Industrial_L2)==HIGH)&&(digitalRead(Emergency_L)==HIGH)){
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        lcd.clear();
         lcd.setCursor(0,0);
  lcd.print("SEMS");
  lcd.setCursor(0,1);
  lcd.print("SOLAR");
  lcd.print(solar_voltage);
  lcd.setCursor(0,2);
  lcd.print("BATTERY");
  lcd.print(battery_voltage);
  lcd.setCursor(0,3);
  lcd.print("NEED POWER");
  delay(500);
    }
}