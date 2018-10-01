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

   
do{

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
 cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
 cout<<"\nYour choice (A/Q): ";
cin>>input;
if (numItems< 5){
    if (input == 'a' || input == 'A'){

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
 cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
 cout<<"Your choice (A/Q):"<<endl;
 
cout<<"What is the item?"<<endl;
cin>>item;
numItems = numItems+1;
     

}}
else { 
cout<<"You'll neeed a bigger list"<<endl;
}
}
 while (input != 'Q' && input != 'q');








    
  

return 0;
 }
