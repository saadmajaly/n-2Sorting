#include <iostream>
using namespace std;

void sort(int a[],int size)
{
        //selection sort
	bool s=0;
	int ind=0,min,mini,temp,l=0;
	
	while(!s)
	{
		min=a[l];
		for(int i=l;i<size;i++)
		{if(a[i]<min)
	     {min=a[i];
	      mini=i;}}
	      if(mini==l)
	      {
	      	continue;
	      }
        temp=a[l];
        // cout<<"temp is"<<temp<<endl;
        a[l]=min;
        // cout<<"a low is"<<a[l]<<endl;
        a[mini]=temp;
        // cout<<"mini is"<<mini<<endl;
        l++;
        s=1;
        for(int i=0;i<size-1;i++)
        {
        	if(a[i]>a[i+1])
        	{
        		s=0;
        	}
        }
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main(){
	
int a[10];
for(int i=0;i<10;i++)
{
	cin>>a[i];
}
sort(a,10);

}