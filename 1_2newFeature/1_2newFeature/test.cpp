#include <iostream>
#include <stdlib.h>

using namespace std;
//Ҫ������һ�����������������ֱ���8��10��16���ƴ�ӡ����Ļ��
//Ҫ����ʾ�û�����һ������ֵ���Բ�����ʽ��ֵ��ӡ����Ļ��

int main(void){
	cout << "������һ��������" << endl;
	int x = 0;
	cin >> x;
	cout << "oct: " << oct << x << endl;
	cout << "dec: " << dec << x << endl;
	cout << "hex: " << hex << x << endl;

	cout << "������һ������ֵ(0��1)" << endl;
	bool y = false;
	cin >> y;
	cout << "bool: " << boolalpha << y << endl;

	system("pause");
	return 0;
}