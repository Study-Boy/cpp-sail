/******************************************************
/*֪ʶ�㣺bool���� �����ռ� �������
/*��ĿҪ��
/*	ʹ��һ�������ҳ�һ�����������е����ֵ����Сֵ
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

	cout << "������ 0 or 1 ��0������Сֵ��1�������ֵ"<< endl;
	cin >> isMax;

	int val;
	val = compA::getMaxorMin(arr1,sizeof(arr1)/sizeof(int),isMax);
	string p;
	p = (true==isMax) ?  "Max: " : "Min: " ;
	cout << p  << val << endl;
	system("pause");
	return 0;
}