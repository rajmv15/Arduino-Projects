void LCD_i2c (String firstline, String secondline, float distance1) {
   lcd.setCursor(0,0);
   lcd.print(firstline);
   lcd.setCursor(11,0);
   lcd.print(distance1);
   lcd.setCursor(0,1);
   lcd.print(secondline);
  
}