
#ifndef HC_SR04_H
#define HC_SR04_H

#include "basic.h"

// �������ӿڶ���
sbit Trig = P2^1;
sbit Echo = P2^0;

extern u16 EchoCnt;

void HC04_Init(void);
void HC04_Loop(void);

#endif
