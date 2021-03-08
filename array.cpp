#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int i=0, k = 0, j = 0;
	cout<<"using for loop."<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"The value at "<<i<<" is "<<a[i]<<endl;
	}
	
	cout<<"Using while loop."<<endl;
	
	while(j<5)
	{
		cout<<"The value at "<<j<<" is "<<a[j]<<endl;
		j++;
	}
	
	cout<<"using do while loop."<<endl;
	do{
		
		cout<<"The value at "<<k<<" is "<<a[k]<<endl;;
		k++;
	}while(k<5);
}
