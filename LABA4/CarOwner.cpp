#include "CarOwner.h"

CarOwner::CarOwner()
{
	Name = ""; //���
	Surname = ""; //�������
	phonNumber = "";//������� ���������
}

string CarOwner::Getname()
{
	return this->Name;
}

string CarOwner::Getsurname()
{
	return this->Surname;
}

string CarOwner::PhonNumber()
{
	return this->phonNumber;
}

CarOwner::~CarOwner()
{
	;
}

void CarOwner::InitOwner(string name, string surname, string phonNumber)
{
	this->Name = name;
	this->Surname = surname;
	this->phonNumber = phonNumber;
}

void CarOwner::InputOwner()
{
	printf_s("������� ��� ���������:");
	cin >> Name;
	printf_s("������� ������� ���������:");
	cin >> Surname;
	printf_s("������� ����� �������� ���������:");
	cin >> phonNumber;
}

void CarOwner::OutputOwner()
{
	if ((Name[0] == 0) && (Surname[0] == 0) && (phonNumber[0] == 0))
	{
		cout << "��� ���������: �����" << endl;
		cout << "������� ���������: �����" << endl;
		cout << "����� �������� ���������: �����" << endl;
	}
	else
	{
		cout << "��� ���������:" << Name << endl;
		cout << "������� ���������:" << Surname << endl;
		cout << "����� �������� ���������:" << phonNumber << endl;
	}
	printf_s("\n");

}

