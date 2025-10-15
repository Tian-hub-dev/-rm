#ifndef I2C_h                             //¶¨ÒåºêÃû
#define I2C_h 

#include <stdint.h> 

void I2C_Start(void);
void I2C_Stop(void);
void I2C_SendByte(uint8_t data);
uint8_t I2C_ReceiveAck(void);

void I2C_SendData(uint8_t data);
#endif

