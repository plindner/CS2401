#include "bankacct.h"

using namespace std;

// Bankacct::Bankacct(){
//     balance = 0.0;
//     interest_rate = 0.0;
//     name = "";
// }

Bankacct::Bankacct(std::string n, double b, double ir){
    owner_id = n;
    balance = b;
    interest_rate = ir;
}

void Bankacct::input(std::istream& ins){
    if(&ins == &cin){
        // I'm expecting input from the command line
        cout << "Enter the account owner: ";
        ins >> owner_id;
        cout << "Enter the account balance: ";
        ins >> balance;
        cout << "Enter the interest rate: ";
        ins >> interest_rate;
    }
    else{
        ins >> owner_id;
        ins >> balance;
        ins >> interest_rate;
    }
    
}

std::istream& operator >> (std::istream& ins, Bankacct& b1){
    b1.input(ins);
    return ins;
}

Bankacct Bankacct::operator + (const Bankacct& b2)const{
    Bankacct b3;
    b3.owner_id = owner_id + " " + b2.owner_id;
    b3.balance = balance + b2.balance;
    b3.interest_rate = (interest_rate + b2.interest_rate)/2.0;
    return b3;
}

Bankacct Bankacct::operator * (double amt)const{
    Bankacct tmp;
    tmp.owner_id = owner_id;
    tmp.interest_rate = interest_rate;
    tmp.balance = balance * amt;
    return tmp;
}