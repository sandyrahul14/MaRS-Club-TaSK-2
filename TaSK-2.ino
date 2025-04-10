#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#define ir 2
int ir_value;
int count=0;
bool flag=false;
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  pinMode(ir, INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
  }

void loop() {
  ir_value=digitalRead(ir);
  if(ir_value==LOW){
    flag=true;
    
  }
  if(flag==true && digitalRead(ir)==HIGH){
    count++;
    flag=false;
  }
  lcd.setCursor(0,0);
  lcd.print("No.of Objects");
  lcd.setCursor(1,1);
  lcd.print(count);
  delay(200);
  lcd.clear();
}