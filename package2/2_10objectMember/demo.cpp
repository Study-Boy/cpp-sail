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
		���ݳ�Ա�� ��A m_coorA,��B m_coorB
		��Ա���������캯�����������������ݷ�װ����Ϣ��ӡ����
******************************************************/



int main(void){
	Line *p = new Line(1,2,3,4);
	delete p;

	system("pause");
	return 0;
}