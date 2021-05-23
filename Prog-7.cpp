#include <iostream>
using namespace std;
 
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime(void);
    void putTime(void);
    //DECLARATION OF FRIEND FUNCTION TO ADD TWO TIMES//
    void friend_fxn(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout << "ENTER TIME :" << endl;
    cout << "HOURS - ";    cin>>hours;
    cout << "MINUTES - ";  cin>>minutes;
    cout << "SECONDS - ";  cin>>seconds;
}
 
void Time::putTime(void)
{
    cout << endl;
    cout << "TIME AFTER ADDITION IS : ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Time::friend_fxn(Time T1,Time T2)
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    //add two times
    T3.friend_fxn(T1,T2);
    T3.putTime();
     
    return 0;
}
