#include<iostream>
#include<fstream>
#include<graphics.h>
#include "Personalinfo.h"
#include "batting.h"
#include "bowling.h"
#include<stdio.h>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,sel;
    int b[30];
    int c[30];
    int d[30];
    int e[30];
    int g[30];
    int h[30];

    Label:
        cout<<"CRICKET PLAYER ANALYSIS"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"1.Insert a New Player"<<endl;
        cout<<"2.Display Full Details"<<endl;
        cout<<"3.Display Batting Statistics"<<endl;
        cout<<"4.Display Bowling Statistics"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"\nEnter Your Choice";
        cin>>sel;
        switch(sel)
        {
        case 1:
                        {

                            cout<<"Enter No. of Players:(--NOTE:Insert only One Player to See the Statistics (3D-GRAPH)--:";
                            cin>>n;
                            fstream f;
                            f.open("cricket.txt",ios::out);
                            information *per[50];
                            batting *btt[50];
                            batting *bto[50];
                            batting *bt20[50];
                            bowling *bot[50];
                            bowling *boo[50];
                            bowling *bot20[50];

                            for(i=0;i<n;i++)
                            {
                                per[i]=new personal;
                                btt[i]=new bt_test;
                                bto[i]=new bt_odi;
                                bt20[i]= new bt_t20;

                                bot[i]=new bo_test;
                                boo[i]=new bo_odi;
                                bot20[i]= new bo_t20;

                                cout<<"\nPersonal Info";
                                per[i]->getdata();

                                btt[i]->getdata();

                                bto[i]->getdata();

                                bt20[i]->getdata();

                                bot[i]->getdata();

                                boo[i]->getdata();

                                bot20[i]->getdata();

                                f.write((char*)&per[i],sizeof (per[i]));
                                f.write((char*)&btt[i],sizeof (btt[i]));
                                f.write((char*)&bto[i],sizeof (bto[i]));
                                f.write((char*)&bt20[i],sizeof (bt20[i]));
                                f.write((char*)&bot[i],sizeof (bot[i]));
                                f.write((char*)&boo[i],sizeof (boo[i]));
                                f.write((char*)&bot20[i],sizeof (bot20[i]));

                            }
                            goto Label;

                        }
                    case 2:
                      {
                            fstream f;
                            f.open("cricket.txt",ios::in);
                            information *per[50];
                            batting *btt[50];
                            batting *bto[50];
                            batting *bt20[50];
                            bowling *bot[50];
                            bowling *boo[50];
                            bowling *bot20[50];
                            for(i=0;i<n;i++)
                            {
                                per[i]=new personal;
                                btt[i]=new bt_test;
                                bto[i]=new bt_odi;
                                bt20[i]= new bt_t20;

                                bot[i]=new bo_test;
                                boo[i]=new bo_odi;
                                bot20[i]= new bo_t20;


                                f.read((char*)&per[i],sizeof(per[i]));
                                f.read((char*)&btt[i],sizeof (btt[i]));
                                f.read((char*)&bto[i],sizeof (bto[i]));
                                f.read((char*)&bt20[i],sizeof (bt20[i]));
                                f.read((char*)&bot[i],sizeof (bot[i]));
                                f.read((char*)&boo[i],sizeof (boo[i]));
                                f.read((char*)&bot20[i],sizeof (bot20[i]));
                                e[i]=bot[i]->getavg();
                                g[i]=boo[i]->getavg();
                                h[i]=bot20[i]->getavg();
                                 b[i]=btt[i]->getavg();
                                c[i]=bto[i]->getavg();
                                d[i]=bt20[i]->getavg();

                                per[i]->disp();
                                btt[i]->disp();
                                bto[i]->disp();
                                bt20[i]->disp();
                                bot[i]->disp();
                                boo[i]->disp();
                                bot20[i]->disp();

                            }
                            goto Label;
                      }

                    case 3:
                        {
                            batting *btt[50];
                            batting *bto[50];
                            batting *bt20[50];

                            for(i=0;i<n;i++)
                            {
                                btt[i]=new bt_test;
                                bto[i]=new bt_odi;
                                bt20[i]= new bt_t20;

                            }

                        int gd = DETECT, gm;
                        initgraph(&gd, &gm, "C:\\TC\\BGI");

                        settextstyle(BOLD_FONT,HORIZ_DIR,2);
                        outtextxy(275,0,"BATTING STATISTICS");

                           setlinestyle(SOLID_LINE,0,2);
                           /* Print X and Y Axis */
                           line(90,410,90,10);
                           line(90,410,590,410);
                           line(85,20,90,10);
                           line(95,20,90,10);
                           line(585,405,590,410);
                           line(585,415,590,410);
                           outtextxy(65,20,"Y");
                           outtextxy(570,420,"X");
                           outtextxy(70,415,"O");
                           outtextxy(60,380," ");
                           outtextxy(60,340," ");
                           outtextxy(40,300,"% ");
                           outtextxy(40,260,"G ");
                           outtextxy(40,220,"V ");
                           outtextxy(40,180,"A ");
                           outtextxy(40,140," ");
                           outtextxy(60,100," ");
                           outtextxy(60,60," ");
                           outtextxy(50,20," 100");

                           /* Print 3D bars */
                           setfillstyle(XHATCH_FILL, GREEN);
                           for(i=0;i<n;i++)
                            {
                               //cout<<"values="<<b[i];
                               bar3d(130,410-b[i],200,410, 15, 1);
                               bar3d(200,410-c[i],290,410, 15, 1);
                               bar3d(270,410-d[i],380,410, 15, 1);
                            }
                                outtextxy(140,420,"Test");
                                outtextxy(210,420,"ODI");
                                outtextxy(310,420,"T20");

                               _getch();
                               closegraph();
                               goto Label;
                            }

                    case 4:
                            {

                               int gg = DETECT, gmm;
                               initgraph(&gg, &gmm, "C:\\TC\\BGI");

                               settextstyle(BOLD_FONT,HORIZ_DIR,2);
                               outtextxy(275,0,"BOWLING STATISTCS");

                               setlinestyle(SOLID_LINE,0,2);
                               // Print X and Y Axis
                               line(90,410,90,10);
                               line(90,410,590,410);
                               line(85,20,90,10);
                               line(95,20,90,10);
                               line(585,405,590,410);
                               line(585,415,590,410);
                               outtextxy(65,20,"Y");
                               outtextxy(570,420,"X");
                               outtextxy(70,415,"O");
                               outtextxy(60,380," ");
                               outtextxy(60,340," ");
                               outtextxy(40,300,"% ");
                               outtextxy(40,260,"G ");
                               outtextxy(40,220,"V ");
                               outtextxy(40,180,"A ");
                               outtextxy(40,140," ");
                               outtextxy(60,100," ");
                               outtextxy(60,60," ");
                               outtextxy(50,20," 100");
                               setfillstyle(XHATCH_FILL, GREEN);

                               for(int i=0;i<n;i++)
                                {
                                     //cout<<"values="<<e[i];
                                   bar3d(130,410-e[i],200,410, 15, 1);
                                   bar3d(200,410-g[i],290,410, 15, 1);
                                   bar3d(270,410-h[i],380,410, 15, 1);
                                }
                                outtextxy(140,420,"Test");
                                outtextxy(215,420,"ODI");
                                outtextxy(310,420,"T20");
                               _getch();
                               closegraph();
                               goto Label;
                               return 0;
                    }
                }

}



