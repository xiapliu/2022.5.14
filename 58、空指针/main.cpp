#include<iostream>
using namespace std;
int main()
{
	//空指针：指针变量指向内存中编号为0的空间
	//用途：初始化指针变量
	//注意：空指针指向的内存是不可以访问的，在系统中0-255这片内存是系统占用的，访问就会出错

	//1、空指针用于给指针变量初始化
	int* p = NULL;
	
	//2、空指针是不可以进行访问的
	//*p = 100;


	return 0;
}