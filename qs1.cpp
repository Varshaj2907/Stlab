#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void exchange(int *,int *);
void qs(int a[20],int low,int high)
	{
	int i,j,key,temp;	
	j=high;
	i=low+1;
	key=low;
	if(low>high)
		return;

	while(i<=j)
	{	
	  while(a[i]<=a[key])
		i++;
       	  while(a[j]>a[key])
		j--;
	if(i<j)
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	  }
		temp=a[j];
		a[j]=a[key];
		a[key]=temp;
       
	qs(a,low,j-1);
	qs(a,j+1,high);
	}
main()
	{
	int n,i,j;
	cout<<"\nEnter the no of elements in an arrray : ";
	cin>>n;
	int a[n];
	cout<<"Array elements before sorting : \n";
	for(i=1;i<=n;i++)
	    {
	     a[i]=rand()%100;
	     cout<<a[i]<<" ";
	    }
        qs(a,1,n);
	cout<<"\nArray elements after sorting : \n";
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	}
	

