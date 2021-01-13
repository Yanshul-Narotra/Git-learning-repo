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

int main()
{
int a[MAXSIZE];
int choice,x,size=0;
while(1)
{
	cout<<"1.INSERT"<<endl;
	cout<<"2.DELETE"<<endl;
	cout<<"3.DISPLAY"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"ENTER THE CHOICE"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"ENTER THE NUMBER TO BE INSERTED"<<endl;
		cin>>x;
		insert(a,size,x);
		break;
		
		case 2:
		deletepq(a,size);
		break;
		case 3:
		display(a,size);
		break;
		case 4:
			return 0;
	}
	
	
}

//TRYING TO INSERT IT IN GIT HUB




}
