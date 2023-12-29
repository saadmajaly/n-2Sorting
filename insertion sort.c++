#include <iostream>
using namespace std;
void insertionSort(int a[],int size)
{//insertion sort
	bool s=0;
	int tem;
	for(int i=1;i<size;i++)
	{ tem=i;
		for(int j=i-1;j>=0;j--)
		{
			if(a[tem]<a[j])
			{
				swap(a[tem],a[j]);
				tem--;
			}
			
		}}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	
}

main(){
//sorting alogrithim
 int arr[1000]={};
 sort(arr,1000);
}