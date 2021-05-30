#ifndef I2C_HH
#define I2C_HH

#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "pico/binary_info.h"

class I2C {
    private:
        uint instance_no, baudrate, sda_pin, scl_pin;
        i2c_inst_t *i2c_ptr;
    public:
        I2C(uint instance_no, uint baudrate, uint sda_pin, uint scl_pin);
        ~I2C();
        int i2c_write_byte(uint8_t val, int addr=0x27);
};

#endif