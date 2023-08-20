#include<iostream>
#include<string.h>
using namespace std;
class mother{
	public :
	char mag;
	
	void display()
	{
		cout<<"mother loves daughter"<<mag<<endl;
		
	}
};
class daughter : public mother{
	public :
	char mag;
	void display()
	{
		cout<<"daghter loves mother"<<mag<<endl;
	
	}
};
main()
{
	

	daughter d;
	d.mother :: display();
	d.display();
}

