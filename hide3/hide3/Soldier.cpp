#include <iostream>
#include "Soldier.h"
using namespace std;

Soldier::Soldier(){
	cout << "Soldier::Soldier()"<<endl;
}

void Soldier::play(int x){
	cout << "Soldier::play()" << endl;
}

void Soldier::work(){
	cout << "Soldier::work()" <<  endl;
}