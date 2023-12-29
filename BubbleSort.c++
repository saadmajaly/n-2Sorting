#include <iostream>
using namespace std;
void bubbleSort(int a[],int size)
{
	//bubble sort 
	for(int j=0;j<size;j++)
	{
		for(int i=size-1;i>j;i--)
		if(a[i]<a[i-1])
		{swap(a[i],a[i-1]);}
	}
	for(int i=0;i<size;i++)
		{cout<<a[i]<<endl;}
}

main(){

}