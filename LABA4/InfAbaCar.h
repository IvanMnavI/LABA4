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
	CarPrice* price;
	int color = 0;
	int carCondition = 0;
	int DTP = 0;
public:
	CarInfo();
	string set_price(CarPrice* price);
	int getColor();
	int getCarCondition();
	int getDTP();
	~CarInfo();
	CarPrice* get_price();
	void InitCarInfo(int color, int carCondition, int DTP);
	void InputCarInfo();
	void OutputCarInfo();
	void DeleteDate();
};
