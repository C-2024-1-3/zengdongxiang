#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int n, const char* na, char s);
private:
	int num;
	char name[20];
	char sex;
};