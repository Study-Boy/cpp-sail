#include <iostream>
#include "Array.h"
using namespace std;

/*************************************************
ʾ�����ţ�
	1������һ��Array�࣬���ݳ�ԱΪm_iLen,
		��Ա�����������ݷ�װ���������캯������������
		��Ϣ�������
****************************************************/

int main(void){
	Array arr1(10);
	cout << "&arr1:" << &arr1 << endl;
	arr1.printInfo()->setLen(5);
	cout << "len=:" << arr1.getLen() << endl;

	system("pause");
	return 0;
}