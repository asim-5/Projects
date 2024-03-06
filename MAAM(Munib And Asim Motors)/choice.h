#include<iostream>
using namespace std;
string name,color,make,year,price1,price2,choice2,choice1,choice3,choice4,choice5;
string Lowercase(string a){
	for(int i=0;i<a.length();i++){
		a[i]=tolower(a[i]);
	}
	return a;
}
int ask1(){
	string  ch;
	start:
	system("cls");	
	cout<<"Press 1 to search on basis of make\n";
	cout<<"Press 2 to search on basis of name\n";
	cout<<"Press 3 to search on basis of year\n";
	cout<<"Press 4 to search on basis of price range\n";
	cout<<"Press 5 to search on basis of color\n";
	cin>>ch;
	if(ch!="5" && ch!="4" && ch!="3" && ch!="2" && ch !="1"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}

	return stoi(ch);
}
string ask2(){
	string ch;
	start:
		system("cls");
	cout<<"Enter the name of attribute that you want to search(Name,Make,Year,Price,Color)\n";
	cin>>ch;
	ch=Lowercase(ch);
	if(ch!="name" && ch!="make" && ch!="year" && ch!="price" && ch !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	cin>>choice2;
	choice2=Lowercase(choice2);
	if(choice2!="name" && choice2!="make" && choice2!="year" && choice2!="price" && choice2 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	return ch;
}
void ask3(){
	start:
		system("cls");
	cout<<"Enter the name of attribute that you want to search(Name,Make,Year,Price,Color)\n";
	cin>>choice1;
	choice1=Lowercase(choice1);
	if(choice1!="name" && choice1!="make" && choice1!="year" && choice1!="price" && choice1 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	cin>>choice2;
	choice2=Lowercase(choice2);
	if(choice2!="name" && choice2!="make" && choice2!="year" && choice2!="price" && choice2 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	cin>>choice3;
	choice3=Lowercase(choice3);
	if(choice3!="name" && choice3!="make" && choice3!="year" && choice3!="price" && choice3 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
}
void ask4(){
	start:
	cout<<"Enter the name of attribute that you want to search(Name,Make,Year,Price,Color)\n";
	cin>>choice1;
	choice1=Lowercase(choice1);
	if(choice1!="name" && choice1!="make" && choice1!="year" && choice1!="price" && choice1 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	cin>>choice2;
	choice2=Lowercase(choice2);
	if(choice2!="name" && choice2!="make" && choice2!="year" && choice2!="price" && choice2 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	cin>>choice3;
	choice3=Lowercase(choice3);
	if(choice3!="name" && choice3!="make" && choice3!="year" && choice3!="price" && choice3 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	cin>>choice4;
	choice4=Lowercase(choice4);
	if(choice4!="name" && choice4!="make" && choice4!="year" && choice4!="price" && choice4 !="color"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
}

int askmain(){
	string  ch;
	start:
		system("cls");
	cout<<"Press 1 to search on the basis of 1 attribute\n";
	cout<<"Press 2 to search on the basis of 2 attributes\n";
	cout<<"Press 3 to search on the basis of 3 attributes\n";
	cout<<"Press 4 to search on the basis of 4 attributes\n";
	cout<<"Press 5 to search on the basis of 5 attributes\n";
	cin>>ch;
	if(ch!="5" && ch!="4" && ch!="3" && ch!="2" && ch !="1"){
		cout<<"\n invalid input\n";
		system("pause");
	goto start;
	}
	
	return stoi(ch);
	
	
	
}
string chMake(){
	string choice;

		cout<<"Enter the Make ";
	
	cin>>choice;
	return choice;
}
string chName(){
	string choice;

		cout<<"Enter the name ";
	
	cin>>choice;
	return choice;
}
string chYear(){
	string choice;

		cout<<"Enter the year ";
	
	cin>>choice;
	return choice;
}
string chPrice(){
	string choice;
	
		cout<<"Enter the price range \n";
	
	cin>>choice;
	price1=choice;
	cout<<"to"<<endl;
	cin>>price2;
	
	return choice;
}

string getprice2(){
	return price2;
}
string chColor(){
	string choice;
	
		cout<<"Enter the color ";
	
	cin>>choice;
	return choice;
}
void ask5(){
	choice1=chMake();
	choice2=chName();
	choice3=chYear();
	choice4=chColor();
	price1=chPrice();
	
}
void choiceno4(string attr1,string attr2,string attr3,string attr4){
	if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="price"||attr2=="price"||attr3=="price"||attr4=="price")){
		choice1=chMake();
		choice2=chName();
		choice3=chYear();
		price1=chPrice();	

	}else if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		choice1=chMake();
		choice2=chName();
		choice3=chYear();
		choice4=chColor();

	}else if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="price"|| attr2=="price"|| attr3=="price" || attr4=="price")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		choice1=chMake();
		choice2=chName();
		choice3=chColor();
		price1=chPrice();

	}else if((attr1=="name"|| attr2=="name"|| attr3=="name" || attr4=="name")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="price"|| attr2=="price"|| attr3=="price" || attr4=="price")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		choice1=chYear();
		choice2=chName();
		choice3=chColor();
		price1=chPrice();

	}else if((attr1=="make"|| attr2=="make"|| attr3=="make" || attr4=="make")&&(attr1=="year"|| attr2=="year"|| attr3=="year" || attr4=="year")&&(attr1=="price"|| attr2=="price"|| attr3=="price" || attr4=="price")&&(attr1=="color"||attr2=="color"||attr3=="color"||attr4=="color")){
		choice1=chMake();
		choice2=chYear();
		choice3=chColor();
		price1=chPrice();

	}
}
void choiceno3(string attr1,string attr2,string attr3){
	if((attr1=="name"&&attr2=="make"&& attr3=="year")||(attr1=="make"&&attr2=="name"&&attr3=="year")||(attr1=="name"&&attr2=="year"&&attr3=="make")||(attr1=="make"&&attr2=="year"&&attr3=="name")||(attr1=="year"&&attr2=="name"&&attr3=="make")||(attr1=="year"&&attr2=="make"&&attr3=="name")){
			choice1=chMake();
			choice2=chName();
			choice3=chYear();
	
		}else if((attr1=="name"&&attr2=="make"&& attr3=="price")||(attr1=="make"&&attr2=="name"&&attr3=="price")||(attr1=="name"&&attr2=="price"&&attr3=="make")||(attr1=="make"&&attr2=="price"&&attr3=="name")||(attr1=="price"&&attr2=="name"&&attr3=="make")||(attr1=="price"&&attr2=="make"&&attr3=="name")){
			choice1=chMake();
			choice2=chName();
			price1=chPrice();

		}else if((attr1=="name"&&attr2=="make"&& attr3=="color")||(attr1=="make"&&attr2=="name"&&attr3=="color")||(attr1=="name"&&attr2=="color"&&attr3=="make")||(attr1=="make"&&attr2=="color"&&attr3=="name")||(attr1=="color"&&attr2=="name"&&attr3=="make")||(attr1=="color"&&attr2=="make"&&attr3=="name")){
			choice1=chMake();
			choice2=chName();
			choice3=chColor();

		}else if((attr1=="name"&&attr2=="year"&& attr3=="price")||(attr1=="year"&&attr2=="name"&&attr3=="price")||(attr1=="name"&&attr2=="price"&&attr3=="year")||(attr1=="year"&&attr2=="price"&&attr3=="name")||(attr1=="price"&&attr2=="name"&&attr3=="year")||(attr1=="price"&&attr2=="year"&&attr3=="name")){
			choice1=chName();
			choice2=chYear();
			price1=chPrice();

		}else if((attr1=="name"&&attr2=="year"&& attr3=="color")||(attr1=="year"&&attr2=="name"&&attr3=="color")||(attr1=="name"&&attr2=="color"&&attr3=="year")||(attr1=="year"&&attr2=="color"&&attr3=="name")||(attr1=="color"&&attr2=="name"&&attr3=="year")||(attr1=="color"&&attr2=="year"&&attr3=="name")){
			choice1=chName();
			choice2=chYear();
			choice3=chColor();

		}else if((attr1=="name"&&attr2=="price"&& attr3=="color")||(attr1=="price"&&attr2=="name"&&attr3=="color")||(attr1=="name"&&attr2=="color"&&attr3=="price")||(attr1=="price"&&attr2=="color"&&attr3=="name")||(attr1=="color"&&attr2=="name"&&attr3=="price")||(attr1=="color"&&attr2=="price"&&attr3=="name")){
			choice1=chName();
			price1=chPrice();
			choice2=chColor();

		}else if((attr1=="make"&&attr2=="year"&& attr3=="price")||(attr1=="year"&&attr2=="make"&&attr3=="price")||(attr1=="make"&&attr2=="price"&&attr3=="year")||(attr1=="year"&&attr2=="price"&&attr3=="make")||(attr1=="price"&&attr2=="make"&&attr3=="year")||(attr1=="price"&&attr2=="year"&&attr3=="make")){
			choice1=chMake();
			choice2=chYear();
			price1=chPrice();

		}else if((attr1=="make"&&attr2=="year"&& attr3=="color")||(attr1=="year"&&attr2=="make"&&attr3=="color")||(attr1=="make"&&attr2=="color"&&attr3=="year")||(attr1=="year"&&attr2=="color"&&attr3=="make")||(attr1=="color"&&attr2=="make"&&attr3=="year")||(attr1=="color"&&attr2=="year"&&attr3=="make")){
			choice1=chMake();
			choice2=chYear();
			choice3=chColor();

		}else if((attr1=="year"&&attr2=="price"&& attr3=="color")||(attr1=="price"&&attr2=="year"&&attr3=="color")||(attr1=="year"&&attr2=="color"&&attr3=="price")||(attr1=="price"&&attr2=="color"&&attr3=="year")||(attr1=="color"&&attr2=="year"&&attr3=="price")||(attr1=="color"&&attr2=="price"&&attr3=="year")){
			choice1=chYear();
			price1=chPrice();
			choice2=chColor();

		}
		else if((attr1=="make"&&attr2=="price"&& attr3=="color") || (attr1=="price"&&attr2=="make"&&attr3=="color")||(attr1=="make"&&attr2=="color"&&attr3=="price")||(attr1=="price"&&attr2=="color"&&attr3=="make")||(attr1=="color"&&attr2=="make"&&attr3=="price")||(attr1=="color"&&attr2=="price"&&attr3=="make")){
			choice1=chMake();
			choice2=chColor();
			price1=chPrice();
			
		}
}
void choiceno2(string attr1,string attr2){
	if((attr1=="name"&&attr2=="make")||(attr1=="make"&&attr2=="name")){
			choice1=chMake();	
			choice2=chName();
		//	cout<<"hah";
		}else if((attr1=="name"&&attr2=="year")||(attr1=="year"&&attr2=="name")){
			choice1=chName();	
			choice2=chYear();
		}else if((attr1=="name"&&attr2=="price")||(attr1=="price"&&attr2=="name")){
			choice1=chName();	
			choice2=chPrice();
		}else if((attr1=="name"&&attr2=="color")||(attr1=="color"&&attr2=="name")){
			choice1=chName();	
			choice2=chColor();
		}
			
		else if((attr1=="make"&&attr2=="year")||(attr1=="year"&&attr2=="make")){
			choice1=chMake();
			choice2=chYear();
		}else if((attr1=="make"&&attr2=="price")||(attr1=="price"&&attr2=="make")){
			choice1=chMake();
			choice2=chPrice();
		}else if((attr1=="make"&&attr2=="color")||(attr1=="color"&&attr2=="make")){
			choice1=chMake();
			choice2=chColor();
		}	
		else if((attr1=="year"&&attr2=="price")||(attr1=="price"&&attr2=="year")){
			choice1=chYear();	
			choice2=chPrice();
		}else if((attr1=="year"&&attr2=="color")||(attr1=="color"&&attr2=="year")){
			choice1=chYear();	
			choice2=chColor();
		}
		
		else if((attr1=="price"&&attr2=="color")||(attr1=="color"&&attr2=="price")){
			choice1=chColor();	
			choice2=chPrice();
		}
	
}
string choice(int ch){
	if(ch==1){
		return(chMake());
	}
	else if(ch==2){
		return(chName());
	}
	else if (ch==3){
		return(chYear());
	}
	else if (ch==4){
		return(chPrice());
	}
	else if (ch==5){
		return(chColor());
	}

}
string getchoice2(){
	return choice2;
}
string getchoice1(){
	return choice1;
}
string getchoice3(){
	return choice3;
}
string getchoice4(){
	return choice4;
}
string getMake(){
	return make;
}
string getName(){
	return name;
}
string getYear(){
	return year;
}
string getPrice1(){
	return price1;
}
string getColor(){
	return color;
}