#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/********************************************************
/*Teacher 类
/*	1、自定义析构函数
/*	2、普通方式实例化的对象，在销毁对象时是否自动调用析构函数
/*	3、通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数 是
/*数据：
/*	名字、年龄
/*成员函数：
/*	数据成员的封装函数
********************************************************/

void test(){

}

int main(void){
	Teacher t1;
	Teacher *p=new Teacher();
	delete p;
	p = NULL;
	cout << "----------------" << endl;

	Teacher t2(t1);


	system("pause");
	return 0;
}