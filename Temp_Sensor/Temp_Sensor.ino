#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

float v;
float in;
int temp;
const int led = 3;
const int tmp = A0;
const int buz = 5;
int tempH = 75;
int tempL = 65;

void setup() {
    lcd.init();
    lcd.backlight();
  	Serial.begin(9600);
}

void loop() {
	  measureT();

    if(temp > tempH || temp < tempL) {
      digitalWrite(led, HIGH);
      tone(buz, 440, 90);
      delay(90);
      tone(buz, 523.25, 90);
      delay(90);
      tone(buz, 659.25, 90);
      delay(90);
      tone(buz, 880, 90);
      delay(90);

      measureT();
      
      digitalWrite(led, LOW);
    }
    delay(360);

}

void measureT() {
    in = analogRead(tmp);
    v = in/1023*5.0;
    temp = round((((v-0.5)*100)*1.8) + 32);

    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print(" F");

    lcd.setCursor(0,1);
    if(temp > tempH || temp < tempL) {
      lcd.print("Not In Range");
    }
    else {
      lcd.print("In Range    ");
    }
  }