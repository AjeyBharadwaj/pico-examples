#include "../lcd.hh"

Lcd::Lcd() {
}

void lcd_send_byte(uint val, MODE m) {
    return;
}

void Lcd::lcd_init() {
    lcd_send_byte(0x03, MODE::CMD);
    lcd_send_byte(0x03, MODE::CMD);
    lcd_send_byte(0x03, MODE::CMD);
    lcd_send_byte(0x02, MODE::CMD);

    lcd_send_byte(CMDS::LCD_ENTRYMODESET | LCD_ENTRYLEFT, MODE::CMD);
    lcd_send_byte(CMDS::LCD_FUNCTIONSET | LCD_2LINE, MODE::CMD);
    lcd_send_byte(CMDS::LCD_DISPLAYCONTROL | LCD_DISPLAYON, MODE::CMD);
    lcd_clear();
}
