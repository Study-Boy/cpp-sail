#include <iostream>
#include "Array.h"
using namespace std;

/*************************************************
ʾ�����ţ�
	1������һ��Array�࣬���ݳ�ԱΪm_iCount,
		��Ա�����������ݷ�װ���������캯�����������캯��
		������������ͨ����ʾ�����ǳ����ԭ��

	2���������ݳ�Աm_pArr,������m_pArr��ַ���鿴������ͬʱ
	���칹�캯�����������캯����������������������ԭ��
	�ͱ�Ҫ�ԡ�
****************************************************/

int main(void){
	Array arr1(5);


	Array arr2(arr1);
	cout << "arr2.m_iCount" << arr2.getCount() << endl;

	arr1.printArr();
	arr2.printArr();

	system("pause");
	return 0;
}