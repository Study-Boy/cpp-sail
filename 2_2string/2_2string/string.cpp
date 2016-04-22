#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/*****************************************************
/*题目要求：
/*	1、提示用户输入姓名
/*	2、接受用户的输入
/*	3、然后向用户问好，Hello XXX
/*	4、告诉用户名字的长度
/*	5、告诉用户名字的首字母是什么
/*	6、如果用户直接输入回车，告诉用户输入为空
/*	7、如果用户输入的是imooc，告诉用户的角色是管理员
*******************************************************/

int main(void){
	string name;
	cout << "请输入您的名字："<< endl;
	getline(cin, name);
	if(name.empty()){
		cout << "您输入的是空"<<endl;
		system("pause");
		return 0;
	}
	if(name == "imooc"){
		cout << "您是一个管理员"<< endl;
	}
	
	cout << "Hello," + name << endl;
	cout << "你的名字长度是：" << name.size() << endl;
	cout << "您名字的第一个字母是："<< name[0] << endl;

	system("pause");
	return 0;

}