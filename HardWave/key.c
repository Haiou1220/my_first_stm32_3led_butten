#include"stm32f10x.h"
#include"key.h"
#include "delay.h"

void key_init(void)//³õÊ¼»¯PA3°´¼ü
{
		GPIO_InitTypeDef GPIO_InitStruct;
		GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IPU;
		GPIO_InitStruct.GPIO_Pin=GPIO_Pin_3;
	
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE);
		GPIO_Init( GPIOA, & GPIO_InitStruct);
	
	
}


char  get_key(void)
{

	if(Bit_RESET==GPIO_ReadInputDataBit( GPIOA,  GPIO_Pin_3))
	{
		delay_ms(500);
			if(Bit_SET==GPIO_ReadInputDataBit( GPIOA,  GPIO_Pin_3))
			{	
				return 1;	
			}
	}
	
	return 0;	
	

}



