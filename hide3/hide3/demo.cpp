#include <iostream>
#include <stdlib.h>
#include "Soldier.h"

/*****************************************
继承关系中的隐藏：
要求：
1、Person类，数据成员：m_strName,
			成员函数：构造函数、play()
2、Soldier类，数据成员：无
			成员函数：构造函数、play().work()
******************************************/

int main(){
	Soldier soldier;
	soldier.play(7);
	soldier.work();

	soldier.Person::play();
	system("pause");
	return 0;
}


