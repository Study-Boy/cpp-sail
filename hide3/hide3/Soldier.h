#include "Person.h"

class Soldier : public Person
{
public:
	Soldier();
	void play(int x);
	void work();
protected:
	int m_iName;
};