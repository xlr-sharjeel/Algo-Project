#include<iostream>
#include<fstream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main ()
{
	srand (time(NULL));
	ofstream Myfile;
	string name;
	int entry;
	
	cout<<"Enter your full name:"<<endl;
	cout<<"NAME:  ";
	cin>>name;
	cout<<endl;
	
	Myfile.open("wb_input.txt", ios::app);
	if(Myfile.is_open())
	{
		for (int j=0 ; j<10; j++)
		{
			for (int i=0; i<(rand()%10 + 1); i++)
			{
				entry = rand()%26 + 97;
				Myfile << char(entry);
			}
			Myfile<<" ";
		}
		Myfile<<endl;
		Myfile<<name;
		cout<<"DATA GENERATED SUCCESSFULLY";
	}
	else
	{
		cout<<"Error aagaya";
	}
	Myfile.close();
}
