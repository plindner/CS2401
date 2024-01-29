#include <iostream>
class Bankacct{
    public:
        // constructor
        // getters
        // setters

        // operators
        //friend bool operator == (const Bankacct& b1, const Bankacct& b2);
        bool operator == (const Bankacct& b2) const;

        Bankacct operator * (double amt);

        void input(std::istream& ins);

        void output(std::ostream& outs);
    private:
        std::string ownerid;
        double balance;
        double interest_rate;

};

std::istream& operator >> (std::istream& ins, Bankacct& b2);