/* example main.cpp file for operations over linked list */
#include <iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
	linkedlist<int>mylist;     // list of integers
	int n;
	cout<<"\nEnter number of elements you want to insert in list :";
	cin>>n;
	int data;
	cout<<"\nEnter data :";
	for(int i=0;i<n;i++)
	{
		cin>>data;
		mylist.insert(data);
	}
	cout<<"\nList contains :";
	mylist.display();
	return 0;
}
