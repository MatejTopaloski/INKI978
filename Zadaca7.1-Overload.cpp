#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//Matej Topaloski INKI978
using namespace std;
class date
{
    private:
    int day, month, year;
    int hour, minute, second;
    public:
    date(){}
    friend void operator>>(istream &in, date &d); //Overloading >> operator // Friend funckija na klasa e definirana nadvor od klasata i ima pravo pristap do site clenovi na klasata ////
    friend void operator<<(ostream &out, date &d) //Overloading << operator // Preku overloading se menuva funkcijata na operatorite za tie da rabotat druga zadaca
// https://www.tutorialspoint.com/cplusplus/cpp_friend_functions.htm
// https://www.geeksforgeeks.org/types-of-operator-overloading-in-c/
    {
        out<<"\n Date : ";
        out<<d.day;
        out<<"/";
        out<<d.month;
        out<<"/";
        out<<d.year;
        out<<"\n Time : ";
        out<<d.hour;
        out<<":";
        out<<d.minute;
        out<<":";
        out<<d.second;
    }
~date(){}
};
void operator>>(istream &in, date &d)
// https://www.programiz.com/cpp-programming/operator-overloading
{
    cout<<"\n Enter Day : ";
    in>>d.day;
    cout<<"\n Enter Month : ";
    in>>d.month;
    cout<<"\n Enter Year : ";
    in>>d.year; // smeni in, shto se dobiva ? //// Se dobiva ist rezultat bidejki se koristi overload funkcijata kade se menuva operatorot "<"
    cout<<"\n Enter Hour : ";
    in>>d.hour;
    if(d.hour > 23 || d.hour < 1){
        if(d.hour < 1)
        {
            cout<<"Hour can't be < than 1"<<endl;
            exit(0);
        }
        if(d.hour > 24){
            cout<<"Hour can't be > than 24"<<endl;
            exit(0);
        }
        if(d.hour == 24){
            d.hour = 00;
        }
    }
    cout<<"\n Enter Minute : ";
    in>>d.minute;
    if(d.minute > 59 || d.minute < 1){
        cout<<"Minute can't be > than 59 or < than 1"<<endl;
        exit(0);
    }
    cout<<"\n Enter Second : ";
    in>>d.second;
    if(d.second > 59 || d.second < 1){
        cout<<"Second can't be > than 59 or < than 1"<<endl;
        exit(0);
    }
    cout<<"\n ------------------";
switch(d.month)
{

    case 1: //January
    case 3: //March
    case 5: //May
    case 7: //July
    case 8: //August
    case 10: //October
    case 12: //December
    if(d.day>31)
    {
        cout<<"\n Invalid Days ";
        exit(0);
    }
    break;
    case 4: //April
    case 6: //June
    case 9: //September
    case 11: //November
    if(d.day>30)
    {
        cout<<"\n Invalid Days ";
        exit(0);
    }
    break;
    case 2:
//Function for February Month. Checking whether the year is leap year or not.
    if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))
    {
        if(d.day>29)
        {
            cout<<"\n Invalid Days ";
            exit(0);
        }
    }
    else
    {
        if(d.day>28)
        {
            cout<<"\n Invalid Days ";
            exit(0);
        }
    }
    break;

    default: //// se proveruva mesecot
        if(d.month > 12 || d.month < 1)
        {
            if(d.month > 12)
                cout<<"Greska, ima samo 12 meseci vo godinata!"<<endl;

            if(d.month < 1)
                cout<<"Greska, mesecot nemozi da bide pomal od 1!"<<endl;

            exit(0);
        }
        break;
}

}
int main()
{
    date d;
    cout<<"\n Enter Date \n";
    cout<<"\n ------------------";
    cin>>d;
    cout<<d;
    return 0;

}
