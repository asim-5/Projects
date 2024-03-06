#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"munib hashcode.h"
#include"AVL.h"
#include"choice.h"
#include"Lowercase.h"
using namespace std;
Node* Search(Node* root, CarsDataBase Obj){
	ifstream in;
	in.open("cardatabase.txt");
	string make,name,color,gear,space,pric,yea,kms,power,unit;
	int year,i=0,a;
	double price;
	long long int code=0;
		aaa=0;
		Obj.c=0;
	a=askmain();
	if(a==1){
	start: 
	int ch=ask1();
	while(!in.eof()){
		if(in.eof()){ 
		break;
		}
		i++;
		in>>make;
		in>>name;
		in>>pric;
		in>>unit;	
		in>>yea;
		year=stoi(yea);
		price=stod(pric);
		//cout<<i<<") ";
		if(unit=="lacs"){
			price=price*100000;
		}
		else if(unit=="crore"){ 
			price=price*10000000;
		}
		in>>kms;
		in>>gear;
		in>>color;
		in>>power;
		make=LowerCase(make);
		name=LowerCase(name);
		color=LowerCase(color);
		a=price;
		pric=to_string(a);
		if(ch==1){
			code=Generate_CodeMake(yea,pric,name,color,make);	
		}else if(ch==2){
			code=Generate_CodeName(yea,pric,name,color,make);
		}else if(ch==3){
			code=Generate_CodeYear(yea,pric,name,color,make);
		}else if(ch==4){
			//code=Generate_CodePrice(yea,pric,name,color,make);
			code=price;
		}else if(ch==5){
			code=Generate_CodeColor(yea,pric,name,color,make);
		}else{
			cout<<"Invalid Selection!"<<endl;
			goto start;
		}	
		root=Obj.Insert(root,code,name,make,color,gear,price,year,power,1);		
	}
	in.close();
//	Obj.InOrder(root);
long long int askcode,tocode,digit;
	if(ch!=4){
		string c=choice(ch);
		askcode=generate_single(c);
		digit=askcode;
		askcode=askcode*100000000;
		tocode=askcode+99999999;
		system("CLS");
		Obj.Inorder_search(root,askcode,tocode,INT_MIN,INT_MAX,c);
	}else{
		string from=choice(ch);
		string till=getprice2();
		int price1=stoi(from);
		int price2=stoi(till);
	system("cls");
	
		Obj.price_search(root,price1,price2);

	}

	}
	else if(a==2){
		string attr1,attr2;
		attr1=ask2();
		attr2=getchoice2();
		attr1=LowerCase(attr1);
		attr2=LowerCase(attr2);
		while(!in.eof()){
		if(in.eof()){ 
		break;
		}
		i++;
		in>>make;
		in>>name;
		in>>pric;
		in>>unit;	
		in>>yea;
		year=stoi(yea);
		price=stod(pric);

		if(unit=="lacs"){
			price=price*100000;
		}
		else if(unit=="crore"){ 
			price=price*10000000;
		}
		in>>kms;
		in>>gear;
		in>>color;
		in>>power;
		make=LowerCase(make);
		name=LowerCase(name);
		color=LowerCase(color);
		a=price;
		pric=to_string(a);
		if((attr1=="name"&&attr2=="make")||(attr1=="make"&&attr2=="name")){
			code=Generate_CodeGeneral(make,name,yea,pric,color);	
		}else if((attr1=="name"&&attr2=="year")||(attr1=="year"&&attr2=="name")){
			code=Generate_CodeGeneral(name,yea,make,pric,color);
		}else if((attr1=="name"&&attr2=="price")||(attr1=="price"&&attr2=="name")){
			code=Generate_CodeGeneral(name,pric,yea,make,color);
		}else if((attr1=="name"&&attr2=="color")||(attr1=="color"&&attr2=="name")){
			code=Generate_CodeGeneral(name,color,pric,yea,make);
		}
			
		else if((attr1=="make"&&attr2=="year")||(attr1=="year"&&attr2=="make")){
			code=Generate_CodeGeneral(make,yea,name,pric,color);
		}else if((attr1=="make"&&attr2=="price")||(attr1=="price"&&attr2=="make")){
			code=Generate_CodeGeneral(make,pric,yea,name,color);
		}else if((attr1=="make"&&attr2=="color")||(attr1=="color"&&attr2=="make")){
			code=Generate_CodeGeneral(make,color,pric,yea,name);
		}
		
		else if((attr1=="year"&&attr2=="price")||(attr1=="price"&&attr2=="year")){
			code=Generate_CodeGeneral(yea,pric,name,make,color);
		}else if((attr1=="year"&&attr2=="color")||(attr1=="color"&&attr2=="year")){
			code=Generate_CodeGeneral(yea,color,pric,name,make);
		}
		
		else if((attr1=="price"&&attr2=="color")||(attr1=="color"&&attr2=="price")){
			code=Generate_CodeGeneral(color,pric,yea,name,make);
	}
		else{
			cout<<"Invalid Selection!"<<endl;
			goto start;
		}	
		root=Obj.Insert(root,code,name,make,color,gear,price,year,power,1);		
	}
	in.close();
	long long int askcode,askcode1,askcode2,tocode,till;
		choiceno2(attr1,attr2);
		if(attr1!="price" && attr2!="price"){
			string c1=getchoice1();
			string c2=getchoice2();
			c1=LowerCase(c1);
			c2=LowerCase(c2);
			askcode1=generate_single(c1);
			askcode2=generate_single(c2);
			askcode=askcode2+askcode1*100;
			askcode=askcode*1000000;
			tocode=askcode+999999;
			system("cls");
			
			Obj.Inorder_search2(root,askcode,tocode,INT_MIN,INT_MAX,c1,c2);
		}
		else{
			string c1=getchoice1();
			string c2=getchoice2();

			string price2=getprice2();

			askcode1=generate_single(c1);
			askcode2=generate_single(c2);

			int a1=stoi(c2);
			int a2=stoi(price2); 
			cout<<a1<<a2;
			till=generate_single(price2);
			askcode=askcode1;
			askcode=askcode*100000000;
			tocode=askcode;
			tocode=tocode*100000000;
			tocode=tocode+99999999;
			system("cls");
			
			Obj.Inorder_search2(root,askcode,tocode,a1,a2,c1,"0");
		}

}
else if(a==3){
	string attr1,attr2,attr3;
		ask3();
		attr1=getchoice1();
		attr2=getchoice2();
		attr3=getchoice3();
		attr1=LowerCase(attr1);
		attr2=LowerCase(attr2);
		attr3=LowerCase(attr3);

		while(!in.eof()){
		if(in.eof()){ 
		break;
		}
		i++;
		in>>make;
		in>>name;
		in>>pric;
		in>>unit;	
		in>>yea;
		year=stoi(yea);
		price=stod(pric);
		//cout<<i<<") ";
		if(unit=="lacs"){
			price=price*100000;
		}
		else if(unit=="crore"){ 
			price=price*10000000;
		}
		in>>kms;
		in>>gear;
		in>>color;
		in>>power;
		make=LowerCase(make);
		name=LowerCase(name);
		color=LowerCase(color);
		a=price;
		pric=to_string(a);
		if((attr1=="name"&&attr2=="make"&& attr3=="year")||(attr1=="make"&&attr2=="name"&&attr3=="year")||(attr1=="name"&&attr2=="year"&&attr3=="make")||(attr1=="make"&&attr2=="year"&&attr3=="name")||(attr1=="year"&&attr2=="name"&&attr3=="make")||(attr1=="year"&&attr2=="make"&&attr3=="name")){
			code=Generate_CodeGeneral(make,name,yea,pric,color);	
		}else if((attr1=="name"&&attr2=="make"&& attr3=="price")||(attr1=="make"&&attr2=="name"&&attr3=="price")||(attr1=="name"&&attr2=="price"&&attr3=="make")||(attr1=="make"&&attr2=="price"&&attr3=="name")||(attr1=="price"&&attr2=="name"&&attr3=="make")||(attr1=="price"&&attr2=="make"&&attr3=="name")){
			code=Generate_CodeGeneral(make,name,pric,yea,color);
		}else if((attr1=="name"&&attr2=="make"&& attr3=="color")||(attr1=="make"&&attr2=="name"&&attr3=="color")||(attr1=="name"&&attr2=="color"&&attr3=="make")||(attr1=="make"&&attr2=="color"&&attr3=="name")||(attr1=="color"&&attr2=="name"&&attr3=="make")||(attr1=="color"&&attr2=="make"&&attr3=="name")){
			code=Generate_CodeGeneral(make,name,color,yea,pric);
		}else if((attr1=="name"&&attr2=="year"&& attr3=="price")||(attr1=="year"&&attr2=="name"&&attr3=="price")||(attr1=="name"&&attr2=="price"&&attr3=="year")||(attr1=="year"&&attr2=="price"&&attr3=="name")||(attr1=="price"&&attr2=="name"&&attr3=="year")||(attr1=="price"&&attr2=="year"&&attr3=="name")){
			code=Generate_CodeGeneral(name,yea,pric,make,color);
		}else if((attr1=="name"&&attr2=="year"&& attr3=="color")||(attr1=="year"&&attr2=="name"&&attr3=="color")||(attr1=="name"&&attr2=="color"&&attr3=="year")||(attr1=="year"&&attr2=="color"&&attr3=="name")||(attr1=="color"&&attr2=="name"&&attr3=="year")||(attr1=="color"&&attr2=="year"&&attr3=="name")){
			code=Generate_CodeGeneral(name,yea,color,pric,make);
		}else if((attr1=="name"&&attr2=="price"&& attr3=="color") || (attr1=="price"&&attr2=="name"&&attr3=="color")||(attr1=="name"&&attr2=="color"&&attr3=="price")||(attr1=="price"&&attr2=="color"&&attr3=="name")||(attr1=="color"&&attr2=="name"&&attr3=="price")||(attr1=="color"&&attr2=="price"&&attr3=="name")){
			code=Generate_CodeGeneral(name,color,pric,yea,make);
		}else if((attr1=="make"&&attr2=="year"&& attr3=="price") || (attr1=="year"&&attr2=="make"&&attr3=="price")||(attr1=="make"&&attr2=="price"&&attr3=="year")||(attr1=="year"&&attr2=="price"&&attr3=="make")||(attr1=="price"&&attr2=="make"&&attr3=="year")||(attr1=="price"&&attr2=="year"&&attr3=="make")){
			code=Generate_CodeGeneral(make,yea,pric,color,make);
		}else if((attr1=="make"&&attr2=="year"&& attr3=="color") || (attr1=="year"&&attr2=="make"&&attr3=="color")||(attr1=="make"&&attr2=="color"&&attr3=="year")||(attr1=="year"&&attr2=="color"&&attr3=="make")||(attr1=="color"&&attr2=="make"&&attr3=="year")||(attr1=="color"&&attr2=="year"&&attr3=="make")){
			code=Generate_CodeGeneral(make,yea,color,pric,make);
		}else if((attr1=="year"&&attr2=="price"&& attr3=="color") || (attr1=="price"&&attr2=="year"&&attr3=="color")||(attr1=="year"&&attr2=="color"&&attr3=="price")||(attr1=="price"&&attr2=="color"&&attr3=="year")||(attr1=="color"&&attr2=="year"&&attr3=="price")||(attr1=="color"&&attr2=="price"&&attr3=="year")){
			code=Generate_CodeGeneral(yea,color,pric,name,make);
		}else if((attr1=="make"&&attr2=="price"&& attr3=="color") || (attr1=="price"&&attr2=="make"&&attr3=="color")||(attr1=="make"&&attr2=="color"&&attr3=="price")||(attr1=="price"&&attr2=="color"&&attr3=="make")||(attr1=="color"&&attr2=="make"&&attr3=="price")||(attr1=="color"&&attr2=="price"&&attr3=="make")){
			code=Generate_CodeGeneral(make,color,pric,name,yea);
		}
		else{
			cout<<"Invalid Selection!"<<endl;
			goto start;
		}	
		root=Obj.Insert(root,code,name,make,color,gear,price,year,power,1);		
	}
	in.close();

	long long int askcode1,askcode,askcode2,askcode3,tocode,price1code,price2code;
	choiceno3(attr1,attr2,attr3);
	if(attr1!="price"&& attr2 !="price" && attr3!="price"){
		string c1=getchoice1();
		string c2=getchoice2();
		string c3=getchoice3();
		c1=LowerCase(c1);
		c2=LowerCase(c2);
		c3=LowerCase(c3);
		askcode1=generate_single(c1);
		askcode2=generate_single(c2);
		askcode3=generate_single(c3);
		askcode=askcode3+askcode2*100+askcode1*10000;
		askcode=askcode*10000;
		tocode=askcode+9999;	
		system("cls");
	
		Obj.Inorder_search3(root,askcode,tocode,INT_MIN,INT_MAX,c1,c2,c3);		
	}
	else{
		string c1=getchoice1();
		string c2=getchoice2();
		string pric1=getPrice1();
		string pric2=getprice2();
		int price1=stoi(pric1);
		int price2=stoi(pric2);
		askcode1=generate_single(c1);
		askcode2=generate_single(c2);
		price1code=generate_single(pric1);
		price2code=generate_single(pric2);
		askcode=askcode2+askcode1*100;
		askcode=askcode*1000000;
		tocode=askcode2+askcode1*100;
		tocode=tocode*1000000;
		tocode=tocode+999999;
		system("cls");
		
		Obj.Inorder_search3(root,askcode,tocode,price1,price2,c1,c2,"0");
	}
}
else if(a==4){
	string attr1,attr2,attr3,attr4;
	ask4();
	attr1=LowerCase(getchoice1());
	attr2=LowerCase(getchoice2());
	attr3=LowerCase(getchoice3());
	attr4=LowerCase(getchoice4());
	

	while(!in.eof()){
		if(in.eof()){ 
		break;
		}
		i++;
		in>>make;
		in>>name;
		in>>pric;
		in>>unit;	
		in>>yea;
		year=stoi(yea);
		price=stod(pric);
		//cout<<i<<") ";
		if(unit=="lacs"){
			price=price*100000;
		}
		else if(unit=="crore"){ 
			price=price*10000000;
		}
		in>>kms;
		in>>gear;
		in>>color;
		in>>power;
		make=LowerCase(make);
		name=LowerCase(name);
		color=LowerCase(color);
		a=price;
		pric=to_string(a);
		if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="price"||attr2=="price"||attr3=="price"||attr4=="price")){
		code=Generate_CodeGeneral(make,name,yea,pric,color);
	}else if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		code=Generate_CodeGeneral(make,name,yea,color,pric);
	}else if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="price"|| attr2=="price"|| attr3=="price" || attr4=="price")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		code=Generate_CodeGeneral(make,name,color,pric,yea);
	}else if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="price"|| attr2=="price"|| attr3=="price" || attr4=="price")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		code=Generate_CodeGeneral(yea,name,color,pric,make);
	}else if((attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="price"|| attr2=="price"|| attr3=="price" || attr4=="price")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		code=Generate_CodeGeneral(make,yea,color,pric,name);
	}
		else{
			cout<<"Invalid Selection!"<<endl;
			goto start;
		}	
		root=Obj.Insert(root,code,name,make,color,gear,price,year,power,1);		
	}
	in.close();
	long long int askcode1,askcode,askcode2,askcode3,askcode4,tocode,price1code,price2code;
	choiceno4(attr1,attr2,attr3,attr4);
	string c1=LowerCase(getchoice1());
	string c2=LowerCase(getchoice2());
	string c3=LowerCase(getchoice3());
	askcode1=generate_single(c1);
	askcode2=generate_single(c2);
	askcode3=generate_single(c3);
	if(attr1!="price" && attr2!="price" && attr3!="price" && attr4!="price"){
		string c4=LowerCase(getchoice4());
		askcode4=generate_single(c4);
		askcode=askcode4+askcode3*100+askcode2*10000+askcode1*1000000;
		askcode=askcode*100;
		tocode=askcode+99;
		system("cls");
		Obj.Inorder_search4(root,askcode,tocode,INT_MIN,INT_MAX,c1,c2,c3,c4);
	}
	else{
	
	string price11=LowerCase(getPrice1());
	string price22=LowerCase(getprice2());
	 int price1=stoi(price11);
	 int price2=stoi(price22);

	askcode=askcode3+askcode2*100+askcode1*10000;
	askcode=askcode*10000;

	tocode=askcode;
	tocode=tocode+9999;
	system("cls");
	Obj.Inorder_search4(root,askcode,tocode,price1,price2,c1,c2,c3,"0");
	}

}
	else if(a==5){
		string attr1,attr2,attr3,attr4,attr5;
		ask5();
		while(!in.eof()){
		if(in.eof()){ 
		break;
		}
		i++;
		in>>make;
		in>>name;
		in>>pric;
		in>>unit;	
		in>>yea;
		year=stoi(yea);
		price=stod(pric);
		//cout<<i<<") ";
		if(unit=="lacs"){
			price=price*100000;
		}
		else if(unit=="crore"){ 
			price=price*10000000;
		}
		in>>kms;
		in>>gear;
		in>>color;
		in>>power;
		make=LowerCase(make);
		name=LowerCase(name);
		color=LowerCase(color);
		a=price;
		pric=to_string(a);
		code=Generate_CodeGeneral(make,name,yea,color,pric);
					
		root=Obj.Insert(root,code,name,make,color,gear,price,year,power,1);		
	}
	in.close();
		long long int askcode,namecode,makecode,tocode,price1code,price2code;

		string name,make,price1,price2,year,color;
		make=LowerCase(getchoice1());
		name=LowerCase(getchoice2());
		year=LowerCase(getchoice3());	
		color=LowerCase(getchoice4());
		price1=LowerCase(getPrice1());
		price2=LowerCase(getprice2());
		int pric1=stoi(price1);
		int pric2=stoi(price2);
		askcode=Generate_CodeGeneral1(price1,make,name,year,color);
		tocode=Generate_CodeGeneral1(price2,make,name,year,color);	
		tocode=tocode+99;
		int yea=stoi(year);	
		system("cls");
		Obj.Inorder_search5(root,askcode,tocode,pric1,pric2,make,name,color,yea);
	}
	
	return root;
}
