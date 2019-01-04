#include"led.h"
#include"stm32f10x.h"

void light_r(void)
{
	GPIO_ResetBits( GPIOA,  GPIO_Pin_2);
	GPIO_SetBits( GPIOA,  GPIO_Pin_1);
	GPIO_SetBits( GPIOA,  GPIO_Pin_0);

}
void light_g(void)
{
	GPIO_ResetBits( GPIOA,  GPIO_Pin_1);
	GPIO_SetBits( GPIOA,  GPIO_Pin_0);
	GPIO_SetBits( GPIOA,  GPIO_Pin_2);
}
void light_b(void)
{
	GPIO_ResetBits( GPIOA,  GPIO_Pin_0);
	GPIO_SetBits( GPIOA,  GPIO_Pin_1);
	GPIO_SetBits( GPIOA,  GPIO_Pin_2);

}
void light_off(void)
{
	GPIO_SetBits( GPIOA,  GPIO_Pin_0);
	GPIO_SetBits( GPIOA,  GPIO_Pin_1);
	GPIO_SetBits( GPIOA,  GPIO_Pin_2);
}


void led_init(void)//≥ı ºªØpa0 pa1 pa2 for led
{	
	
		GPIO_InitTypeDef GPIO_InitStruct;
	
		GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
		GPIO_InitStruct.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2;
		GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE);

		GPIO_Init( GPIOA,&GPIO_InitStruct);
	
	  light_off();
	
}


