#include <string>
using namespace std;

class Teacher{
public:
	Teacher(string name= "James", int age = 43/*,int max=100*/);
	Teacher(const Teacher& tea);
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	//int getMax();
	void teach();
private:
	string m_strName;
	int m_iAge;
	//const int m_iMax;
};