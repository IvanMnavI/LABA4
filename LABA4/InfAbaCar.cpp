#include "InfAbaCar.h"
string Date = "";
CarInfo::CarInfo()
{
	color = 0;
	carCondition = 0;
	DTP = 0;
}

int CarInfo::getColor()
{
	return this->color;
}

int CarInfo::getCarCondition()
{
	return this->carCondition;
}

int CarInfo::getDTP()
{
	return this->DTP;
}

CarInfo::~CarInfo()
{
	;
}

void CarInfo::InitCarInfo(int color, int carCondition, int DTP)
{
	this->color = color;
	this->carCondition = carCondition;
	this->DTP = DTP;
}

void CarInfo::InputCarInfo()
{
	printf_s("������� ���� ����������\n1)������\n2)�����\n3)�������\n4)�����\n��� �����:");
	cin >> color;
	printf_s("������� ��������� ����������\n1)��������\n2)�������\n3)���������������\n��� �����:");
	cin >> carCondition;
	printf_s("�������� �� ������ � ���(0-���,1-��):");
	cin >> DTP;
	if (DTP == 1)
	{
		printf_s("������� ���� ���: ");
		cin >> Date;
	}

}

void CarInfo::OutputCarInfo()
{
	if ((color == 0) && (carCondition == 0) && (DTP == 0)) {
		cout << "���� ����������: �����" << endl;
		cout << "��������� ����������: �����" << endl;
		cout << "�������� �� ������ � ���: �����" << endl;
	}
	else
	{
		if (color == 1)
		{
			cout << "���� ����������: ������" << endl;

		}
		if (color == 2)
		{
			cout << "���� ����������: �����" << endl;
		}
		if (color == 3)
		{
			cout << "���� ����������: �������" << endl;
		}
		if (color == 4)
		{
			cout << "���� ����������: �����" << endl;
		}
		if (carCondition == 1)
		{
			cout << "��������� ����������: ��������" << endl;
		}
		if (carCondition == 2)
		{
			cout << "��������� ����������: �������" << endl;
		}
		if (carCondition == 3)
		{
			cout << "��������� ����������: ���������������" << endl;
		}
		if (DTP == 0)
		{
			cout << "�������� �� ������ � ���: ���" << endl;
		}
		if (DTP == 1)
		{
			cout << "�������� �� ������ � ���: ��, " << "���� ������: " << Date << endl;

		}

	}
	printf_s("\n");
}

