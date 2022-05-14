#include<iostream>//空指针和野指针都不是我们申请的空间，因此不要对其进行访问和修改
using namespace std;
int main()
{
	//定义一个指针变量，随意指向一片内存，称为野指针。
	// 是没办法对其进行访问和操作的
	//野指针：指针变量指向非法的内存空间
	/*int* p = (int*)0x1000;
	cout << *p << endl;*/

	return 0;
}