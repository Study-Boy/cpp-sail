#ifndef _LINE_
#define _LINE_

#include "Coordinate.h"

class Line{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
	void printInfo() const;
private:
	const Coordinate m_CoorA;//const дǰ д�� ����д��һ��
	Coordinate m_CoorB; 
};

#endif