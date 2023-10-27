#include "clock_alarm.h"
using namespace std;

bool Alarm::is_ringing(){
    return alarm_h == hour && alarm_m == minute;
}

void Alarm::output(){
    Clock::output();
    cout << alarm_h << ":" << setw(2) << setfill('0') << alarm_m << endl;
}