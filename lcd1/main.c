/*
 * lcd1.c
 *
 * Created: 10/17/2023 4:55:25 PM
 * Author : dell
 */ 

#include <avr/io.h>
#include "LCD.h"

int main(void)
{
	LCD_inti('A','B',0);
	LCD_send_string('A',"Doha Magdy");
	
	LCD_send_cmd('A',0x40);
	LCD_send_char('A',0b00011000);//DD
	LCD_send_char('A',0b00000111);
	LCD_send_char('A',0b00011001);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	
	LCD_send_char('A',0b00011000);//7
	LCD_send_char('A',0b00001100);
	LCD_send_char('A',0b00000011);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	
	LCD_send_char('A',0b00000000);//A
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00010001);
	LCD_send_char('A',0b00010001);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00000000);
	
	LCD_send_char('A',0b00000000);//M
	LCD_send_char('A',0b00001111);
	LCD_send_char('A',0b00001001);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	
	LCD_send_char('A',0b00011000);//G
	LCD_send_char('A',0b00001100);
	LCD_send_char('A',0b00000011);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000110);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	
	LCD_send_char('A',0b00000011);//D
	LCD_send_char('A',0b00000011);
	LCD_send_char('A',0b00000011);
	LCD_send_char('A',0b00011111);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	LCD_send_char('A',0b00000000);
	
	LCD_send_char('A',0b00000000);//Y
	LCD_send_char('A',0b00000011);
	LCD_send_char('A',0b00000011);
	LCD_send_char('A',0b00010010);
	LCD_send_char('A',0b00010010);
	LCD_send_char('A',0b00011110);
	LCD_send_char('A',0b00011110);
	LCD_send_char('A',0b00000000);
	
	LCD_movecursor('A',2,16);
	LCD_send_char('A',0);//DD
	LCD_movecursor('A',2,15);
	LCD_send_char('A',1);//7
	LCD_movecursor('A',2,14);
	LCD_send_char('A',2);//A
	LCD_movecursor('A',2,13);
	
	LCD_send_char('A',32);//space
	LCD_movecursor('A',2,12);
	
	LCD_send_char('A',3);//M
	LCD_movecursor('A',2,11);
	LCD_send_char('A',4);//G
	LCD_movecursor('A',2,10);
	LCD_send_char('A',5);//D
	LCD_movecursor('A',2,9);
	LCD_send_char('A',6);
	LCD_movecursor('A',2,8);
	
	while (1) 
    {
		
		
		
    }
}

