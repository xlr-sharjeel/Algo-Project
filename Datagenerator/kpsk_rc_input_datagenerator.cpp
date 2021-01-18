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
	string rollno;
	string w;
	int n = rand()%91 + 10;
	
	cout<<"Enter your roll no: (18K-1130)"<<endl;
	cout<<"ROLL NUMBER:  ";
	cin>>rollno;
	cout<<endl;
	
	int max = rollno.length();
	w = rollno[max-3];
	w = w + rollno[max-2];
	w = w + rollno[max-1];
	
	//cout<<w<<endl;
	
	Myfile.open("kpsk_rc_input.txt", ios::app);
	if(Myfile.is_open())
	{
		Myfile<<w;
		Myfile<<endl;
		
		for (int j=0 ; j<2; j++)
		{
			for (int i=0; i<n; i++)
			{
				Myfile << rand()%100 + 1;
				Myfile << " ";
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
