#include<iostream>
#include "Avl (1) (1).h"
using namespace std;
void Display(Node *root){
	cout<<"Car Name: "<<root->getmake();
	cout<<root->getname()<<" ";
	cout<<"Model: "<<root->getyear()<<" ";
	cout<<"Price: "<<root->getprice()<<" ";
	cout<<"Engine: "<<root->getengine()<<" ";
	cout<<"Color: "<<root->getcolor()<<" ";
	cout<<root->getgear()<<" ";
	cout<<endl;
}