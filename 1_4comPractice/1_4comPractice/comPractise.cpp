/******************************************************
/*知识点：bool类型 命名空间 输入输出
/*题目要求：
/*	使用一个函数找出一个整形数组中的最大值或最小值
******************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

namespace compA{
	int getMaxorMin(int* arr, int count, bool inMax){
		int temp = arr[0];
		if(inMax){
			for(int i=1;i<count;i++){
				if(temp<arr[i]){
					temp = arr[i];
				}
			}
		}
		else{
			for(int i=1;i<count;i++){
				if(temp>arr[i]){
					temp = arr[i];
				}
			}
		}	
		return temp;
	}
}

int main(void){
	int arr1[]={1,4,2,6,9,56};
	bool isMax = false;

	cout << "请输入 0 or 1 。0代表最小值，1代表最大值"<< endl;
	cin >> isMax;

	int val;
	val = compA::getMaxorMin(arr1,sizeof(arr1)/sizeof(int),isMax);
	string p;
	p = (true==isMax) ?  "Max: " : "Min: " ;
	cout << p  << val << endl;
	system("pause");
	return 0;
}