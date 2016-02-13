/* The complete Linked List program */
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{  
	 int item;
	 node *next;
	/* data */
};
node *head =NULL;
node *start = NULL;
void insert(int n)
{
	  node *t =new node;
	  if(head==NULL)
	  {
	  	start = t;
	  }
	  if(t==NULL)
	  {
	  	cout<<"\nMemory Error.. exiting...\n";
	  	exit(0);
	  }
	  else
	  {
	  	 t->next = head;
	  	 t->item =n;
	  	 head = t;
	  }
	// code for insert
}
void insertE(int n)
{      if(head==NULL)
	    {
	    	insert(n);
	    }
	   else
	   { 
	   node *t = head;
	   node *p = new node;
	   p->next = NULL;
	   p->item = n;
	   while(t->next!=NULL)
	   {
	   	t = t->next;
	   }
	   t->next = p;
	}
	// code for insert form End 
}
void insertAny(int n,int key)
{
	 node * t= head;
	 node *p = new node;
	 p->item = n;
	 while(t->item!=key&&t->next!=NULL)
	 {
	 	t =t->next;
	 }
	 if(t->next==NULL)
	 {
	 	cout<<"\nNo key matches !";
	 }
	 else
	 {
	 	p->next= t->next;
	 	p->item = n;
	 	t->next = p;
	 }
	 
	// code for inserting at any position
}
void deleteB()
{     if(head==NULL)
	  {
	  	cout<<"\nList is empty !";
	  }
	  else
	  {
	  	node *t = head;
	    head = t->next;
	    cout<<"Deleted element :"<<t->item<<"\n";
	    delete t;
	  }
	//code for deleteing from start
}
void deleteE()
{   node *pre;
	node *t = head;
	if(head==start)
	{
		delete t;
		head = start =NULL;
	}
	else{
	while(t->next!=NULL)
	{  
     pre = t;
     t=t->next;
	}
	pre->next = NULL;
	delete t;
     }	// code for deletion from end of list
}
void deleteBykey(int key)
{   bool suc = false;
	node *t = head;
	node *p;
    while(t!=NULL)
    {   
    	if(head->item==key)
    	{    suc = true;
    		head = head->next;
    		delete t;
    		break;
    	} 
    	if(t->item==key)
    	{  suc = true;
           p->next = t->next;
           delete t;
           break;
    	}
    	  p = t;
    	 t =t->next;
    }
    if(suc==false)
    	cout<<"\nNo element such as :"<<key;
    else
    	cout<<"\nDeleted !";
	// code for deleting by key
}
void display()
{   
	 if(head==NULL)
	 {
	 	cout<<"\nList Is Empty !";
	 }
	 else
	 {
	 	node *t = head;
	 	while(t!=NULL)
	 	{
	 		cout<<t->item<<"->";
	 		t = t->next;
	 	}
	 }
	// code to display list
}
void bubbleSort(node *st)
{
	while(st->next!=NULL)
	{
		if(st->item > st->next->item)
		{
			int t = st->item;
			st->item = st->next->item;
			st->next->item  = t;
		}
		st = st->next;
	}
	//code for bubble sort
}
int main()
{
	int choice,data;
	while(1)
	{
		cout<<"\nMenu ---\n";
		cout<<"Press 1 TO insert\n";
		cout<<"Press 2 TO insert At End of list\n";
		cout<<"Press 3 TO insert at any position after\n";
		cout<<"Press 4 TO delete from beg\n";
		cout<<"Prees 5 TO delete from End\n";
		cout<<"Press 6 TO delete specific item in list \n";
		cout<<"Press 7 TO display list \n";
		cout<<"Press 8 TO bubble sort list\n";
		cout<<"Press 9 TO exit\n";
		cout<<"Your CHoice :";
		cin>>choice;
        if(choice==1)
        {
        	cout<<"Enter data :";
            cin>>data;
            insert(data);
        }
        if(choice==2)
        {  cout<<"Enter data :";
           cin>>data;
           insertE(data);
        }
        if(choice==3)
        {   int k;
        	cout<<"Enter Key :";
        	cin>>k;
        	cout<<"\nEnter Data";
        	cin>>data;
        	insertAny(data,k);
        }
        if(choice==4)
        	deleteB();
        if(choice==5)
        	deleteE();
        if(choice==6)
        {
        	cout<<"Enter the item in list :";
        	cin>>data;
        	deleteBykey(data);
        }
        if(choice==7)
        display();
        if(choice==8)
        	bubbleSort(head);
        if(choice==9)
        	exit(0);
	}
	return 0;
}
