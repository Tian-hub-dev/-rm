#include "I2C.h"
#include "RM.h"


void I2C_Start(void)                      //��ʼ��������
{
	SCL_High();
	SDA_High();
	SDA_Low();
	SCL_Low();
}
void I2C_Stop(void)                       //��ֹ��������
{
	SCL_High();
	SDA_Low();
	SDA_High();
}

void I2C_SendByte(uint8_t data)             //�����ֽ�
{
	for (uint8_t i = 0; i < 8;i++)
	{
		if (data & 0x80)                    //λ����
		{
			SDA_High();
		}
		else
		{
			SDA_Low();
		}
		SCL_High();
		SCL_Low();
		data <<= 1;                        //���Ƹ�ֵ����
	}
}
uint8_t I2C_ReceiveAck(void)               //����Ӧ��
{
	uint8_t ack;
	SCL_High();
	SDA_high();
	ack = SDA_Read();
	SCL_Low();
	return ack;
}

void I2C_SendData(uint8_t data)            //������������
{
	I2C_Start();
	I2C_SendByte(data);
	uint8_t I2C_ReceiveAck();
	I2C_Stop();
}