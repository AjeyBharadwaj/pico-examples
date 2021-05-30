add_library(lcd_1602_lib
        lcd_1602.cpp
        )

target_link_libraries(lcd_1602_lib pico_stdlib lcd_lib)

example_auto_set_url(lcd_1602_lib)

add_library(lcd_lib
        lcd.cpp
        )

target_link_libraries(lcd_lib pico_stdlib hardware_i2c)

example_auto_set_url(lcd_lib)

add_library(lcd_1602_i2c_lib
        lcd_1602_i2c.cpp
        )

target_include_directories(lcd_1602_i2c_lib PUBLIC ../../i2c)
target_link_libraries(lcd_1602_i2c_lib lcd_1602_lib i2c_lib)

example_auto_set_url(lcd_1602_i2c_lib)