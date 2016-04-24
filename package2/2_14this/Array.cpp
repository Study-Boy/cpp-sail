#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int len)
{
	this->len = len;
	cout << "Array()" << endl;
}

Array::~Array(){

	cout << "~Array()" << endl;
}
void Array::setLen(int len){
	this->len = len;
}
int Array::getLen(){
	return this->len;
}
Array* Array::printInfo(){
	cout << "m_iLenµÄÖµÊÇ£º" << this->len << endl;
	cout << "this :" << this << endl;
	return this;
}
