#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
	int c = 21;
	void set()
	{
		cout<<"A class "<<endl;
	}
};
class B{
	public :
	int b = 10;
	void get()
	{
		cout<<"B class "<<endl;
	}
};
class C : public A,public B{
	public :
	int a = 10;
	void print()
	{
		cout<<"C class "<<endl;
	}
};
int main()
{
	C im;
	im.get();
	im.set();
	im.print();


}
