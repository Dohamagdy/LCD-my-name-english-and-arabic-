#include <avr/io.h>
#include "import_std.h"
//#include"dio.h"
void DIO_setpindir(char port,char bit,char dir)
{
	switch (port)
	{
		case 'A':
			if(dir==1)
			{
				SET_BIT(DDRA,bit);
			}
			else
			{
				CLR_BIT(DDRA,bit);
			}
			break;
		case 'B':
			if(dir==1)
			{
				SET_BIT(DDRB,bit);
			}
			else
			{
				CLR_BIT(DDRB,bit);
			}
			break;
		case 'C':
				if(dir==1)
				{
					SET_BIT(DDRC,bit);
				}
				else
				{
					CLR_BIT(DDRC,bit);
				}
			break;
		case 'D':
			if(dir==1)
			{
				SET_BIT(DDRD,bit);
			}
			else
			{
				CLR_BIT(DDRD,bit);
			}
			break;
		default:
			break;		
	}
}
void DIO_writepin(char port ,char bit,char value)
{
	switch (port)
	{
		case 'A':
		if(value==1)
		{
			SET_BIT(PORTA,bit);
		}
		else
		{
			CLR_BIT(PORTA,bit);
		}
		break;
		case 'B':
		if(value==1)
		{
			SET_BIT(PORTB,bit);
		}
		else
		{
			CLR_BIT(PORTB,bit);
		}
		break;
		case 'C':
		if(value==1)
		{
			SET_BIT(PORTC,bit);
		}
		else
		{
			CLR_BIT(PORTC,bit);
		}
		break;
		case 'D':
		if(value==1)
		{
			SET_BIT(PORTD,bit);
		}
		else
		{
			CLR_BIT(PORTD,bit);
		}
		break;
		default:
		break;
	}
}
char DIO_readpin(char port,char pin )
{
	 unsigned char value;
	switch(port)
	{
		case 'A':
			value=READ_BIT(PINA,pin);
		break;
	
		case 'B':
			value=READ_BIT(PINB,pin);
		break;

		case 'C':
			value=READ_BIT(PINC,pin);
		break;
		
		case 'D':
			value=READ_BIT(PINA,pin);
		break;

		default:
		break;
	}
	return value;
}
void DIO_toggelpin(char port,char pin)
{
	switch(port)
	{
		case 'A':
			TOG_BIT(PORTA,pin);
		break;
		case 'B':
			TOG_BIT(PORTB,pin);
		break;			
		case 'C':
			TOG_BIT(PORTA,pin);
		break;
		case 'D':
			TOG_BIT(PORTA,pin);
		break;
		default:
		break;
	}
}
void DIO_set_port_direction( char portname,unsigned char direction)
{
	switch(portname)
	{
		case 'A' :
			DDRA=direction; 
		break ;
		case 'B':
			DDRB=direction; 
		break ;
		case 'C' :	
			DDRC=direction; 
		break ;
		case 'D':
			DDRD=direction; 
		break ;
		default:
		break ;
	}
}
unsigned char DIO_read_port( char portname)
{
	unsigned char value;
	switch(portname)
	{
		case 'A' :
			value=PORTA;
		break ;
		case 'B':
			value=PORTB;
		break ;
		case 'C' :
			value=PORTC;
		break ;
		case 'D':
			value=PORTD;
		break ;
		default:
		break ;
	}
	return value;
}
void DIO_write_port( char portname,unsigned char value)
{
	switch(portname)
	{
		case 'A' :
			PORTA=value;
		break ;
		case 'B':
			PORTB=value;
		break ;
		case 'C' :
			PORTC=value;
		break ;
		case 'D':
			PORTD=value;
		break ;
		default:
		break ;
	}
}
void DIO_toggle_port( char portname)
{
	unsigned char value;
	switch(portname)
	{
		case 'A' :
		PORTA=~PORTA;
		break ;
		case 'B':
		PORTB=~PORTB;
		break ;
		case 'C' :
		PORTC=~PORTC;
		break ;
		case 'D':
		PORTD=~PORTD;
		break ;
		default:
		break ;
	}
}/*
void DIO_write_low_nibble(char port,char val)
{
	val&=0x0f;
	switch (port)
	{
		case'A':
		PORTA&=0xf0;
		PORTA|=val;
		break;
		case'B':
		PORTB&=0xf0;
		PORTB|=val;
		break;
		case'C':
		PORTC&=0xf0;
		PORTC|=val;
		break;
		case'D':
		PORTD&=0xf0;
		PORTD|=val;
		break;
		}
}*/

void DIO_set_nibble(char port,char fist_pin,char vale)
{
	switch(port)
	{
		case 'A':
		for(int i=fist_pin;i<fist_pin+4;++i)
		{
			SET_BIT(PORTA,i);
		}
		break;
		case 'B':
		for(int i=fist_pin;i<fist_pin+4;++i)
		{
			SET_BIT(PORTB,i);
		}
		break;
		case 'C':
		for(int i=fist_pin;i<fist_pin+4;++i)
		{
			SET_BIT(PORTC,i);
		}
		break;
		case 'D':
		for(int i=fist_pin;i<fist_pin+4;++i)
		{
			SET_BIT(PORTD,i);
		}
		break;
		default:
		break;
	}
}
void DIO_write_nibble(char port,char first_pin,unsigned char value)
{
	
	switch(port)
	{
		case 'A':
		for(int i=first_pin;i<first_pin+4;++i)
		{
			DIO_writepin(PORTA,i,value%2);
			value/=2;
		}
		break;
		case 'C':
		for(int i=first_pin;i<first_pin+4;++i)
		{
			DIO_writepin(PORTC,i,value%2);
			value/=2;
		}
		break;
		case 'B':
		for(int i=first_pin;i<first_pin+4;++i)
		{
			DIO_writepin(PORTB,i,value%2);
			value/=2;
		}
		break;
		case 'D':
		for(int i=first_pin;i<first_pin+4;++i)
		{
			DIO_writepin(PORTD,i,value%2);
			value/=2;
		}
		break;
		default:
		break;
	}
}

/*

void DIO_write_high_nibble(char port,char val)
{
	val<<=4;
	switch (port)
	{
		case'A':
		PORTA&=0x0f;
		PORTA|=val;
		break;
		case'B':
		PORTB&=0x0f;
		PORTB|=val;
		break;
		case'C':
		PORTC&=0x0f;
		PORTC|=val;
		break;
		case'D':
		PORTD&=0x0f;
		PORTD|=val;
		break;
	}
}
void DIO_pull_up_state(char port,char pin,char state)
{
	DIO_writepin(port,pin,state);
}
*/	