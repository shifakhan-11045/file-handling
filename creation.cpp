#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("sk.TXT");
	char name[20],ch;
	do{
		
		cout<<"Enter name : ";
		gets(name);
		outfile<<name<<endl;
		cout<<"any more choice (y/n) : ";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	outfile.close();
	
}
