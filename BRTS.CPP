// password is "pass".

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<bios.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<time.h>
#include<stdio.h>
#include<fstream.h>

class BUS                   //Begning of class BUS.
{       int dist;
	int Ch;

	int j;

	int n;
	float charge;
	int amount;
	int balance;
	int fromstop;
	int  tostop;
	void recharge();        //function to recharge card.
	void sname();           //function to display names of stop.
	void card();            //function to create card.
	void distance(); 	//function to calculate distance.
	void card1();	 	//function to run card again.
public:
      char ch,CH,jay;
	BUS()
		{ ch='w';
		balance=125;
		  j=1;
		  }
	void getinfo();          //function to get information.
	void dispinfo();         //function to display information.
	float chargef(); 	//function to charge card.
}  ;
float BUS::chargef()                    //Function to calculate charge.
{	switch(dist)
	{case 1: charge=5;break;
	 case 2: charge=7;break;
	 case 3: charge=9;break;
	 case 4: charge=11;break;
	 case 5: charge=13;break;
	 case 6: charge=15;break;
	 case 7: charge=17;break;
	 case 8: charge=19;break;
	 case 9: charge=21;break;
	 case 10: charge=23;break;
	 case 11: charge=25;break;
	 case 12: charge=27;break;
	 case 13: charge=29;break;
	 case 14: charge=31;break;
	 case 15: charge=33;break;
	 case 16: charge=35;break;
	 case 17: charge=37;break;
	 case 18: charge=39;break;
	 case 19:charge=41;break;
	 case 20: charge=43;break;
	 case 21: charge=45;break;
	 case 22: charge=47;break;
	 case 23: charge=49;break;
	 case 24: charge=51;break;
	 case 25: charge=53;break;
	 case 26: charge=55;break;
	 case 27: charge=57;break;
	 case 28: charge=59;break;
	 case 29: charge=61;break;
	 case 30: charge=63;break;
	 case 31: charge=65;break;
	 case 32: charge=67;break;
	 case 33: charge=69;break;
	 case 34: charge=71;break;
	 case 35: charge=73;break;
	 case 36: charge=75;break;
	 case 37: charge=77;break;
	  defalt: charge=100;
	}   charge=charge*n;
     return charge;
}
 void BUS::distance()                 //Function to calculate distance.
{
	switch(fromstop)
	{  	case 1: switch(tostop)
		 {case 2: dist=2;break;
		  case 3: dist=3;break;
		  case 4: dist=7;break;
		  case 5: dist=10;break;
		  case 6: dist=12;break;
		  case 7: dist=13;break;
		  case 8: dist=15;break;
		  case 9: dist= 18;break;
		  case 10: dist=20;break;
		  default:cout<<"invalid stop no.";}
		  chargef(); break;
	 case 2:switch(tostop)
		{case 3: dist=1;break;
		 case 4: dist=5;break;
		 case 5: dist=8;break;
		 case 1: dist=36;break;
		 case 6:  dist=10;break;
		 case 7: dist=11;break;
		 case 8:   dist=13;break;
		 case 9:   dist=16;break;
		 case 10:  dist=20;break;
		 default:cout<<"invalid stop no.";  }
		  chargef(); break;
	 case 3:  switch(tostop)
		{case 4: dist=4;break;
		 case 5: dist=7;break;
		 case 2: dist=35;break;
		 case 1: dist=37;break;
		 case 6:  dist=9;break;
		 case 7:  dist=10;break;
		 case 8:  dist=12;break;
		 case 9:  dist=15;break;
		 case 10: dist=17;break;
		 default:cout<< "invalid stop no."; }
		 chargef();break;
	 case 4:  switch(tostop)
	       { case 5: dist=3;break;
		 case 3: dist=30;break;
		 case 2: dist=31;break;
		 case 1: dist=33;break;
		 case 6:  dist=8;break;
		 case 7: dist=9;break;
		 case 8: dist=11;break;
		 case 9: dist=14;break;
		 case 10: dist=16;break;
		 default:cout<<"invalid stop number";  }
		 chargef(); break;
	 case 5:switch(tostop)
		 {case 4: dist=23;break;
		  case 3: dist=27;break;
		  case 2: dist=28;break;
		  case 1: dist=30;break;
		  case 6: dist=7;break;
		  case 7: dist=8;break;
		  case 8: dist=10;break;
		  case 9: dist=13;break;
		  case 10: dist=15;break;
		  default:cout<<"invalid stop";}
		  chargef() ; break;
	 case 6: switch(tostop)
	       { case 5: dist=18;break;
		 case 3: dist=25;break;
		 case 2: dist=26;break;
		 case 1: dist=28;break;
		 case 7: dist=1;break;
		 case 8: dist=3;break;
		 case 9: dist=6;break;
		 case 10: dist=8;break;
		 case 4: dist=21;break;
		 default:cout<<"invalid stop number";  }
		 chargef(); break;
	case 7:switch(tostop)
	       { case 5: dist=17;break;
		 case 3: dist=7;break;
		 case 2: dist=8;break;
		 case 1: dist=27;break;
		 case 6:  dist=15;break;
		 case 8: dist=2;break;
		 case 9: dist=5;break;
		 case 10: dist=7;break;
		 case 4: dist=20;break;
		 default:cout<<"invalid stop number";  }
		 chargef(); break;
		case 8:switch(tostop)
	       { case 5: dist=15;break;
		 case 3: dist=22;break;
		 case 2: dist=23;break;
		 case 1: dist=25;break;
		 case 6:  dist=13;break;
		 case 7: dist=12;break;
		 case 4: dist=18;break;
		 case 9: dist=3;break;
		 case 10: dist=5;break;
		 default:cout<<"invalid stop number";  }
		 chargef();  break;
	 case 9:switch(tostop)
	       { case 5: dist=12;break;
		 case 3: dist=19;break;
		 case 2: dist=20;break;
		 case 1: dist=22;break;
		 case 6:  dist=10;break;
		 case 7: dist=9;break;
		 case 8: dist=7;break;
		 case 4: dist=15;break;
		 case 10: dist=2;break;
		 default:cout<<"invalid stop number";  }
		 chargef();break;
	case 10: switch(tostop)
	       { case 5: dist=10;break;
		 case 3: dist=17;break;
		 case 2: dist=18;break;
		 case 1: dist=20;break;
		 case 6:  dist=8;break;
		 case 7: dist=7;break;
		 case 8: dist=5;break;
		 case 9: dist=2;break;
		 case 4: dist=13;break;
		 default:cout<<"invalid stop number";  }
		 chargef();break;
		 default: cout<<"invalid stop number";
		  break;}}


