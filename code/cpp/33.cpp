#include <iostream>
// #include <ostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time(int h = 0, int m = 0): hours(h), minutes(m) {};
    ~Time() {};
    Time operator+(const Time& t){
        Time s;
        s.minutes = minutes + t.minutes;
        s.hours = hours + t.hours + s.minutes/60;
        s.minutes %= 60;
        return s;
    }
    Time operator*(int scale) const;
    friend Time operator*(int scale, const Time& t);
    // void operator<<(std::ostream& os) const;
    // friend void operator<<(std::ostream& os, const Time& t);
    friend std::ostream& operator<<(std::ostream& os, const Time& t){
        os << t.hours << " hours, " << t.minutes << " minutes\n";
        return os;
    }

    void info(){
        std::cout << "hours: " << hours << std::endl;
        std::cout << "minutes: " << minutes << std::endl;
    }

};

Time Time::operator*(int scale) const{
    Time t;
    int total_minutes = hours * scale * 60 + minutes * scale;
    t.hours = total_minutes / 60;
    t.minutes = total_minutes % 60;
    return t;
}

// void Time::operator<<(std::ostream& os) const{
//     os << hours << " hours, " << minutes << " minutes\n";
// }

Time operator*(int scale, const Time& t){
    // return t * scale;
    Time temp;
    int total_minutes = t.hours * scale * 60 + t.minutes * scale;
    temp.hours = total_minutes / 60;
    temp.minutes = total_minutes % 60;
    return temp;
}

// void operator<<(std::ostream& os, const Time& t){
//     os << t.hours << " hours, " << t.minutes << " minutes\n";
// }

int main(int argc, char const *argv[])
{
    Time t1(2, 40);
    Time t2(1, 30);
    // Time t3 = t2 + t1;
    // Time t3 = t2.operator+(t1);
    // t3.info();
    // Time t4 = t1 * 2;
    Time t4 = 2 * t1;
    // t4.info();
    // t4 << std::cout;
    std::cout << "t1: " << t1 << "t4: " << t4;

    return 0;
}