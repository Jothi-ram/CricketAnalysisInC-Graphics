#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class batting
{
public:
    virtual void getdata()=0;
    virtual void disp()=0;
    virtual  int getavg()=0;

};
class bt_test:public batting
{
private:
    int *matchPlayed,*NotOut;
    int *Runs,*HS;
    float *avg;
    float *SR;
    int *Hu,*Tw,*Fi;
public:
    bt_test():matchPlayed(new int (0)),NotOut(new int (0)),Runs(new int (0)),HS(new int (0)),avg(new float (0)),SR(new float(0)),Hu(new int(0)),Tw(new int(0)),Fi(new int (0)){}
    bt_test(int f,int g,int h,int i,float j,float k,int l,int m,int n):matchPlayed(new int (f)),NotOut(new int (g)),Runs(new int (h)),HS(new int (i)),avg(new float (j)),SR(new float(k)),Hu(new int(l)),Tw(new int(m)),Fi(new int (n)){}

    void getdata()
    {
        cout<<"\nTEST";
        cout<<"\nInnings: ";
        cin>>*matchPlayed;
        cout<<"Dismissed: ";
        cin>>*NotOut;
        cout<<"Runs: ";
        cin>>*Runs;
        cout<<"Highest Score: ";
        cin>>*HS;
        cout<<"Strike Rate: ";
        cin>>*SR;
        cout<<"No. of Hundreds: ";
        cin>>*Hu;
        cout<<"No. of Two-Hundreds: ";
        cin>>*Tw;
        cout<<"No. of Fifties: ";
        cin>>*Fi;
        if(*Runs==0 && *NotOut==0)
        {
            *avg=0;
        }
        else{*avg=*Runs/(*NotOut);}


    }

    void disp()
    {
        cout<<"\n"<<setw(130)<<setfill('-')<<"\n\t\t\t\t\tBatting Carrer Summary\n"<<setw(100)<<setfill('-')<<"\n";
        cout<<setfill(' ');

        cout<<"     "<<setw(10)<<"   Matches"<<setw(10)<<"Dismissed"<<setw(10)<<"Runs"<<setw(10)<<"HS"<<setw(10)<<"AVG"<<setw(10);
        cout<<setw(10)<<"SR"<<setw(10)<<"100s"<<setw(10)<<"200s"<<setw(10)<<"50s"<<"\n";

        cout<<"TEST:"<<setw(10)<<*matchPlayed<<setw(10)<<*NotOut<<setw(10)<<*Runs<<setw(10)<<*HS<<setw(10)<<*avg<<setw(10);
        cout<<setw(10)<<*SR<<setw(10)<<*Hu<<setw(10)<<*Tw<<setw(10)<<*Fi<<"\n"<<endl;
    }
    int getavg()
        {
            return *avg;
        }


};

class bt_odi:public batting
{
private:
    int *matchPlayed,*NotOut;
    int *Runs,*HS;
    float *avg;
    float *SR;
    int *Hu,*Tw,*Fi;
public:
    bt_odi():matchPlayed(new int (0)),NotOut(new int (0)),Runs(new int (0)),HS(new int (0)),avg(new float (0)),SR(new float(0)),Hu(new int(0)),Tw(new int(0)),Fi(new int (0)){}
    bt_odi(int f,int g,int h,int i,float j,float k,int l,int m,int n):matchPlayed(new int (f)),NotOut(new int (g)),Runs(new int (h)),HS(new int (i)),avg(new float (j)),SR(new float(k)),Hu(new int(l)),Tw(new int(m)),Fi(new int (n)){}

    void getdata()
    {   cout<<"\nODI";
        cout<<"\nInnings: ";
        cin>>*matchPlayed;
        cout<<"Dismissed: ";
        cin>>*NotOut;
        cout<<"Runs: ";
        cin>>*Runs;
        cout<<"Highest Score: ";
        cin>>*HS;
        cout<<"Strike Rate: ";
        cin>>*SR;
        cout<<"No. of Hundreds: ";
        cin>>*Hu;
        cout<<"No. of Two-Hundreds: ";
        cin>>*Tw;
        cout<<"No. of Fifties: ";
        cin>>*Fi;
        if(*Runs==0 && *NotOut==0)
        {
            *avg=0;
        }
        else{*avg=*Runs/(*NotOut);}
    }

    void disp()
    {
        cout<<"ODI: "<<setw(10)<<*matchPlayed<<setw(10)<<*NotOut<<setw(10)<<*Runs<<setw(10)<<*HS<<setw(10)<<*avg<<setw(10);
        cout<<setw(10)<<*SR<<setw(10)<<*Hu<<setw(10)<<*Tw<<setw(10)<<*Fi<<"\n"<<endl;

    }

    int getavg()
        {
            return *avg;
        }

};

class bt_t20:public batting
{
private:
    int *matchPlayed,*NotOut;
    int *Runs,*HS;
    float *avg;
    float *SR;
    int *Hu,*Tw,*Fi;
public:
    bt_t20():matchPlayed(new int (0)),NotOut(new int (0)),Runs(new int (0)),HS(new int (0)),avg(new float (0)),SR(new float(0)),Hu(new int(0)),Tw(new int(0)),Fi(new int (0)){}
    bt_t20(int f,int g,int h,int i,float j,float k,int l,int m,int n):matchPlayed(new int (f)),NotOut(new int (g)),Runs(new int (h)),HS(new int (i)),avg(new float (j)),SR(new float(k)),Hu(new int(l)),Tw(new int(m)),Fi(new int (n)){}

    void getdata()
    {
        cout<<"\nT20";
        cout<<"\nInnings: ";
        cin>>*matchPlayed;
        cout<<"Dismissed: ";
        cin>>*NotOut;
        cout<<"Runs: ";
        cin>>*Runs;
        cout<<"Highest Score: ";
        cin>>*HS;

        cout<<"Strike Rate: ";
        cin>>*SR;
        cout<<"No. of Hundreds: ";
        cin>>*Hu;
        cout<<"No. of Two-Hundreds: ";
        cin>>*Tw;
        cout<<"No. of Fifties: ";
        cin>>*Fi;
        if(*Runs==0 && *NotOut==0)
        {
            *avg=0;
        }
        else{*avg=*Runs/(*NotOut);}
    }

    void disp()
    {


        cout<<"T20 :"<<setw(10)<<*matchPlayed<<setw(10)<<*NotOut<<setw(10)<<*Runs<<setw(10)<<*HS<<setw(10)<<*avg<<setw(10);
        cout<<setw(10)<<*SR<<setw(10)<<*Hu<<setw(10)<<*Tw<<setw(10)<<*Fi<<"\n"<<endl;

    }

        int getavg()
        {
            return *avg;
        }

};
