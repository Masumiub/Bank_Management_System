#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int account_num;
    float current_balance;

    void diposit(){
    float diposit_amount;
    cout<< "Enter a amount to Diposit:";
    cin>> diposit_amount;
    current_balance = current_balance+diposit_amount;
    }

    void withdraw(){
    float withdraw_amount;
    cout<< "Enter a amount to withdraw:";
    cin>>withdraw_amount;
    if(current_balance<withdraw_amount){
        cout<< "withdraw amount is greater than current_balance!! "<< endl;
    }
    else{
        current_balance = current_balance- withdraw_amount;
    }
    }

};
int main(){
    int n;
    cout<< "How many Accounts do you need?";
    cin>>n;

//Person p[n];
Person *p=new Person[n];

cout<< "Enter Person Details:"<< endl;
for(int i=0; i<n; i++){
    cout<<"User Name: ";
    cin>> p[i].name;
    cout<<"Account Number: ";
    cin>> p[i].account_num;
    cout<<"Account Opening Amount: ";
    cin>> p[i].current_balance;
}


int k; cout<< "In which account you want to diposit money?"<< endl;
cin>> k;
k--;
p[k].diposit();
cout<<"After Dipositing, your Current Balance: "<<p[k].current_balance<< endl;

int m; cout<< "In which account you want to withdraw money?"<< endl;
cin>> m;
m--;
p[m].withdraw();
cout<<"After Withdrawing, your Current Balance: "<<p[m].current_balance<< endl;


return 0;
}
