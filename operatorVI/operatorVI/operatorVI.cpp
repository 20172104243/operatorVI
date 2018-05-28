// operatorVI.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void setadd(int fe, int in);
	void display();
	CFeet minus(CFeet & objk);
	CFeet operator -(CFeet & objk);
	CFeet add(CFeet & objk);
	CFeet operator +(CFeet & objk);
};
void CFeet::setadd(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::setvalue(int fe, int in)
{
	inches = fe * 12 + in;
	feet = inches / 12;
	inches = inches - 12.0*(int)(inches / 12);
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::add(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet + objk.feet, inches + objk.inches);
	return temp;
}
CFeet CFeet ::operator +(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet + objk.feet, inches + objk.inches);
	return temp;
}
CFeet CFeet::minus(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet - objk.feet, inches - objk.inches);
	return temp;
}
CFeet CFeet ::operator -(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet - objk.feet, inches - objk.inches);
	return temp;
}
int main()
{
	CFeet A, B, C, D, E, F;
	A.setvalue(10, 0);
	B.setvalue(3, 2);
	C.setadd(12, 25);
	D.setadd(10, 24);
	E = A - B;
	F = C + D;
	E.display();
	F.display();
	return 0;
}
