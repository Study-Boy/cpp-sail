#include <iostream>
#include <stdlib.h>

using namespace std;
//要求：输入一个整数，将该整数分别以8、10、16进制打印到屏幕上
//要求：提示用户输入一个布尔值，以布尔方式将值打印在屏幕上

int main(void){
	cout << "请输入一个整数：" << endl;
	int x = 0;
	cin >> x;
	cout << "oct: " << oct << x << endl;
	cout << "dec: " << dec << x << endl;
	cout << "hex: " << hex << x << endl;

	cout << "请输入一个布尔值(0、1)" << endl;
	bool y = false;
	cin >> y;
	cout << "bool: " << boolalpha << y << endl;

	system("pause");
	return 0;
}