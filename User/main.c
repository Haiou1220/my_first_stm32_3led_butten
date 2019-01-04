#include"stm32f10x.h"
#include"led.h"
#include"key.h"
#include "delay.h"

void key_deal_led(void);


int main()
{
	
	led_init();
	key_init();
	delay_init();
	
	
	while(1)
	{
			key_deal_led();
		
	}


//	return 0;
}

void key_deal_led(void)
{

static char rgb_count=0;

	
	if(get_key())
	{
		
		rgb_count++;
		if(rgb_count>=4)
		{rgb_count=0;}
		
				switch(rgb_count)
				{
					case 0:
					{		
							light_r();
							break;
					}
					case 1:
					{		
							light_g();
							break;
					}
					case 2:
					{
							light_b();
							break;
					}
					case 3:
					{
							light_off();
							break;
					}			
					default:
					{
					break;
					}
				
				}
				
	}
	
	
}
