#include<stdio.h>

typedef enum { GPIO_Speed_2MHz, GPIO_Speed_10MHz, GPIO_Speed_50MHz } GPIO_Speed_MHz;

typedef struct { GPIO_Speed_MHz GPIO_Speed; } GPIO_Speed_structure;

void GPIO_StructureInit(GPIO_Speed_structure* pGPIO_Speed_struct)
{
	pGPIO_Speed_struct->GPIO_Speed = GPIO_Speed_2MHz;
}

int main()
{
	GPIO_Speed_structure  GPIO_Speed_struct;
	GPIO_StructureInit(&GPIO_Speed_struct);
	return 0;
}