#include <iostream>
#include <stdlib.h>
#include "Line.h"
using namespace std;

/**********************************************8
/* �����Ա
/*Ҫ��
	���������ࣺ
		�����ࣺCoordinate
		���ݳ�Ա��������m_iX,������m_iY
		��Ա���������캯�����������������ݷ�װ����
		�߶��ࣺLine
		���ݳ�Ա�� ��Aָ�� m_coorA,��Bָ�� m_coorB
		��Ա���������캯����������������Ϣ��ӡ����
******************************************************/



int main(void){
	Line *p = new Line(1,2,3,4);
	p->printInfo();
	delete p;
	p =  NULL;
	cout << sizeof(p) << endl;
	cout << sizeof(Line) << endl;

	system("pause");
	return 0;
}