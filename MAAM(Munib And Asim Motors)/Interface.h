#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include "Search.h"
#include"additem.h"
using namespace std;
void RunProgram(){
	int x;
	char y;
	char p;
	Node* root=NULL;
	CarsDataBase Obj;
	long long int z;
	start:
	system("cls");
	root=Obj.makeEmpty(root);
	cout<<"----------------------------------"<<"Welcome to Munib And Asim Motors!!!!"<<"--------------------------------------"<<endl;
	cout<<"Would u like to buy or sell us a car?"<<endl<<"1)Buy"<<endl<<"2)Sell"<<endl<<"3)Exit";
	cin>>x;
	system("cls");
	if(x==1){
		again:
		root=Search(root,Obj);
		cout<<endl<<endl;
		if(aaa==0){
		cout<<"\nFiltered car does not exist\n";
		system("pause");
		goto again;
	}
	else{
		cout<<"If u liked a car, press 1 to proceed to purchasing. Otherwise, press a different key to go back to main menu";
		cin>>y;
		if(y=='1'){
			cout<<"Enter the Product key of the car u liked.Press 0 to go to main menu........: ";
			cin>>z;
			if(z==0){
				goto start;
			}
			system("cls");
			aaa=0;
			Obj.SearchSingle(root,z);
			if(aaa==0){
				cout<<"Sorry the entered key does not match any car from our database!\nReturning to Main Menu..."<<endl;
				system("pause");
				goto start;
			}else{
			choice:
			cout<<"Confirm Purchase of Car?(Y/N)";
			cin>>p;
			if(p=='y'||p=='Y'){
			cout<<"Congratulations You have purchased this car";
			Obj.Delete(root,y);
			goto start;
			}
			else if(p=='n'||p=='N'){
			cout<<"Car Purchase Cancelled!!\n Going back to Main Menu.....";
			system("Pause");
			goto start;	
			}else{
				goto choice;
			}
			}
		}else{
			cout<<"Car Purchase Cancelled!!\n Going back to Main Menu.....";
			system("Pause");
			goto start;
		}
		}	
	}else if(x==2){
		AddNew();
		cout<<"New Car has been successfully added to database!";
		system("Pause");
		goto start;
	}else if(x==3){
		exit(0);
	}else{
		goto start;
	}
}