#include<iostream>
#include<stdlib.h>
using namespace std;
main()
	{
	int locks,stocks,barrels;
	int tlocks=0,tstocks=0,tbarrels=0;
	float lsales=0.0,ssales=0.0,bsales=0.0;
	float lprice=45.0,sprice=30.0,bprice=25.0;
	float sales,comm=0.0;
	cout<<"Enter the number of locks ";
	cout<<"(enter -1 to terminate) : ";
	cin>>locks;
	if(locks==-1)
		{
		cout<<"Program terminated\n";
		exit(0);
		}
	if(locks<-1||locks>70)
		{
		cout<<"locks out of range\n";
		}
	while(locks!=-1)
		{
		tlocks=tlocks+locks;
		cout<<"Enter the number of stocks : ";
		cin>>stocks;
		if(stocks<1||stocks>80)
			cout<<"stocks out of range\n";
		tstocks=tstocks+stocks;
		cout<<"Enter the number of barrels : ";
		cin>>barrels;
		if(barrels<1||barrels>90)
			cout<<"barrels out of range\n";
		tbarrels=tbarrels+barrels;
		cout<<"Enter the number of locks : ";
		cout<<"(enter -1 to terminate) : ";
		cin>>locks;
		if(locks<-1||locks>70)
			cout<<"locks out of range\n";
		}
	if((tlocks<1||tlocks>70) && (tstocks<1||tstocks>80) && (tbarrels<1||tbarrels>90))
		{
		cout<<"Total locks out of range\n";
		cout<<"Total stocks out of range\n";
		cout<<"Total Barrels out of range\n";
		exit(0);
		}
	else if((tlocks<1||tlocks>70) && (tstocks<1||tstocks>80))
		{
		cout<<"Total locks out of range\n";
		cout<<"Total stocks out of range\n";
		exit(0);
		}
	else if((tstocks<1||tstocks>80) && (tbarrels<1||tbarrels>90))
		{
		cout<<"Total stocks out of range\n";
		cout<<"Total Barrels out of range\n";
		exit(0);
		}
	else if((tlocks<1||tlocks>70) && (tbarrels<1||tbarrels>90))
		{
		cout<<"Total locks out of range\n";
		cout<<"Total Barrels out of range\n";
		exit(0);
		}
	else if((tlocks<1||tlocks>70))
		{
		cout<<"Total locks out of range\n";
		exit(0);
		}
	else if((tstocks<1||tstocks>80))
		{
		cout<<"Total stocks out of range\n";
		exit(0);
		}
	else if((tbarrels<1||tbarrels>90))
		{
		cout<<"Total barrels out of range\n";
		exit(0);
		}
	else
		{
		lsales=lprice*tlocks;
		ssales=sprice*tstocks;
		bsales=bprice*tbarrels;
		cout<<"locks="<<tlocks<<endl;
		cout<<"stocks="<<tstocks<<endl;
		cout<<"barrels="<<tbarrels<<endl;
		sales=lsales+ssales+bsales;
		cout<<"Total sales is "<<sales;
		if(sales>1800)
			comm=(0.10*1000)+(0.15*800)+(0.20*(sales-1800));
		else if(sales>1000)
			comm=(0.10*1000)+(0.15*(sales-1000));
		else
			comm=(0.10*sales);
		cout<<"\nTotal commission is "<<comm<<endl;
		return 0;
		}
	}
