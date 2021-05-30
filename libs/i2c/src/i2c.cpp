#include "../i2c.hh"

I2C::I2C(uint instance_no, uint baudrate, uint sda_pin, uint scl_pin) {
    switch (instance_no) {
    case 0:
        this->i2c_ptr = i2c0;
        break;
    case 1:
        this->i2c_ptr = i2c1;
        break;
    default:
        this->i2c_ptr = i2c_default;
        break;
    }

    i2c_init(this->i2c_ptr, baudrate);
    gpio_set_function(sda_pin, GPIO_FUNC_I2C);
    gpio_set_function(scl_pin, GPIO_FUNC_I2C);
    gpio_pull_up(sda_pin);
    gpio_pull_up(scl_pin);

    this->sda_pin = sda_pin;
    this->scl_pin = scl_pin;
    // FIXME : Is this required ?
    // Make the I2C pins available to picotool
    //bi_decl(bi_2pins_with_func(PICO_DEFAULT_I2C_SDA_PIN, PICO_DEFAULT_I2C_SCL_PIN, GPIO_FUNC_I2C));
}

/* Quick helper function for single byte transfers */
int I2C::i2c_write_byte(uint8_t val, int addr) {
    return i2c_write_blocking(this->i2c_ptr, addr, &val, 1, false);
}

I2C::~I2C() {

}
