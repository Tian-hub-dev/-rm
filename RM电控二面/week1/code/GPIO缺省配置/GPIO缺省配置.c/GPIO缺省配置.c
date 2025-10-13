#include<stdio.h>

typedef enum { GPIO_Speed_2MHz, GPIO_Speed_10MHz, GPIO_Speed_50MHz } GPIO_Speed_MHz;          //枚举的时候，我觉得这样看的更舒服，就不太符合规范

typedef struct { GPIO_Speed_MHz GPIO_Speed; } GPIO_Speed_structure;                           // 同上

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
