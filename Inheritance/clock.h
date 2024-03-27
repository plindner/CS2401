// Inheritance

class Clock{
    public:
        Clock();

        void set_time(int h, int m);
        void advance(int amt = 1);

        int get_hour() const;
        int get_minute() const;

        void output() const {std::cout << hour << ":" << setw(2) << setfill('0') << minute << std::endl;}

        bool is_equal(const Clock& other)const{
            return hour == other.hour && minute == other.minute;
        }

    protected:
        int hour;
        int minute;
};

class Alarm:public Clock{
    public:
        Alarm();

        void set_alarm(int h, int m);
        bool is_ringing() const;

        void output() const;

        bool is_equal(const Alarm& other)const{
            return Clock::is_equal(other) && alarm_h == other.alarm_h && alarm_m == other.alarm_m;
        }

    private:
        int alarm_h;
        int alarm_m;
};