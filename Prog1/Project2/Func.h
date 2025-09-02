class Func {
private:
	int value;

public:
	Func(int in);
	~Func();
	void setvalue(int in);
	int getvalue();
	virtual void dosomething() = 0;
};