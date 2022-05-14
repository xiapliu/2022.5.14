#include<iostream>
using namespace std;
int main()
{
	//指针所占的内存空间
	int a = 10;
	/*int* p;
	p = &a;*/
	int* p = &a;
	//在32位系统，指针所占字节为4个字节,不管什么类型
	//在64位系统，指针所占字节为8个字节
	cout << "sizeof(int *)=" << sizeof(int*) << endl;
	cout << "sizeof(char *)=" << sizeof(char*) << endl;
	cout << "sizeof(float *)=" << sizeof(float*) << endl;
	cout << "sizeof(double *)=" << sizeof(double*) << endl;

	return 0;

}