void BUS ::getinfo()              //Function to insert information.
{       textbackground(LIGHTGREEN);
	cout<<setw(36)<<"MENU \n";
	cout<<setw(30);
	for(int i=0;i<=5;i++)cout<<"*";
	cout<<"\n 1.\t KOTRA \n 2. \t NEW MARKET \n 3. \t MATA MANDIR \n 4. \t  7 NO. \n 5.\t BORD OFFICE\n 6. \t CHETAK BRIDGE\n 7. \t CRPF COLONY  \n 8. \t BHARAT NAGAR\n 9.\t SAHARA COLONY \n 10.\t MVM SCHOOL \n"  ;
	cout<<"\n"<<"form stop number:=";
	cin>>fromstop;
	cout<<"To stop
	no:=";
	cin>>tostop;
	cout<<" enter the number of passangers:= ";
	cin>>n;
	distance();
	cout<<" payment by card(1) or cash(2):=";
	cin>>Ch;
	if(Ch==1)
	if(ch=='y')
	{ card1();
	  getch();}
	else
	  card();

}


  void BUS ::dispinfo()        //Function to display information.
{clrscr();

  int i;
  do
  {getinfo();
  clrscr();
 cout<<setw(42)<<"\n\n\n\n\n\n\n\n\t\t\t BHOPAL CITY LINK LIMITED \n";
 cout<<setw(26);
 for(i=1;i<=6;i++)cout<<"*";
 cout<<" ";
  for(i=1;i<=4;i++)cout<<"*";
 cout<<" ";
  for(i=1;i<=4;i++)cout<<"*";
 cout<<" ";
  for(i=0;i<=7;i++)cout<<"*";
 cout<<" ";
	cout<<setw(10)<<"\n\n\n\t\t\t TICKET NO." <<j++<<"\n\n\n";
	cout<<setw(50);sname();
	cout<<"\n\n"<<setw(40)<<"  DISTANCE = "<<dist<<"km \n";
	cout<<setw(42)<<"  CHARGE   = Rs"<<charge<<"\n";
	if(Ch==1)
	cout<<setw(25)<<"\t\t\t\t BALANCE = Rs."<<balance<<"\n";
	cout<<"\n"<<setw(51)<<"**************************\n";
	getch();
	clrscr();
	cout<<"Want to run again: ";
	cin>>ch;
	jay=ch;
	clrscr();
       }while((ch=='y')||(ch=='Y'));
}


