#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
class CarInfo
{
private:
	int color = 0;
	int carCondition = 0;
	int DTP = 0;
public:
	CarInfo();
	int getColor();
	int getCarCondition();
	int getDTP();
	~CarInfo();

	void InitCarInfo(int color, int carCondition, int DTP);
	void InputCarInfo();
	void OutputCarInfo();
	void DeleteDate();
};
