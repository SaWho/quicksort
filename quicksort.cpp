#include <iostream>
using namespace std;
//get the array
//choose a pivot(any element)
// partition
//call quick sort algorithms again on the small partitions
int part(int arr[],int low,int high)
{
	int end=high,start=low;
	int p=arr[high];
	int s;
	for(int i=high-1;i>=start;i--)
	{
		if(p<arr[i])
		{
			arr[end]=arr[i];
			end--;
		}
		else
		{	
			s=arr[i];
			arr[i]=arr[start];
			arr[start]=s;
			start++;
			i++;
		}
	}
	arr[end]=p;
	return end;
}
void qs(int arr[],int low,int high)
{
if(low<high)
{
int pivot=high;
pivot=part(arr,low,high);
qs(arr,low,pivot-1);
qs(arr,pivot+1,high);
}
else return;
}
/*int main(){
int n,i=0;
	cin>>n;
	int arr[n];
	for(i;i<n;i++)
		cin>>arr[i];
	part(arr,0,n-1);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}*/
int main()
{
	int n,i=0;
	cin>>n;
	int arr[n];
	for(i;i<n;i++)
		cin>>arr[i];
	qs(arr,0,n-1);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
