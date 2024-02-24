#include <bits/stdc++.h>		//Importing library
using namespace std;
void add(list<string> &a)		//Initialising function
{
	cout<<endl;
	string new_task;
	cout<<"ENTER THE NEW TASK: ";
	cin>>new_task;						//Task Input
	a.push_back(new_task);				//Adding task to To Do List
	cout<<"TASK ADDED SUCCESSFULLY"<<endl;
}
void display(list<string> &a,int *p)		//Initialising function
{
	cout<<endl;
	list<string>::iterator it;				//Initialising iterator to accsess tasks in to do list
	int i=1;
	for(it=a.begin();it!=a.end();it++)
	{
		if(p[i]==0)				//Check status
		{
			cout<<*it<<" - "<<"PENDING\n";	//Print task
		}
		else if(p[i]==1)
		{
			cout<<*it<<" - "<<"COMPLETED\n";//Print task
		}
		i++;
	}
	cout<<endl;
}
void mark(list<string> &a,int *p)
{
	cout<<endl;
	list<string>::iterator it;				//Initialising iterator to accsess tasks in to do list
	int i=1;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<i<<" - "<<*it<<"\n";			//Print task
		i++;
	}
	cout<<"ENTER THE TASK NUMBER TO BE MARKED AS COMPLETED: ";
	int num;
	cin>>num;					//User Input
	p[num]=1;					//Updating status
	cout<<"TASK UPDATED SUCCESFULLY"<<endl;		//Acknowledgement
}
void rem(list<string> &a,int *p)
{
	cout<<endl;
	list<string>::iterator it;				//Initialising iterator to accsess tasks in to do list
	int i=1;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<i<<" - "<<*it<<"\n";
		i++;
	}
	cout<<"ENTER THE TASK NUMBER TO BE REMOVED: ";
	int num;
	cin>>num;					//User Input
	p[num]=2;					//Removing them from ongoing and completed tasks
	cout<<"TASK REMOVED SUCCESFULLY"<<endl;					//Acknowledgement
}
int main()
{
	list <string> to_do_list;			//Initialising to do list
	to_do_list.push_back("Workout");		//Initialising some default tasks
	to_do_list.push_back("Assaignment");	//Initialising some default tasks
	to_do_list.push_back("Preparation"); //Initialising some default tasks
	int status[100];
	for(int i=0;i<100;i++)
	{
		status[i]=0;					//Intialising status of all tasks
	}
	while(true)
	{
		int ch;
		cout<<"PRESS 1 TO ADD NEW TASK\nPRESS 2 TO DISPLAY ALL TASKS\nPRESS 3 TO MARK A TASK AS COMPLETED\nPRESS 4 TO REMOVE A TASK\nPRESS 5 TO END\nEnter your choice:";
		cin>>ch;				//User Input for function to be performed
		if(ch==1)
		{
			add(to_do_list);					//Calling function
		}
		else if(ch==2)
		{
			display(to_do_list,status);			//Calling function
		}
		else if(ch==3)
		{
			mark(to_do_list,status);				//Calling function
		}
		else if(ch==4)
		{
			rem(to_do_list,status);				//Calling function
		}
		else if(ch==5)
		{
			cout<<"THANK YOU FOR USING TO DO LIST!!!";	//Acknowledgement
			break;
		}
		else
		{
			cout<<"CHOOSE A VALID CHOICE\n";//Acknowlegement for invalid choice
		}
	}
}
