#include<stdio.h>
int binarysearch(int a[],int key,int n);
int main()
{
	int i,n,pos,key;
	int a[10];
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter value of key elements to be search");
	scanf("%d",&key);
	pos=binarysearch(a,key,n);
	if(pos>=0)
	printf("element is found at %d positon",pos);
	else
	printf("element not found");
	return 0;
}
int binarysearch(int a[],int key, int n)	
{
	int i, mid,beg=0,end=n-1;
	while(beg <= end)
	{
		mid = (beg+end)/2;
		if(a[mid] == key)
			return mid+1;
		else if(a[mid] < key)
			beg = mid+1;
		else
			end = mid-1;
	}
	return 0;
}
	 
