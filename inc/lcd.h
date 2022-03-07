#ifndef LCD_H_
#define LCD_H_

void typeFloat(float myFloat);
void ClrLcd(void);
void lcdLoc(int line);
void typeln(const char *s); 
void lcd_byte(int bits, int mode);
void lcd_toggle_enable(int bits);
void lcd_init();
void mostraTempDisplay(int modo, float TI, float TR, float TE);
void mostraDesligadoDisplay();

#endif /* LCD_H_ */
