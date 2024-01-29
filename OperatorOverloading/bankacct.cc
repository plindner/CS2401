// bool operator == (const Bankacct& b1, const Bankacct& b2){
//     return b1.ownerid == b2.ownerid && b1.balance == b2.balance && b1.interest_rate == b2.interest_rate;
// }

bool Bankacct::operator == (const Bankacct& b2) const{
    return ownerid == b2.ownerid && balance == b2.balance && interest_rate == b2.interest_rate;
}

Bankacct Bankacct::operator * (double amt){
    Bankacct tmp;
    tmp.balance = balance * amt;
    tmp.ownerid = ownerid;
    tmp.interest_rate = interest_rate;

    return tmp;
}

void Bankacct::input(std::istream& ins){
    if(&ins == &cin){
        cout << "Enter the ownerid: ";
        getline(ins, ownerid);
        cout << "Enter the balance: ";
        ins >> balance;
        cout << "Enter the interest rate: ";
        ins >> interest_rate
    }
    else{
        getline(ins, ownerid);
        ins >> balance;
        ins >> interest_rate
    }
}

void Bankacct::output(std::ostream& outs){
    if(&outs == &cout){
        outs << "     Owner id: " << ownerid << endl;
        outs << "      Balance: " << balance << endl;
        outs << "Interest Rate: " << interest_rate << endl;
    }
    else{
        outs << ownerid << endl;
        outs << balance << endl;
        outs << interest_rate << endl;
    }
}

std::istream& operator >> (std::istream& ins, Bankacct& b2){
    b2.input(ins);
    return ins;
}