void BUS::sname()                 //Function to name the stops.
{	if(fromstop==1&&tostop==2)
	cout<<"KOTRA TO NEW MARKET";
	else if(fromstop==1&&tostop==3)
	cout<<"KOTRA TO MATA MANDIR";
	else if(fromstop==1&&tostop==4)
	cout<<"KOTRA TO 7 NO.";
	else if(fromstop==1&&tostop==5)
	cout<<"KOTRA TO BORD OFFICE";
	else if(fromstop==1&&tostop==6)
	cout<<"KOTRA TO CHETAK BRIDHE";
	else if(fromstop==1&&tostop==7)
	cout<<"KOTRA TO CRPF COLONY";
	else if(fromstop==1&&tostop==8)
	cout<<"KOTRA TO BHARAT NAGAR";
	else if(fromstop==1&&tostop==9)
	cout<<"KOTRA TO SAHARA";
	else if(fromstop==1&&tostop==10)
	cout<<"KOTRA TO MVM SCHOOL";
	else if(fromstop==2&&tostop==1)
	cout<<" NEW MARKET TO KOTRA ";
	else if(fromstop==2&&tostop==3)
	cout<<" NEW MARKET TO MATA MANDIR ";
	else if(fromstop==2&&tostop==4)
	cout<<" NEW MARKET TO 7 NO.";
	else if(fromstop==2&&tostop==5)
	cout<<" NEW MARKET TO BORD OFFICE";
	else if(fromstop==2&&tostop==6)
	cout<<" NEW MARKET TO CHETAK BRIDGE";
	else if(fromstop==2&&tostop==7)
	cout<<" NEW MARKET TO CRPF COLONY";
	else if(fromstop==2&&tostop==8)
	cout<<" NEW MARKET TO BHARAT NAGAR";
	else if(fromstop==2&&tostop==9)
	cout<<" NEW MARKET TO SAHARA";
	else if(fromstop==2&&tostop==10)
	cout<<" NEW MARKET TO MVM SCHOOL";
	else   if(fromstop==3&&tostop==1)
	cout<<"MATA MANDIR TO KOTRA";
	else if(fromstop==3&&tostop==2)
	cout<<"MATA MANDIR TO NEW MARKET";
	else if(fromstop==3&&tostop==4)
	cout<<"MATA MANDIR TO 7 NO.";
	else if(fromstop==3&&tostop==5)
	cout<<"MATA MANDIR TO BORD OFFICE";
	else if(fromstop==3&&tostop==6)
	cout<<"MATA MANDIR TO CHETAK BRIDGE";
	else if(fromstop==3&&tostop==7)
	cout<<"MATA MANDIR TO CRPF COLONY";
	else if(fromstop==3&&tostop==8)
	cout<<"MATA MANDIR TO BHARAT NAGAR";
	else if(fromstop==3&&tostop==9)
	cout<<"MATA MANDIR TO SAHARA";
	else if(fromstop==3&&tostop==10)
	cout<<"MATA MANDIR TO MVM SCHOOL";
	else if(fromstop==5&&tostop==1)
	cout<<"BORD OFFICE TO KOTRA";
	else if(fromstop==5&&tostop==2)
	cout<<"BORD OFFICE  TO NEW MARKET";
	else if(fromstop==5&&tostop==3)
	cout<<"BORD OFFICE TO MATA MANDIR";
	else if(fromstop==5&&tostop==4)
	cout<<"BORD OFFICE TO 7 NO. ";
	else if(fromstop==5&&tostop==6)
	cout<<"BORD OFFICE TO CHETAK BRIDGE";
	else if(fromstop==5&&tostop==7)
	cout<<"BORD OFFICE TO CRPF COLONY";
	else if(fromstop==5&&tostop==8)
	cout<<"BORD OFFICE TO BHARAT NAGAR";
	else if(fromstop==5&&tostop==9)
	cout<<"BORD OFFICE TO SAHARA";
	else if(fromstop==5&&tostop==10)
	cout<<"BORD OFFICE TO MVM SCHOOL";
	else  if(fromstop==4&&tostop==1)
	cout<<" 7 NO TO KOTRA";
	else if(fromstop==4&&tostop==2)
	cout<<"7 NO TO NEW MARKET";
	else if(fromstop==4&&tostop==3)
	cout<<"7 NO.  TO 7 MATA MANDIR";
	else if(fromstop==4&&tostop==5)
	cout<<"7 NO.TO BORD OFFICE";
	else if(fromstop==4&&tostop==6)
	cout<<"7 NO TO CHETAK BRIDGE";
	else if(fromstop==4&&tostop==7)
	cout<<"7 NO TO CRPF COLONY";
	else if(fromstop==4&&tostop==8)
	cout<<"7 NO TO BAHRAT NAGAR";
	else if(fromstop==4&&tostop==9)
	cout<<"7 NO TO SAHARA";
	else if(fromstop==4&&tostop==10)
	cout<<"7 NO TO MVM SCHOOL";
	else  if(fromstop==6&&tostop==1)
	cout<<"  CHETAK BRIDGE7 NO TO KOTRA";
	else if(fromstop==6&&tostop==2)
	cout<<" CHETAK BRIDGE7 NO TO NEW MARKET";
	else if(fromstop==6&&tostop==3)
	cout<<" CHETAK BRIDGE  TO  MATA MANDIR";
	else if(fromstop==6&&tostop==5)
	cout<<" CHETAK BRIDGE TO BORD OFFICE";
	else if(fromstop==6&&tostop==4)
	cout<<" CHETAK BRIDGE TO 7 NO.";
	else if(fromstop==6&&tostop==7)
	cout<<" CHETAK BRIDGE TO CRPF COLONY";
	else if(fromstop==6&&tostop==8)
	cout<<" CHETAK BRIDGE TO BAHARAT NAGAR";
	else if(fromstop==6&&tostop==9)
	cout<<" CHETAK BRIDGE TO SAHARA";
	else if(fromstop==6&&tostop==10)
	cout<<" CHETAK BRIDGE TO MVM SCHOOL";
	else  if(fromstop==7&&tostop==1)
	cout<<" CRPF COLONY  TO KOTRA";
	else if(fromstop==7&&tostop==2)
	cout<<" CRPF COLONY TO NEW MARKET";
	else if(fromstop==7&&tostop==3)
	cout<<" CRPF COLONY  TO  MATA MANDIR";
	else if(fromstop==7&&tostop==5)
	cout<<" CRPF COLONY TO BORD OFFICE";
	else if(fromstop==7&&tostop==5)
	cout<<" CRPF COLONY TO CHETAK BRIDGE";
	else if(fromstop==7&&tostop==4)
	cout<<" CRPF COLONY TO 7 NO.";
	else if(fromstop==7&&tostop==8)
	cout<<" CRPF COLONY TO BAHRAT NAGAR";
       /*	cout<<" CRPF COLONY TO SAHARA";
	else if(fromstop==7&&tostop==10)
	cout<<" CRPF COLONY TO MVM SCHOOL";
	else  if(fromstop==8&tostop==1)
	cout<<" BAHRAT NAGAR TO KOTRA";
	else if(fromstop==8&&tostop==2)
	cout<<"BAHRAT NAGAR5 TO NEW MARKET";
	else if(fromstop==8&&tostop==3)
	cout<<"BAHRAT NAGAR  TO  MATA MANDIR";
	else if(fromstop==8&&tostop==5)
	cout<<"BAHRAT NAGAR TO BORD OFFICE";
	else if(fromstop==8&&tostop==6)
	cout<<"BAHRAT NAGAR TO CHETAK BRIDGE";
	else if(fromstop==8&&tostop==7)
	cout<<"BAHRAT NAGAR TO CRPF COLONY";
	else if(fromstop==8&&tostop==4)
	cout<<"BAHRAT NAGAR TO 7 NO.";
	else if(fromstop==8&&tostop==9)
	cout<<"BAHRAT NAGAR TO SAHARA";
	else if(fromstop==8&&tostop==10)
	cout<<"BAHRAT NAGAR TO MVM SCHOOL";
	else  if(fromstop==9&&tostop==1)
	cout<<"  SAHARA TO KOTRA";
	else if(fromstop==9&&tostop==2)
	cout<<" SAHARA TO NEW MARKET";
	else if(fromstop==9&&tostop==3)
	cout<<" SAHARA TO  MATA MANDIR";
	else if(fromstop==9&&tostop==5)
	cout<<" SAHARA TO BORD OFFICE";
	else if(fromstop==9&&tostop==6)
	cout<<" SAHARA TO CHETAK BRIDGE";
	else if(fromstop==9&&tostop==7)
	cout<<" SAHARA TO CRPF COLONY";
	else if(fromstop==9&&tostop==8)
	cout<<" SAHARA TO BAHARAT NAGAR";
	else if(fromstop==9&&tostop==4)
	cout<<" SAHARA TO 7 NO.";
	else if(fromstop==9&&tostop==10)
	cout<<" SAHARA TO MVM SCHOOL";
	else  if(fromstop==10&&tostop==1)
	cout<<"  MVM SCHOOL TO KOTRA";
	else if(fromstop==10&&tostop==2)
	cout<<" MVM SCHOOL TO NEW MARKET";
	else if(fromstop==10&&tostop==3)
	cout<<" MVM SCHOOL  TO  MATA MANDIR";
	else if(fromstop==10&&tostop==5)
	cout<<" MVM SCHOOL TO BORD OFFICE";
	else if(fromstop==10&&tostop==6)
	cout<<" MVM SCHOOL TO CHETAK BRIDGE";
	else if(fromstop==10&&tostop==7)
	cout<<" MVM SCHOOL TO CRPF COLONY";
	else if(fromstop==10&&tostop==8)
	cout<<" MVM SCHOOL TO BHARAT NAGAR";
	else if(fromstop==10&&tostop==9)
	cout<<" MVM SCHOOL TO SAHARA";
	else if(fromstop==10&&tostop==4)
	cout<<" MVM SCHOOL TO 7 NO."; */
;}




