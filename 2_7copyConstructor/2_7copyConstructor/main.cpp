#include "Teacher.h"
using namespace std;

/*******************************************************
/* Teacher��
/*	�Զ��忽�����캯��
/*����
/*	���֡����䡢ѧ����
/*��Ա����
/*	���ݳ�Ա�ķ�װ����
********************************************************/
void test(Teacher t) //&t
{
}

int main(void){
	Teacher t1;
	Teacher t2 = t1;
	Teacher t3(t1);

	test(t1);

	system("pause");
	return 0;
}