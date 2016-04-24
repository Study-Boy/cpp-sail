#include <iostream>


class Coordinate{
public:
	Coordinate();
	~Coordinate();
	void setX(int x);
	int getX();
	void setY(int x);
	int getY();
//private:
	int m_iX;
	int m_iY;
};
