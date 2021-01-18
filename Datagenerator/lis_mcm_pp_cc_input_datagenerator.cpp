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
	int n;
	
	cout<<"Enter the number of numbers you want to write in file. (30-100)"<<endl;
	cout<<"count:  ";
	cin>>n;
	cout<<endl;
	
	Myfile.open("lis_mcm_pp_cc_input.txt", ios::app);
	if(Myfile.is_open())
	{
		for (int j=0 ; j<n; j++)
		{
			Myfile << rand()%101;
			Myfile<<" ";
		}
		cout<<"DATA GENERATED SUCCESSFULLY";
	}
	else
	{
		cout<<"Error aagaya";
	}
	Myfile.close();
}
