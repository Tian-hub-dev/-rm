#include "I2C.h"
#include "RM.h"


void I2C_Start(void)                      //开始条件函数
{
	SCL_High();
	SDA_High();
	SDA_Low();
	SCL_Low();
}
void I2C_Stop(void)                       //终止条件函数
{
	SCL_High();
	SDA_Low();
	SDA_High();
}

void I2C_SendByte(uint8_t data)             //发送字节
{
	for (uint8_t i = 0; i < 8;i++)
	{
		if (data & 0x80)                    //位运算
		{
			SDA_High();
		}
		else
		{
			SDA_Low();
		}
		SCL_High();
		SCL_Low();
		data <<= 1;                        //左移赋值运算
	}
}
uint8_t I2C_ReceiveAck(void)               //接受应答
{
	uint8_t ack;
	SCL_High();
	SDA_high();
	ack = SDA_Read();
	SCL_Low();
	return ack;
}

void I2C_SendData(uint8_t data)            //完整发送流程
{
	I2C_Start();
	I2C_SendByte(data);
	uint8_t I2C_ReceiveAck();
	I2C_Stop();
}