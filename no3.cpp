#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main() 
{
	int arrsize;
	char x[500], w;
	
	cout << "****Enter data****"<< endl;
	cin >> x;
	arrsize=strlen(x);
	for (int y = 0; y < arrsize; y++)
	for (int z = 0; z< arrsize - 1; z++)
	{
		if (x[z] > x[z + 1]) 
		{
			w= x[z];
			x[z] = x[z + 1];
			x[z + 1] = w;
		}
	}
	cout << "\nData after sorting"<< endl;
	cout << x <<endl;
	cout << "\nSize of the array: "<< arrsize<< endl;
	getch();
	return 0;
}
