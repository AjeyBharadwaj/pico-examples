add_executable(lcd_test
        lcd_test.cpp
        )

# Pull in our pico_stdlib which pulls in commonly used features
#target_link_libraries(lcd_test pico_stdlib hardware_i2c lcd_1602)
target_link_libraries(lcd_test pico_stdlib lcd_1602_lib)

# create map/bin/hex file etc.
pico_add_extra_outputs(lcd_test)

# add url via pico_set_program_url
example_auto_set_url(lcd_test)
