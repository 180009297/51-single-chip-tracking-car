

#ifndef DCMOTOR_H
#define DCMOTOR_H

#include "basic.h"

// ����ӿڶ���
sbit MOTOR0 = P1^2;
sbit MOTOR1 = P1^1;
sbit MOTOR2 = P1^5;
sbit MOTOR3 = P1^4;

// ������Ͻӿڶ���
sbit BIZHANG0 = P2^0;
sbit BIZHANG1 = P2^1;

// ����Ѱ���ӿڶ���
sbit GO_RIGHT = P3^7;
sbit GO_LEFT = P3^6;

typedef enum
{
	FORWARD=0,
	BACKUP,
	LEFT,
	RIGHT,
	STOP,
}MOTOR_DIR;

void MotorContorl(MOTOR_DIR dir, u8 speed);		// С��ֱ��������ƣ�dir����speed�ٶ�


#endif
