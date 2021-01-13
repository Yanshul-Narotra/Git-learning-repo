#include<bits/stdc++.h>
using namespace std;
# define MAXSIZE 100000

void insert(int a[],int &n,int x)
{
	a[n]=x;
	int i=n;
	n++;
	int parent=(i-1)/2;
	while(parent>=0 and a[i]>a[parent])
	{
		swap(a[parent],a[i]);
		i=parent;
		parent=(parent-1)/2;
	}
	
	
}

void heapify(int a[],int i,int n)
{
	int child1=2*i+2;
	int child2=2*i+1;
	int idx=i;
	if(child1<n and a[idx]<a[child1])
	{
		idx=child1;
	}
	
	if(child2<n and a[idx]<a[child2])
	{
		idx=child2;
	}
	
	if(idx!=i)
	{
		swap(a[idx],a[i]);
		heapify(a,idx,n);
	}
	
}

void deletepq(int a[],int &n)
{
	swap(a[0],a[n-1]);
	n--;
	heapify(a,0,n);
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


void heapsort(int a[],int n)
{
	if(n==1)
	{
		cout<<a[n-1]<<" ";
		return;
	}
	
	int temp=a[0];
	deletepq(a,n);
	heapsort(a,n);
	cout<<temp<<" ";
	
}

int main()
{
int a[MAXSIZE];
int n;
cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}

for(int i=0;i<=n/2;i++)
{
	heapify(a,i,n);
}

heapsort(a,n);

}
