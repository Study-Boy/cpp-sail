#ifndef _COOR_
#define _COOR_

#include <iostream>

class Coordinate{
public:
	Coordinate(int x, int y);
	~Coordinate();
	void setX(int x);
	int getX();
	void setY(int x);
	int getY();
private:
	int m_iX;
	int m_iY;
};

#endif