//Aurhor: Ryan Hoofard
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
char input;
string item;

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
 cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
 cout<<"\nYour choice (A/Q): ";
 cin>>input;
do{
cout<<"What is your item?"<<endl;
cin>>item;
numItems = numItems+1;
 
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
 cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
 cout<<"\nYour choice (A/Q): ";
 cin>>input;

}
 while ((input == 'A' || input == 'a')&& numItems < 6 );

cout<<"You'll need a bigger list!"<<endl;






    
  

return 0;
 }
