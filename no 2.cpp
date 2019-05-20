#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int pA[7], pB[7], pC[7];
	int a, b, c, x, y, z;
	cout<< "Enter all temperature for a week of Province A, Province B and then Province C."<< endl;
	for (x=0;x<7;x++)
	{
		cout << "Province A, Day " <<x+1<< ": ";
		cin >> pA[x];
	}
	for (y=0;y<7;y++)
	{
		cout << "Province B, Day " << y+1<< ": ";
		cin >> pB[y];
	}
	for (z=0;z<7;z++)
	{
		cout << "Province C, Day " << z+1<< ": ";
		cin >> pC[z];
	}
	cout << "\nDisplaying Values:\n"<< endl;
	for (a=0;a<7;a++)
	{
	cout <<"Province A, Day " <<a+1 << "= " <<pA[a] << endl;
	}
	for (b=0;b<7;b++)
	{
	cout << "Province B, Day " <<b+1 << "= " <<pB[b] << endl;
	}
	for (c=0;c<7;c++)
	{
	cout << "Province C, Day " <<c+1 << "= " <<pC[c] << endl;
	}

	getch();
	return 0;
}
