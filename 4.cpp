#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
	{
	int day,month,year,tday=0,tmonth=0,tyear=0,m=0;
	char dtm[10];
	strcpy(dtm,argv[1]);
  	sscanf(dtm,"%d/%d/%d",&day,&month,&year);
	//cout<<"Enter the day (dd mm yyyy) : ";
	//cin>>day>>month>>year;
	//cout<<day<<"/"<<month<<"/"<<year<<endl;
	tday=day;
	tmonth=month;
	tyear=year;
	if(day<1||day>31&&month<1||month>12&&year<1812||year>2016)
		{
		cout<<"Invalid day,month and year\n";
		exit(0);
		}
	else if(day<1||day>31&&month<1||month>12)
		{
		cout<<"Invalid day and month\n";
		exit(0);
		}
	else if(month<1||month>12&&year<1812||year>2016)
		{
		cout<<"Invalid month and year\n";
		exit(0);
		}
	else if(day<1||day>31&&year<1812||year>2016)
		{
		cout<<"Invalid day and year\n";
		exit(0);
		}
	else if(day<1||day>31)
		{
		cout<<"Invalid day!!!\n";
		exit(0);
		}
	else if(month<1||month>12)
		{
		cout<<"Invalid month!!!\n";
		exit(0);
		}
	else if(year<1812||year>2016)
		{
		cout<<"Invalid year!!!\n";
		exit(0);
		}
	else
		{
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10)
			m=1;
		else if(month==4 || month==6 || month==9 || month==11)
			m=2;
		else if(month==12)
			m=3;
		else
			m=4;
		switch(m)
			{
			case 1: if(day<31)
					tday=day+1;
				else
					{
					tday=1;
					tmonth=month+1;
					}
				break;
			case 2: if(day<30)
					tday=day+1;
				else if(day==30)
					{
					tday=1;
					tmonth=month+1;
					}
				else
					{
					cout<<"Invalid date!!!\n";
					exit(0);
					}
				break;
			case 3: if(day<31)
					tday=day+1;
				else if(year>=2016)
					{
					cout<<"Next date out of range\n";
					exit(0);
					}
				else
					{	
					tday=1;
					tmonth=month+1;
					}
				break;
			case 4: if(day<28)
					tday=day+1;
				else if((year%4==0&&year%100!=0)||year%400==0)
					{
					if(day==28)
						tday=day+1;
					else if(day==29)
						{	
						tday=1;
						tmonth=month+1;
						}
					else
						{
						cout<<"Invalid date!!!\n";
						exit(0);
						}
					}
				else if(day>=29)
					{
					cout<<"Invalid date!!!\n";
					exit(0);
					}
				else
					{
					tday=1;
					tmonth=month+1;
					}
				break;
			}
		cout<<tday<<"/"<<tmonth<<"/"<<tyear<<endl;
		return 0;
		}
	}
