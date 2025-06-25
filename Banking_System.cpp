/*BANKING SYSTEM
classes:customer,accounts,transaction
*/
#include<iostream>
#include<string>
using namespace std;

//class formed namely bank account
class bankacc{
private:
     string name;
     int accno;
     float balance;

public:
    //function to create account
     void createacc(){
     cout<<"ENTER ACCOUNT HOLDER DETAILS"<<endl;
     cout<<"enter name:";
     cin.ignore();
     getline(cin,name);
     cout<<"enter account no.:";
     cin>>accno;
     cout<<"enter initial balance:";
     cin>>balance;

     cout<<"ACCOUNT OPENED SUCCESSFULLY!"<<endl;
     }
     //function to deposit amount
     void deposit(){
     float amount;
     cout<<"enter amount to deposit:";
     cin>>amount;
     if(amount>0){
        balance+=amount;
        cout<<"AMOUNT DEPOSITED SUCCESSFULLY"<<endl;
     }
     else{
        cout<<"INVALID AMOUNT";
     }

     }

     //function to withdraw amount
     void withdraw(){
     float amount;
     cout<<"ENTER AMOUNT TO WITHDRAW:";
     cin>>amount;
     if(amount>balance){
        cout<<"INSUFFICIENT BALANCE!"<<endl;
     }
     else if(amount<=balance){
        cout<<"INVALID AMOUNT!"<<endl;

     }
     else{
        balance-=amount;
        cout<<amount<<"HAS BEEN WITHDRAW"<<endl;
     }

     }

     //function to display account holder details
     void showdetails(){
     cout<<"----------ACCOUNT DETAILS----------"<<endl;
     cout<<"NAME:"<<name<<endl;
     cout<<"ACCOUNT NUMBER:"<<accno<<endl;
     cout<<"CURRENT BALANCE:"<<balance<<endl;
     }

};


//main code
int main(){
    bankacc n;
    int choice;

    do{
        cout<<"\n---------- BANKING MENU----------"<<endl;
        cout<<"1. CREATE ACCOUNT"<<endl;
        cout<<"2. DEPOSIT MONEY"<<endl;
        cout<<"3. WITHDRAW MONEY"<<endl;
        cout<<"4. SHOW ACCOUNT"<<endl;
        cout<<"5. EXIT"<<endl;

        cout<<"ENTER YOUR CHOICE:";
        cin>>choice;

        switch(choice){
               case 1: n.createacc();
               break;
               case 2: n.deposit();
               break;
               case 3:n.withdraw();
               break;
               case 4:n.showdetails();
               break;
               case 5:cout<<"THANK YOU FOR USING OUR SYSTEM!"<<endl;
               default :cout<<"INVALID CHOICE. TRY AGAIN"<<endl;

                }

    }while(choice!=5);
    return 0;
}
