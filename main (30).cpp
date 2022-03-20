/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int FindMax(int a[],int n)
{
	int i, max;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max) 
			max =a[i]; 
	}
	return max; 
}

int FindMin(int a[],int n)
{	
	int i, min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min =a[i];
	}
	return min; 
}
int main()
{
	int i,size,array[50],max,min;

	cout<<"Input number of elements in array\n";
	cin>>size;

	cout<<"Enter "<< size << " integers\n";
	for(i=0;i<size;i++)
	cin>>array[i];

	max = FindMax(array,size); 
	min = FindMin(array,size); 
	cout<<"Maximum element in the array is:" << max << "\n";
	cout<<"Minimum element in the array is:" << min << "\n";

return 0;
}
