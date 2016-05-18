#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(){
	cout << "Person::Person()"<< endl;
}

void Person::play(){
	cout << "Person::play()" << endl;
}