#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class CarOwner
{
private:
	string Name = "";
	string Surname = "";
	string phonNumber = "";
public:
	CarOwner();
	string Getname();
	string Getsurname();
	string PhonNumber();
	~CarOwner();

	void InitOwner(string name, string surname, string phonNumber);
	void InputOwner();
	void OutputOwner();
	void DeleteOwner();
};
