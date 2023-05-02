/*
 * IncFile1.h
 *
 * Created: 13.04.2023 18:42:05
 *  Author: marci
 */ 

#include <avr/io.h>


#define LCD_Data_Dir DDRB		/* Define LCD data port direction */
#define LCD_Command_Dir DDRC		/* Define LCD command port direction register */
#define LCD_Data_Port PORTB		/* Define LCD data port */
#define LCD_Command_Port PORTC		/* Define LCD data port */
#define RS PC0				/* Define Register Select (data/command reg.)pin */
#define RW PC1				/* Define Read/Write signal pin */
#define EN PC2

void LCD_Command(unsigned char cmnd);
void LCD_Char (unsigned char char_data);
void LCD_Init (void);
void LCD_String (const char *str);
void LCD_String_xy (char row, char pos, const char *str);
void LCD_Clear();