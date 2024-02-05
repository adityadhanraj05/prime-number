#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i,count,n;
	public:
	void input()
	{
		cout<<"enter any number";
		cin>>n;
	}
	void process()
	{
		count=0;
		for(i=1;i<=5;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<"prime no";
			
		}
		else
		{
			cout<<"not prime no";
		}
	}
};
int main()
{
	A obj;
	obj.input();
	obj.process();
	getch();
}
