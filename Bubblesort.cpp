#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],i;
	cin>>n;  //5
	for(i=0;i<n;i++)
	{
		cin>>arr[i]; // //2,10,8,7,1
	}
	int swaped=0;
	for(i=0;i<n-1;i++) //i from 0 to 3
	{
		for(int j=0;j<n-i-1;j++) //j from 0 to 3
		{
			if(arr[j] > arr[j+1])
			{
				 swap(arr[j],arr[j+1]); //10->8,8->10
				 swaped=1;
			}
		}
		if(swaped==0)
		break;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
