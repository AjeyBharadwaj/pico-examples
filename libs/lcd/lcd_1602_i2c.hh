#include "lcd_1602.hh"
#include "i2c.hh"

class Lcd_1602_I2C: public Lcd_1602, public I2C {
    public:
        Lcd_1602_I2C(uint instance_no, uint baudrate, uint sda_pin, uint scl_pin);
        ~Lcd_1602_I2C();
};