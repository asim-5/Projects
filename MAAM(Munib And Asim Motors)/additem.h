#include<iostream>
#include<fstream>
//#include"Lowercase.h"
using namespace std;
void AddNew(){
	string name,make,color,gear,engine,dist;
	int price,year,code;
	string unit;
	cout<<"Enter Name: ";cin>>name;
	cout<<"Enter Make: ";cin>>make;
	cout<<"Enter color: ";cin>>color;
	cout<<"Enter Gear: ";cin>>gear;
	cout<<"Enter Engine: ";cin>>engine;
	cout<<"Enter Price(value is in lacs or crores): ";cin>>price;
	cout<<"Lacs or Crores?";cin>>unit;
	cout<<"Enter Model: ";cin>>year;
	cout<<"Distance travelled?(in km)";cin>>dist;
	ofstream of;
	of.open("cardatabase.txt",ios::app);
	of<<endl<<name<<" "<<make<<" "<<price<<".00"<<" "<<unit<<" "<<year<<" "<<dist<<"km"<<" "<<gear<<" "<<color<<" "<<engine<<"cc"<<endl;
	of.close();
}