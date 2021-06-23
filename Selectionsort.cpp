#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
         	if(a[j]<a[min])
         	{
         		 min=j;
         	}
  		}
        swap(a[i],a[min]);
    }
}
int main()
{
    int i,x,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"BEFORE SORT\n";
    for(i=0;i<n;i++) 
    {
    	cout<<a[i]<<" ";
   	}
   	cout<<endl;
    selectionsort(a,n);
    cout<<"AFTER SORT\n";
    for(i=0;i<n;i++) 
    {
    	cout<<a[i]<<" ";
   	}
}

