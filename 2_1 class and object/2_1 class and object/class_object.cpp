#include <iostream>
#include <stdlib.h>
using namespace std;

class Coordinate{
public:
	int x;
	int y;

	void printx(){
		cout << "x:" << x << endl;
	}
	void printy(){
		cout << "y:" << y << endl;
	}
};
int main(){
	Coordinate coor;
	coor.x = 10;
	coor.y = 20;
	coor.printx();
	coor.printy ();

	Coordinate *p = new Coordinate();
	if(p == NULL){
		return 0;
	}
	p->x = 100;
	p->y = 200;
	p->printx();
	p->printy();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}