//Aurhor: Ryan Hoofard
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
      vector <string> list; //array of 5 strings
        int numItems = 0;
        char input;
        string item;
        int newItems = 0;
        string listItem;   
        do{

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (D)elete last item";
                cout<<"\n (Q)uit"<<endl;
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                
                        if (input == 'a' || input == 'A'){
                              
                                cout<<"\nYour choice (A/Q): What is the item?"<<endl;
                                cin>>item;
                                
                        
                                        list.push_back (item);
                                                                     }
                if(input== 'd'|| input == 'D' && list.size()>0){
                      list.pop_back();
                       cout<<item<<" was deleted from the list."<<endl;

                       }
                   
        }
        while (input != 'Q' && input != 'q');
        cout<<"Your choice (A/B): ==ITEMS TO BUY=="<<endl;
        
        for(int index=0; index< list.size(); index++){
        cout<<index+1<<" "<<list[index]<<endl;
 }

        return 0;
}
