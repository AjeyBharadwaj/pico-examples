#include "../lcd_1602_i2c.hh"

Lcd_1602_I2C::Lcd_1602_I2C(uint instance_no, uint baudrate, uint sda_pin, uint scl_pin):
Lcd_1602(),
I2C(instance_no, baudrate, sda_pin, scl_pin) {
}

Lcd_1602_I2C::~Lcd_1602_I2C() {
}
