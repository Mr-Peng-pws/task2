#include "stm32f10x.h"
#include "led1.h"


//���ó���
void led_Config(void)
{
	//��B�˿�ʱ��
	 RCC->APB2ENR |=(0X01<<3);
	//����PB1����
	GPIOB->CRL &=~(0X0F<<4);//�������
	GPIOB->CRL |=(0X01<<4); //����Ϊ�������
	
//	GPIOB->ODR |=(0X01<<1);//�ر�LED��
	GPIOB->ODR &=~(0X01<<1);//����LED��
}






