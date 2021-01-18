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
	
	cout<<"Enter the name for which you want to generate data"<<endl;
	cout<<"name:  ";
	cin>>name;
	cout<<endl;
	int max = name.length();
	
	Myfile.open("lcs_scs_ld_input.txt", ios::app);
	if(Myfile.is_open())
	{
		for (int j=0 ; j<2; j++)
		{
			int length = rand()%71 + 30;
			for (int i=0; i<length; i++)
			{
				Myfile << name[rand()%max];
			}
			Myfile<<endl;
		}
		cout<<"DATA GENERATED SUCCESSFULLY";
	}
	else
	{
		cout<<"Error aagaya";
	}
	Myfile.close();
}
