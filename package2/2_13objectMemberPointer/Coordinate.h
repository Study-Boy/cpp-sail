#ifndef _COOR_
#define _COOR_

#include <iostream>

class Coordinate{
public:
	Coordinate(int x, int y);
	~Coordinate();
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};

#endif