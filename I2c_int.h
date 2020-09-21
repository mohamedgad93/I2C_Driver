/*
 * I2c_int.h
 *
 *  Created on: Jul 11, 2020
 *      Author: mdmad
 */

#ifndef I2C_INT_H_
#define I2C_INT_H_

void I2c_vidInit(void);

void I2c_vidSendStart(void);

void I2c_vidSendStop(void);

void I2c_vidSendSlaveAddress(u8 SlaveAddress_W_R);

void I2c_vidSendData(u8 Data);

u8   I2c_u8ReceiveData(void);


u8   I2c_u8CheckStatus(u8 ExpectedStatus);

#endif /* I2C_INT_H_ */
