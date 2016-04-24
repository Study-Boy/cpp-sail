#include <iostream>
#include "Array.h"
using namespace std;

/*************************************************
示例安排：
	1、定义一个Array类，数据成员为m_iCount,
		成员函数包括数据封装函数、构造函数、拷贝构造函数
		和析构函数，通过此示例体会浅拷贝原理。

	2、增加数据成员m_pArr,并增加m_pArr地址，查看函数，同时
	改造构造函数、拷贝构造函数和析构函数，体会深拷贝的原理
	和必要性。
****************************************************/

int main(void){
	Array arr1(5);


	Array arr2(arr1);
	cout << "arr2.m_iCount" << arr2.getCount() << endl;

	arr1.printArr();
	arr2.printArr();

	system("pause");
	return 0;
}