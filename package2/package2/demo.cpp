#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;
/**************************************************
/* 对象数组
要求：
	定义Coordinate类
	数据成员：m_iX 和m_iY
	分别从栈中和堆中实例化长度为3的对象数组
	分别给数组中的元素赋值
	遍历两个数组
************************************************/

int main(void)
{
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;

	Coordinate *p = new Coordinate[3];
	p->m_iX = 6;
	p[0].m_iY = 9;

	p++;
	p->m_iX = 11;
	p[0].m_iY = 13;

	p[1].m_iX = 15;
	p[1].m_iY = 17;


	for(int i=0; i<3; i++){
		cout << "coor:" << coor[i].m_iX << " " << coor[i].m_iY << endl;
	}

	p--;
	for(int j=0; j<3; j++){
	cout << "*p:" << p[j].m_iX << " " << p[j].m_iY << endl;
	}
	delete [] p;

	system("pause");
	return 0;
}