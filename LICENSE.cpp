#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <cstdlib>
#include <iomanip>

//amirhossein nasr  

using namespace std;

int main () 
{
	
string given_name ;
string last_name ; 
float ID ;
float avg ;

cout << "  WELCOME:please choose  a action\n " ;
cout << " for add student enter (1)\n" ;
cout << "  for show list enter (2)\n" ;
cout << "  for search enter (3)\n "  ;
cout << " for show best student enter (4)\n "  ;

int n =0;


while(n!=-1){

cin >> n ;
fstream myfile;



switch(n) {
	
	case 1 :
		{
	myfile.open("a.dat",ios::out) ;
		
if (! myfile)
{
	cout<<" Dear user : we can not open the file\n " ;
	exit(0) ;
	}
	else 
	{
	
	cout<<"please enter information  first list \n " ;
//while(true)
cin>>given_name>>last_name >>ID>>avg ;

myfile << given_name << " " << last_name << " " << ID <<" "<<avg<< endl ;
	cout<<"-------------------------------------\nfor back to meno enter 1 or 2or 3or 4 \n-------------------------------------\n" ;
	

myfile.close() ; 
}
break ;
}
case 2: {
	

myfile.open("a.dat",ios::app) ;
		
if (! myfile)
{
	cout<<" Dear user : we can not open the file\n " ;
	exit(0) ;
	}
	else 
	{
	
	cout<<"please add student  \n " ;
//while(true)
cin>>given_name>>last_name >>ID>>avg ;

myfile << given_name << " " << last_name << " " << ID <<" "<<avg<< endl ;
	cout<<"-------------------------------------\nfor back to meno enter 1 or 2or 3or 4 \n-------------------------------------\n" ;
	

myfile.close() ; 
}
break ;
}

case 3: {
	

myfile.open("a.dat",ios::in) ;
		
if (! myfile)
{
	cout<<" Dear user : we can not open the file\n " ;
	exit(0) ;
	}
	else 
	{
	
	cout<<"yor list is  \n " ;
string str;
int c;
while(getline (myfile,str)) {
cout<<" student["<<c<<"]:"<<str<<"\n";
c++;
}
cout<< "-------------------------------------\nfor back to meno enter 1 or 2or 3or 4 \n-------------------------------------\n " ;	

myfile.close() ; 
}
break ;
}
case 4 :
{

if (! myfile)
{
	cout<<" Dear user : we can not open the file\n " ;
	exit(0) ;
	}
	else 
	{
	
	cout<<" list top levels  \n " ;
string str2;
int c;
while(getline (myfile,str2)) {
if(avg >=17)
str2=" hhh" ;
cout << str2 ;

//cout <<"name and last name: " <<given_name<<"  " << last_name<<"\n id: " <<ID<<"\n moadel"<<avg ;
}
	cout<< "----------------------------------------\nfor back to meno enter 1 or 2or 3or 4 \n-----------------------------------------\n ";

myfile.close() ; 
}
break ;
}



}










	}






















}




	
	
	

