// Q2:-Create class BankAccount with private attributes accountNumber and balance.
// Implement public methods deposit() , withdraw(), and getBalance() 
// to manage the account.

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    double balance;
    public:
    BankAccount(int i, int j){
        this->accountNumber=i;
        this->balance=j;
    }
    void deposit(double k){
        balance+=k;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance -=amount;
        }else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    double getbalance(){
        return balance;
    }
};
int main(){
    BankAccount A(8372,50000.343);
    cout<<A.getbalance()<<endl;
    A.deposit(700.83);
    cout<<A.getbalance()<<endl;
    A.withdraw(48000.837);
    cout<<A.getbalance()<<endl;
    A.withdraw(594939);
    cout<<A.getbalance()<<endl;
    return 0;
    
}