
class Array{
public:
	Array(int count);
	~Array();
	void setLen(int len);
	int getLen();
	Array* printInfo();
private:
	int len;
};