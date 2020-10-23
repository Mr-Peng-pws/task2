#include "stm32f10x.h"
#include "led1.h"


//配置程序
void led_Config(void)
{
	//打开B端口时钟
	 RCC->APB2ENR |=(0X01<<3);
	//配置PB1引脚
	GPIOB->CRL &=~(0X0F<<4);//清零操作
	GPIOB->CRL |=(0X01<<4); //配置为推挽输出
	
//	GPIOB->ODR |=(0X01<<1);//关闭LED灯
	GPIOB->ODR &=~(0X01<<1);//开启LED灯
}






