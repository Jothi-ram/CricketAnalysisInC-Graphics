#include<iostream>
#include<iomanip>
using namespace std;

class bowling
{
public:
    virtual void getdata()=0;
    virtual void disp()=0;
    virtual int getavg()=0;
};
class bo_test:public bowling
{
private:
    int *matchPlayed,*balls;
    int *Runs_C,*Wic;
    float *avg;
    int *Fi,*Ten;
public:
    bo_test():matchPlayed(new int (000)),balls(new int (000)),Runs_C(new int (000)),Wic(new int (000)),avg(new float (000)),Fi(new int(00)),Ten(new int (000)){}
    bo_test(int f,int g,int h,int i,float j,int k,int l):matchPlayed(new int (f)),balls(new int (g)),Runs_C(new int (h)),Wic(new int (i)),avg(new float (j)),Fi(new int(k)),Ten(new int (l)){}

    void getdata()
    {
        cout<<"\nBOWLING: ";
        cout<<"\nTEST";
        cout<<"\nInnings: ";
        cin>>*matchPlayed;
        cout<<"Balls ";
        cin>>*balls;
        cout<<"Runs Conceeded : ";
        cin>>*Runs_C;
        cout<<"Wickets: ";
        cin>>*Wic;
        cout<<"5 Wickets: ";
        cin>>*Fi;
        cout<<"10 Wickets: ";
        cin>>*Ten;
        if(*Runs_C==0 || *Wic==0)
        {
            *avg=0;
        }
        else{*avg=*Runs_C/(*Wic);}
    }

    void disp()
    {

        cout<<"\n"<<setw(130)<<setfill('-')<<"\n\t\t\t\t\tBOWLING CARRER SUMMARY\n"<<setw(100)<<setfill('-')<<"\n";
        cout<<setfill(' ');
        cout<<"      "<<setw(15)<<"   Matches"<<setw(15)<<"BALLS"<<setw(15)<<"RUNS_CON"<<setw(15)<<"AVG"<<setw(15)<<"5W"<<setw(15);
        cout<<setw(15)<<"10W"<<"\n";

        cout<<"TEST: "<<setw(15)<<*matchPlayed<<setw(15)<<*balls<<setw(15)<<*Runs_C<<setw(15)<<*avg<<setw(15)<<*Fi<<setw(15);
        cout<<setw(15)<<*Ten<<"\n"<<endl;
}
int getavg()
        {

            return *avg;
        }


};

class bo_odi:public bowling
{
private:
    int *matchPlayed,*balls;
    int *Runs_C,*Wic;
    float *avg;
    int *Fi,*Ten;
public:
    bo_odi():matchPlayed(new int (000)),balls(new int (000)),Runs_C(new int (00000)),Wic(new int (000)),avg(new float (000)),Fi(new int(00)),Ten(new int (000)){}
    bo_odi(int f,int g,int h,int i,float j,int k,int l):matchPlayed(new int (f)),balls(new int (g)),Runs_C(new int (h)),Wic(new int (i)),avg(new float (j)),Fi(new int(k)),Ten(new int (l)){}

    void getdata()
    {
        cout<<"\nODI";
        cout<<"\nInnings: ";
        cin>>*matchPlayed;
        cout<<"Balls ";
        cin>>*balls;
        cout<<"Runs Conceeded : ";
        cin>>*Runs_C;
        cout<<"Wickets: ";
        cin>>*Wic;
        cout<<"5 Wickets: ";
        cin>>*Fi;
        cout<<"10 Wickets: ";
        cin>>*Ten;
        if(*Runs_C==0 || *Wic==0)
        {
            *avg=0;
        }
        else{*avg=*Runs_C/(*Wic);}
    }

    void disp()
    {
        cout<<"ODI  :"<<setw(15)<<*matchPlayed<<setw(15)<<*balls<<setw(15)<<*Runs_C<<setw(15)<<*avg<<setw(15)<<*Fi<<setw(15);
        cout<<setw(15)<<*Ten<<"\n"<<endl;
    }
    int getavg()
        {

            return *avg;
        }


};
class bo_t20:public bowling
{
private:
    int *matchPlayed,*balls;
    int *Runs_C,*Wic;
    float *avg;
    int *Fi,*Ten;
public:
    bo_t20():matchPlayed(new int (000)),balls(new int (000)),Runs_C(new int (00000)),Wic(new int (000)),avg(new float (000)),Fi(new int(00)),Ten(new int (000)){}
    bo_t20(int f,int g,int h,int i,float j,int k,int l):matchPlayed(new int (f)),balls(new int (g)),Runs_C(new int (h)),Wic(new int (i)),avg(new float (j)),Fi(new int(k)),Ten(new int (l)){}

    void getdata()
    {
        cout<<"\nT20";
        cout<<"\nInnings: ";
        cin>>*matchPlayed;
        cout<<"Balls ";
        cin>>*balls;
        cout<<"Runs Conceeded : ";
        cin>>*Runs_C;
        cout<<"Wickets: ";
        cin>>*Wic;
        cout<<"5 Wickets: ";
        cin>>*Fi;
        cout<<"10 Wickets: ";
        cin>>*Ten;
         if(*Runs_C==0 || *Wic==0)
        {
            *avg=0;
        }
        else{*avg=*Runs_C/(*Wic);}
    }

    void disp()
    {
        cout<<"T20  :"<<setw(15)<<*matchPlayed<<setw(15)<<*balls<<setw(15)<<*Runs_C<<setw(15)<<*avg<<setw(15)<<*Fi<<setw(15);
        cout<<setw(15)<<*Ten<<"\n"<<endl;

    }
    int getavg()
        {

            return *avg;
        }


};
