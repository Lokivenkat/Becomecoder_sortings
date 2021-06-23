#include <iostream>
using namespace std;
int partition(int a[],int lb,int ub)
{
    int pivot=a[lb];//first value as pivot or key
    int start=lb,end=ub;//take two pointers begining and other at end
     while(start<end)//wether they crossed each other or not 
      {
	   while(a[start]<=pivot)//if you find value <=pivot move ur start
        {
          start++;
        }
         while(a[end]>pivot)//if you find value > pivot move ur end
        {
          end--;
        }
        if(start<end){//if they dont crossed each other then swap them
          swap(a[start],a[end]);
       }

        
    }
    swap(a[lb],a[end]);//if they crossed they put ur pivot to middle
    return end;
}
void QuickSort(int a[],int low,int high)
{

    if(low<high)//

    {
        int loc=partition(a,low,high);//find partition location to make parts

        QuickSort(a,low,loc-1);//part 1 all the values < pivot

        QuickSort(a,loc+1,high);//part 2 all the values >pivot

    }

}

int main() {

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)

    {

        cin>>a[i];

    }

    QuickSort(a,0,n-1);

    for(int i=0;i<n;i++)

    {

        cout<<a[i]<<" ";

    }

    return 0;

}
