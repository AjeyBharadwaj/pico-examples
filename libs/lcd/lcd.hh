#ifndef LCD_HH
#define LCD_HH

enum LCD_TYPE {
    LCD_1602,
    NONE
};

enum LINE {
    ALL=0,
    LINE_ONE,
    LINE_TWO
};

enum MODE {
    DATA,
    CMD
};

enum CMDS {
    LCD_CLEARDISPLAY = 0x01,
    LCD_RETURNHOME = 0x02,
    LCD_ENTRYMODESET = 0x04,
    LCD_DISPLAYCONTROL = 0x08,
    LCD_CURSORSHIFT = 0x10,
    LCD_FUNCTIONSET = 0x20,
    LCD_SETCGRAMADDR = 0x40,
    LCD_SETDDRAMADDR = 0x80,
};

class Lcd {
    private:

    public:
        Lcd();
        ~Lcd();
        bool clear(int line_no=LINE::ALL);

};

#endif