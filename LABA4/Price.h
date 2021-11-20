#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
class CarPrice
{
private:
	CarInfo* info;
	string price = "";
public:
	int set_Info(CarInfo* info);
	CarPrice();
	string getPtice();
	~CarPrice();
	CarInfo* get_Info();
	void InitPrice(string price);
	void InputPrice();
	void OutputPrice();
	void DeletePrice();
};
