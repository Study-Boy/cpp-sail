#include <iostream>
#include "Line.h"
#include "Coordinate.h"
using namespace std;

Line::Line(int x1,int y1, int x2, int y2):m_CoorA(x1,y1),m_CoorB(x2,y2){

	cout << "Line()" << endl;
}
Line::~Line(){

	cout << "~Line()" << endl;
}
void Line::setA(int x, int y){
	//m_CoorA.setX(x);
	//m_CoorA.setY(y);
}
void Line::setB(int x, int y){
	m_CoorB.setX(x);
	m_CoorB.setY(y);
}
void Line::printInfo(){
	cout << "("<<m_CoorA.getX()<<"," <<m_CoorA.getY() << ")" << endl;
	cout << "("<<m_CoorB.getX()<<"," <<m_CoorB.getY() << ")" << endl;
}

void Line::printInfo() const{
	cout << "("<<m_CoorA.getX()<<"," <<m_CoorA.getY() << ")" << endl;
	cout << "("<<m_CoorB.getX()<<"," <<m_CoorB.getY() << ")" << endl;
	cout << " printInfo const" << endl;
}