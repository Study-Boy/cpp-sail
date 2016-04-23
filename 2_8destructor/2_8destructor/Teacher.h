#include <string>
using namespace std;

class Teacher{
public:
	Teacher(string name= "James", int age = 43);
	Teacher(const Teacher& tea);
	~Teacher();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	void teach();
private:
	string m_strName;
	int m_iAge;
};