#include<iostream>
#include<string.h>
using namespace std;

class animal{
	public :
	int age;
	char name[100];

	void get()
	{
		cout<<"Enter age = ";
		cin>>age;
		cout<<"Enter name = ";
		cin>>name;
	}
};
class zebra : public animal {
	public :
	void zeb()
	{
		
		cout<<"zebra age = "<<age<<endl
			<<"zebra name = "<<name<<endl;
	}
};
class dolphin : public animal {
	public :
	void set()
	{
		
		cout<<"dolphin age = "<<age<<endl
			<<"dolphin name = "<<name<<endl;
	}
};
main()
{
	animal a;
	zebra z;
	dolphin d; 
	a.get();
	
	z.zeb();

	d.set();
	
}
