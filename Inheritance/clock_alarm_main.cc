#include "clock_alarm.h"

using namespace std;
int main(){
    Clock c;
    Alarm a;

    c.set_time(7, 1);
    c.advance();
    c.output();

    a.set_alarm(12, 0);
    a.is_ringing();
    a.set_time(12, 29);
    a.advance();
    a.output();
}