#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/*****************************************************
/*��ĿҪ��
/*	1����ʾ�û���������
/*	2�������û�������
/*	3��Ȼ�����û��ʺã�Hello XXX
/*	4�������û����ֵĳ���
/*	5�������û����ֵ�����ĸ��ʲô
/*	6������û�ֱ������س��������û�����Ϊ��
/*	7������û��������imooc�������û��Ľ�ɫ�ǹ���Ա
*******************************************************/

int main(void){
	string name;
	cout << "�������������֣�"<< endl;
	getline(cin, name);
	if(name.empty()){
		cout << "��������ǿ�"<<endl;
		system("pause");
		return 0;
	}
	if(name == "imooc"){
		cout << "����һ������Ա"<< endl;
	}
	
	cout << "Hello," + name << endl;
	cout << "������ֳ����ǣ�" << name.size() << endl;
	cout << "�����ֵĵ�һ����ĸ�ǣ�"<< name[0] << endl;

	system("pause");
	return 0;

}