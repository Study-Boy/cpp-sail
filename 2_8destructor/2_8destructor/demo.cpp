#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/********************************************************
/*Teacher ��
/*	1���Զ�����������
/*	2����ͨ��ʽʵ�����Ķ��������ٶ���ʱ�Ƿ��Զ�������������
/*	3��ͨ���������캯��ʵ�������������ٶ���ʱ�Ƿ��Զ������������� ��
/*���ݣ�
/*	���֡�����
/*��Ա������
/*	���ݳ�Ա�ķ�װ����
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