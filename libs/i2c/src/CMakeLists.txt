add_library(i2c_lib
i2c.cpp
        )

target_link_libraries(i2c_lib pico_stdlib hardware_i2c)

#create map/bin/hex file etc.
#pico_add_extra_outputs(lcd_1602)

#add url via pico_set_program_url
example_auto_set_url(i2c_lib)
