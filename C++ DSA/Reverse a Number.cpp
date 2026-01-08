#include<iostream>
using namespace std;

class Base
{
public:
	//BASE CLASS
	Base()
	{
		cout << "Base Constructor\n";

	}
	//Virtual Function
	virtual void show()
	{
		cout << "Base show()\n";
	}
	//Virtual Destructor
	virtual ~Base()
	{
		cout << "Base Destructor\n";
	}
};
//Derived Class
class Derived : public Base
{
public:
	Derived()
	{
		cout << "Derived Constructor\n";

	}
	void show() override
	{
		cout << "Derived show()\n";
	}
	~Derived()
	{
		cout << "Derived Destructor\n";
	}
};
class A
{
public:
	int x;
	A()
	{
		x = 10;
		cout << "A Constructor\n";

	}
};
//Virtual inheritance used here 

class B : virtual public A
{
public:
	B()
	{
		cout << "B Constructor\n";

	}
};
//Virtual inheritance used here
class C : virtual public A
{
public:
	C()
	{
		cout << "C constructor\n";

	}
};
class D :public B, public C
{
public:
	D()
	{
		cout << "D Constructor\n";

	}

void print()
{
	cout << "Value of x = " << x << endl;
}
};
//MAIN Function

int main()
{
	cout << "======POLYMORPHISM DEMO======\n";
	Base* obj = new Derived();
	obj->show();
	delete obj;
	cout << "\n==== DIAMOND PROBLEM DEMO=====\n";
	D d;
	d.print();
	return 0;
}