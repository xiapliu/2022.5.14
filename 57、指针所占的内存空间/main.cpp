#include<iostream>
using namespace std;
int main()
{
	//ָ����ռ���ڴ�ռ�
	int a = 10;
	/*int* p;
	p = &a;*/
	int* p = &a;
	//��32λϵͳ��ָ����ռ�ֽ�Ϊ4���ֽ�,����ʲô����
	//��64λϵͳ��ָ����ռ�ֽ�Ϊ8���ֽ�
	cout << "sizeof(int *)=" << sizeof(int*) << endl;
	cout << "sizeof(char *)=" << sizeof(char*) << endl;
	cout << "sizeof(float *)=" << sizeof(float*) << endl;
	cout << "sizeof(double *)=" << sizeof(double*) << endl;

	return 0;

}