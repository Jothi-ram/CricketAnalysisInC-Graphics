#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
class Date
{
private:
    int *day,*month,*year;
public:
    Date():day(new int(0)),month(new int(0)),year(new int(0)){}
    Date(int d,int m,int y):day(new int(d)),month(new int(m)),year(new int(y)){}
    friend istream &operator>>(istream &in,Date &obj);
    friend ostream &operator<<(ostream &out,const Date &obj);

};
istream &operator>>(istream &in,Date &obj)
{
   d1:cout<<"\nEnter day:";
   in>>*obj.day;
   if(*obj.day<0 || *obj.day>31){goto d1;}
   m1:cout<<"\nEnter month:";
   in>>*obj.month;
   if(*obj.month<0 || *obj.month>12){goto m1;}
   if(*obj.month==2 && *obj.day>28){goto d1;}
   cout<<"\nEnter year:";
   in>>*obj.year;

}
ostream &operator<<(ostream &out,const Date &obj)
{
   out<<*obj.day<<"/"<<*obj.month<<"/"<<*obj.year;
}
class information
{
public:
    virtual void getdata()=0;
    virtual void disp()=0;
    //virtual void getname()=0;
};

class personal:public information
{
private:
    string *playerName;
    string *teamName;
    Date *DOB;
    string *role;
    string *battingstyle;
    string *bowlingstyle;
public:
    personal():playerName(new string("")),teamName(new string(" ")),DOB(new Date()),role(new string(" ")),battingstyle(new string(" ")),bowlingstyle(new string(" ")){}
    personal(string a,string b,int x, int y,int z,string c, string d,string e):playerName(new string(a)),teamName(new string(b)),DOB(new Date(x,y,z)),role(new string(c)),battingstyle(new string(d)),bowlingstyle(new string(e)){}

    void getdata()
    {
        cout<<"\nEnter Player Name: ";
        cin>>*playerName;
        cout<<"\nEnter Team Name: ";
        cin>>*teamName;
        cin>>*DOB;
        cout<<"\nEnter Role Of the Player: ";
        cin>>*role;
        cout<<"\nEnter Batting Style: ";
        cin>>*battingstyle;
        cout<<"\nEnter Bowling Style: ";
        cin>>*bowlingstyle;
    }

    void disp()
    {
         cout<<"\n"<<setw(130)<<setfill('-')<<"\n\t\t\t\t\tCRICKET PLAYER ANALYSIS\n"<<setw(100)<<setfill('-')<<"\n";
        cout<<setfill(' ');
        time_t tt;
        struct tm * ti;
        time (&tt);
        ti = localtime(&tt);
        cout<<setw(100)<<setfill(' ')<<asctime(ti);
        cout<<setw(100)<<setfill(' ')<<"Done by"<<endl;
        cout<<setw(100)<<setfill(' ')<<"JOTHI RAM S"<<endl;
        cout<<"Player Name:    "<<*playerName<<endl;
        cout<<"Team Name:      "<<*teamName<<endl;
        cout<<"Date Of Birth:  "<<*DOB<<endl;
        cout<<"AGE:            "<<endl;
        cout<<"Role:           "<<*role<<endl;
        cout<<"Batting Style:  "<<*battingstyle<<endl;
        cout<<"Bowling Style:  "<<*bowlingstyle<<endl;
        //cout<<setw(100)<<setfill('*')<<"\n";
    }
};
