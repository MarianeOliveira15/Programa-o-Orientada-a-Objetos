#include <iostream>
#include <format>
using std::cout, std::endl, std::format;


#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

std::string Time::toUniversal() const
{
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

void Time::tick() {
    second++;
    if (second == 60) {
        second = 0;
        minute++;
        if (minute == 60) {
            minute = 0;
            hour++;
            if (hour == 24) {
                hour = 0;
            }
        }
    }
}