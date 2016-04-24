#include <iostream>
#include <stdlib.h>
#include "Line.h"
using namespace std;

/**********************************************8
/* 常对象成员、常函数、常对象
/*要求：
	定义两个类：
		坐标类：Coordinate
		数据成员：横坐标m_iX,纵坐标m_iY
		成员函数：构造函数、析构函数、数据封装函数
		线段类：Line
		数据成员： 点A m_coorA,点B m_coorB
		成员函数：构造函数、析构函数、数据封装函数、信息打印函数
******************************************************/



int main(void){
	Line l1(1,2,3,4);
	l1.printInfo();

	const Line l2(5,6,7,8);
	l2.printInfo();

	system("pause");
	return 0;
}