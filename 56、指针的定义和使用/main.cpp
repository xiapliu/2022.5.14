#include<iostream>
using namespace std;
int main()
{
	//指针的作用：可以通过指针间接访问内存


	//1、定义指针
	int a = 10;
	//指针定义的语法：数据类型 *指针变量名；
	int* p;
	//让指针记录a的地址
	p = &a;
	cout << "a的地址是：" << (int)&a << endl;
	cout << "指针p为：" << (int)p << endl;//指针就是地址

	//2、使用指针
	//可以通过解引用的方式来找到指针指向的内存的数据
	//指针前加*代表解引用，找到指针指向的内存的数据
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;


	return 0;
}