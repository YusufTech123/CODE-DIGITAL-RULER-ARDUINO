
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <NewPing.h>

#define trig      12
#define echo      11
#define maksimal  200

NewPing jarak(trig, echo, maksimal);
LiquidCrystal_I2C lcd (0x27, 16, 2);

void setup() {
    Serial.begin(115200);
    lcd.init();
    lcd.backlight();
    lcd.setCursor(1,0);
    lcd.print("DIGITAL RULER");
    lcd.setCursor(3,1);
    lcd.print("YUSUF TECH");
    delay(5000);
    lcd.clear();


}

void loop() {
    delay(50);
    lcd.setCursor(0,0);
    lcd.print("Siap Mengukur");
    lcd.setCursor(0,1);
    lcd.print("jaraknya:  ");
    lcd.print(jarak.ping_cm());
    lcd.print(" cm");
    lcd.print("  ");

    
}