#include "clock.h"

bool Alarm::is_ringing() const{
    return hour == alarm_h && minute == alarm_m;
}

void Alarm::output() const{
    Clock::output();
    std::cout << alarm_h << ":" << setw(2) << setfill('0') << alarm_m << std::endl;
}