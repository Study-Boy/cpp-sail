#include <iostream>
#include "Array.h"
using namespace std;

/*************************************************
示例安排：
	1、定义一个Array类，数据成员为m_iLen,
		成员函数包括数据封装函数、构造函数和析构函数
		信息输出函数
****************************************************/

int main(void){
	Array arr1(10);
	cout << "&arr1:" << &arr1 << endl;
	arr1.printInfo()->setLen(5);
	cout << "len=:" << arr1.getLen() << endl;

	system("pause");
	return 0;
}