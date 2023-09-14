/* C++ Basics Review */
#include <string>
#ifndef BANK_H
#define BANK_H

class Bankacct{
    // variables here are private

    public:
        //Bankacct();
        //Bankacct(std::string n, double b, double ir);

        Bankacct(std:: string n = "", double b = 0.0, double ir = 0.0);
        
        // Getters (accessors)
        double get_balance()const {return balance;}
        std::string get_owner_id()const {return owner_id;}

        // Setters (mutators)
        void set_balance(double b = 0.0) {balance = b;}

        // Input and Output
        void input(std::istream& ins);
        void output(std::ostream& outs);

        // friend operators
        //friend Bankacct operator + (const Bankacct& b1, const Bankacct& b2);
        friend Bankacct operator * (double amt, const Bankacct& b1);

        // member operators
        Bankacct operator + (const Bankacct& b2)const;
        Bankacct operator * (double amt)const;

    private:
        double balance;
        double interest_rate;
        std::string owner_id;
};

std::istream& operator >> (std::istream& ins, Bankacct& b1);
std::ostream& operator << (std::ostream& outs, const Bankacct &b1);

#endif