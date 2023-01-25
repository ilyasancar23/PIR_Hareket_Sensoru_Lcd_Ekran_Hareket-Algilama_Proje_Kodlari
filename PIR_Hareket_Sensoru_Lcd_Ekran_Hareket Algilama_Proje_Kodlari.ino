#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2); 
int pirsensor = 8; 
int state = LOW;
int val = 0;
int led=13;
int buzzer=6;
void setup()
{
Serial.begin(9600); 
lcd.begin(16,2);
pinMode(pirsensor, INPUT); 
lcd.clear();
lcd.setCursor(0,0); 
lcd.print("Ilyas");
lcd.setCursor(7,1); 
lcd.print("IZZATOV");
delay(1000); 
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
}
void loop()
{ 
val = digitalRead(pirsensor); 
if (val == HIGH)
{ 
delay(100);
if (state == LOW)
{ 
Serial.println("Hataket Algilandi");
lcd.clear();
lcd.setCursor(0,0); 
lcd.print("Haraket ");
lcd.setCursor(0,1);
lcd.print("Algilandi");
state = HIGH;

 digitalWrite(led,HIGH);
 tone(buzzer,1000);
 
} 
}
else
{
if (state == HIGH)
{
Serial.println("Hareket Yok");
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print("Hareket"); 
lcd.setCursor(0,1); 
lcd.print("Yok"); 
state = LOW;
digitalWrite(led,LOW);
noTone(buzzer);
}
}
}
