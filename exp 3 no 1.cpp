#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x, y[10]; 
	double s, l;
	double sum=0;
	cout<< "Enter 10 numbers"<< endl;
	for(x=0;x<10;x++)
	{
		cin>>y[x];
	}
	for(x=0;x<10;x++)
	{
		sum=sum+y[x];
	}
	s= y[0];
	l= y[0];
	for (int i=0;i<10;i++)
	{	if(y[i]>l)
		{
			l=y[i];
		}
		if(y[i]<s)
		{
			s=y[i];
		}
	}1
	cout<< "Largest integer: "<< l<< endl;
	cout << "Smallest integer: "<< s<< endl;
	cout << "The total is: "<< sum<< endl;
	cout << "The average is: " << sum/10<< endl;
	getch();
	return 0;
}
