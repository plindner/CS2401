//Inheritance 
#include <iostream>
#include <iomanip>

class Clock{
    public:
        Clock();

        void set_time(int h, int m);
        void advance(int amt = 1);

        int get_hour()const;
        int get_minute()const;

        void output(){std::cout << hour << ":" << std::setw(2) << std::setfill('0') << minute << std::endl;}

    protected:
        int hour;
        int minute;
};

class Alarm:public Clock{
    public:
        Alarm();

        void advance(int amt = 1);
        void output();

        void set_alarm(int h, int m);
        bool is_ringing();

    private:
        int alarm_h;
        int alarm_m;
};