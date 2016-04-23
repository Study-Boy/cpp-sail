#include <iostream>
#include "Teacher.h"

int main(void){
	Teacher t1;
	Teacher t2("Merry");

	cout << t1.getName() << " " << t1.getAge() << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;

	system("pause");
	return 0;
}