void BUS:: card()        //Function to run card.
{  int c;

   cout<< "enter the card no.=";
   cin>>c;
   balance=balance-charge;
   if(balance<=charge)
   recharge();
}
void BUS:: card1()        //Function to run card.
{
   balance=balance-charge;
   if(balance<=charge)
   recharge();
}


void BUS::recharge()   //Function to recharge card.
{     char CH;int a;
	cout<<"DO TOU WANT TO RECHARGE(y/n)=";
	cin>>CH;
	if (CH=='y'||CH=='Y')
	cout<<"enter amount of recharge:=";
	cin>>amount;
	balance=balance+amount+0.25*amount;
}






 void ending()
{

	clrscr();
	textcolor(BLUE);
	int i,j;
	for(j=13,i=20;j>-1,i<50;j--,i++)
	{
		delay(70);
		gotoxy(i,6);
		cputs("Í");
		gotoxy(i,13);
		cputs("Í");
	}
	for(j=13;j>6;j--)
	{
		delay(70);
		gotoxy(19,j);
		cputs("º");
		gotoxy(49,j);
		cputs("º");
	}
		gotoxy(19,6);
		cputs("É");
		gotoxy(49,6);
		cputs("»");
		gotoxy(19,13);
		cputs("È");
		gotoxy(49,13);
		cputs("¼");
		gotoxy (20,7);
		cputs("Thank");
		gotoxy (26,7);
		cputs("You");
		delay(250);
		gotoxy(20,9);
		cputs("\n\n PLEASE VISIT AGAIN. ");
		gotoxy (20,11);
		delay(500);

	  }



 void main()
{       textbackground(BLACK);
	cout<<"a";
	clrscr();
	{
		clrscr();
		int i,j,k;
		char str[10];
		textcolor(BLUE);
		for (i=2;i<24;i++)
		{
			delay(150);
			gotoxy(i,11);
			cputs(" This program is copyright protected.  ");
			gotoxy(i,12);
			cputs("   Copying this program is illegal.  ");
			gotoxy(i,13);
			cputs("   Tresspassers would be  punished. ");
			if (i==22)
		       /*	{
				textcolor(16+BLINK);

			}      */
			if(i==23)
			{
				delay(10);
			}
		}
// WELCOME SCREEN


       clrscr();
       lab:;
	clrscr();

       //	char str[10];//int k;
	for(int a=0;a<3;a++)
	{
	cout<<"\n  >>>>>>>>>>>>     >>>>>>>>>>>      >>>>>>>>>>>>>>   >>>>>>>>>>>                  ";
	cout<<"\n  >>         >>    >>         >>          >>         >>                 ";
	cout<<"\n  >>          >>   >>           >>        >>         >>                ";
	cout<<"\n  >>           >>  >>            >>       >>         >>                 ";
	cout<<"\n  >>            >> >>            >>       >>         >>                 ";
	cout<<"\n  >>            >> >>           >>        >>         >>	 ";
	cout<<"\n  >>           >>  >>          >>         >>         >>                ";
	cout<<"\n  >>          >>   >>>>>>>>>>>>           >>         >>	    ";
	cout<<"\n  >>         >>    >>       >>            >>         >>>>>>>>>>>                ";
	cout<<"\n  >>>>>>>>>>>      >>        >>           >>                  >>             ";
	cout<<"\n  >>         >>    >>         >>          >>                  >>	             ";
	cout<<"\n  >>           >>  >>          >>         >>                  >>     ";
	cout<<"\n  >>            >> >>           >>        >>                  >>               ";
	cout<<"\n  >>            >> >>            >>       >>                  >>           ";
	cout<<"\n  >>            >> >>             >>      >>                  >>                ";
	cout<<"\n  >>           >>  >>              >>     >>                  >>	 ";
	cout<<"\n  >>          >>   >>              >>     >>                  >>	             ";
	cout<<"\n  >>>>>>>>>>>>>    >>              >>     >>          >>>>>>>>>>	             ";
	cout<<"\n  >>              ";

	}
		getch();
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t WELCOME\n\n";
	cout<<"\t\t\t\t   TO\n\n";
	cout<<"\t\t\t\t   THE\n\n";
	cout<<"\t\t\t       WORLD OF C++\n";
	getch();
	clrscr();

	{
	clrscr();
	cout<<"\n\n\n\n";
	("   PLEASE WAIT WHILE LOADING THE PROJECT");
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(150);
	cout<<"||||";
	delay(200);
	}


	again:;
	clrscr();
	gotoxy(1,6);
	textbackground(LIGHTGREEN);
	textcolor(BLACK);
	 cputs("                          COMPUTER SCIENCE PROJECT WORK                         \n");
	printf("                                                                                \n");
	printf("********************************************************************************");

	cout<<"\n";
	cputs ("                         WELCOME TO THE B.R.T.S.                      \n");
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	gotoxy(2,21);


	 cputs("                   SCHOOL:-MAHARISHI VIDYA MANDIR SCHOOL                   ");
	 gotoxy(2,22);
	 cputs("                                                             ");
	 cout<<"\n";
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	gotoxy(1,29);

	 cputs("                        ===============================                        \n");
	 cout<<"\n\n";
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	gotoxy(1,37);


	 cputs("             BY:- SHIVAM SHUKLA,PRASHANT MISHRA AND JAYANT GAWALI                 \n");
	 gotoxy(1,39);
	 cputs("                             CLASS:- XII A2                                     \n");
	 gotoxy(1,41);
	 cputs("                          ROLL NO:- 36, 32 & 35                              \n");
	 gotoxy(1,43);
	 cputs("                            YEAR:- 2015-2016                                   \n");
	 cout<<"\n\n";
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	cout<<"\n\n";

	gotoxy(45,48);
	cputs("PRESS ENTER TO CONTINUE!!!!!!");
	getch();
	clrscr();


			clrscr();
		textbackground(RED);
		textcolor(GREEN);
		pass:;
		start:
	("________________________________________________________________________");
	cout<<"\n\n\tPLEASE BE CAREFUL ENTER THE PASSWORD IN SMALL LETTERS\n";
	cout<<"\n\t\tPASSWORD DOES NOT CONTAINS ANY NUMBER\n\n\n";
		gotoxy(21,12);
		cputs("Unauthorised authority acess will be denied");
		gotoxy(27,14);
		cputs("Enter password (4): ");
		char c[4];
		c[0]=getch();
		cout<<"*";
		c[1]=getch();
		cout<<"*";
		c[2]=getch();
		cout<<"*";
		c[3]=getch();
		cout<<"*";
		if((c[0]=='p')&&(c[1]=='a')&&(c[2]=='s')&&(c[3]=='s'))
		{
			clrscr();
			gotoxy(37,12);
			textcolor(WHITE);
			cputs("WELCOME");
			delay(900);
		}else
		{
			clrscr();
			textcolor(YELLOW+BLINK);
			gotoxy(31,13);
			cputs("UNAUTHORISED ACCESS !!!");
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			sound(1000);
			delay(500);
			nosound();
			sound(7);
			delay(300);
			nosound();
			clrscr();
			goto start;


		}
	}


 //LOADING THE PROJECT

	gotoxy(32,13);

	cputs("********************");
	gotoxy(32,15);
	cputs("LOADING YOUR PROJECT");
	gotoxy(32,17);
	cputs("********************");
	gotoxy(32,20);

	cputs("PLEASE WAIT.........");

	delay(200);
	gotoxy(32,35);
	cputs("05 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("10 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("15 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("20 % completed...");
	delay(200);
	gotoxy(32,35);
	cputs("25 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("30 % completed....");
	delay(200);
	gotoxy(32,35);
	cputs("35 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("40 % completed.....");
	delay(200);
	gotoxy(32,35);
	cputs("45 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("50 % completed......");
	delay(200);
	gotoxy(32,35);
	cputs("55 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("60 % completed.......");
	delay(200);
	gotoxy(32,35);
	cputs("65 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("70 % completed........");
	delay(200);
	gotoxy(32,35);
	cputs("75 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("80 % completed.........");
	delay(200);
	gotoxy(32,35);
	cputs("85 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("90 % completed..........");
	delay(200);
	gotoxy(32,35);
	cputs("95 % completed..");
	delay(200);
	gotoxy(32,35);
	cputs("100 % completed...........");
	delay(200);




 clrscr();
	int j;
	int selection;
	char choice;
	do{
		clrscr();
		textcolor(BLACK);
		textbackground(WHITE);
		cout<<"a";
		clrscr();
		gotoxy(39,3);
		cputs("INDEX");
		textcolor(BLACK);
		gotoxy(3,5);
		cputs("1. WELCOME TO B.R.T.S. ");
		gotoxy(3,7);
		cputs("2. ACKNOWLEDGEMENT");
		gotoxy(3,9);
		cputs("3. EXIT");
		gotoxy(3,14);
		cputs("ENTER YOUR SELECTION : ");
		cin>>selection;
		switch(selection)
		{
			case 1:

				char v;
				clrscr();
			       do{
					BUS no1;
					no1.dispinfo();
					getch();
					clrscr();
					cout<<"\n\n\Do you want to execute again (Y/N)";
					cin>>v;
						   fstream f;
				   int income=0,abc=0;
				   float pos;
				   char abs;
				   pos=no1.chargef();
				   income=income+pos;
				   f<<income;
				   f>>income;
				   abc=income;
				   if(no1.jay=='y')
				   income=abc;
				   cout<<"do you want to see income";
				   cin>>abs;
				   if(abs=='y')
				   cout<<"income="<<income;


				}while((v=='y')||(v=='Y'));


			break;

		case 2:
			clrscr();
			cout<<"          \n\n  ACKNOWLEDGEMENT\n\n\n                   ";
			cout<<"  \n\n\n       We would like to take this\n             ";
			cout<<"opportunity to thank everyone related with\n            ";
			cout<<"this project wether directly or indirectly\n            ";
			cout<<"and who all have contributed their constructive\n       ";
			cout<<"hand to help us in making this project a success. \n    ";
			cout<<"We would like to thank our computer teacher\n\n         ";
			cout<<"Computer Teacher  Ms.PREETI SHRIVASTAVA \n\n  under whose creative guidence\n";
			cout<<"we were able to make our project.\n   Thank You!!!\n\n\n";
			break;
		case 3:
			textbackground(BLUE);
			ending();
			break;
		}//end of switch
		cout<<"\n\n\n\n\n\n";
		cputs("Do you wish to return to Index (Y/N)");
		cin>>choice;

	}while((choice=='y')||(choice=='Y'));

			//end of do while
	clrscr();
	ending();
	delay(3000);
}

