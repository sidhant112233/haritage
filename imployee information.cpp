#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
	char name;
	int age;
	char fild;
	int sarrary;
	int id;
	char addrass;
	char experienc;
	int contact;
	char email;
	
	void setter()
	{
		cout<<"Enter impoyee name = ";
		cin>>name;
		cout<<"enter empoyee age = ";
		cin>>age;
		cout<<"enter imployee fild = ";
		cin>>fild;
	
		
	}
	
};
class B : public A{
	public :
	void setter()
	{
		cout<<"enter imployee sarray";
		cin>>sarrary;
		cout<<"enter imployee id = ";
		cin>>id;
		cout<<"enter imployee add = ";
		cin>>addrass;
		cout<<"enter imployee experience  =";
		cin>>experienc;
		cout<<"enter imployee contact  =";
		cin>>contact;
		cout<<"enter imployee imail id  =";
		cin>>email;
	}
};
class C : public B{
	public :
	void getter()
	{
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<fild<<endl;
		cout<<sarrary<<endl;
		cout<<id<<endl;
		cout<<addrass<<endl;
		cout<<experienc<<endl;
		cout<<contact<<endl;
		cout<<email<<endl;
	}
};
mina()
{
	C im;
	im.A :: setter();
	im.B :: setter();
	im.C ::getter();

}
