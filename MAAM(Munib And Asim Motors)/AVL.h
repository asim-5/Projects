#include<iostream>
//#include"Display_Car_Stats.h"
using namespace std;
static int z=0;
class Node{
	private:
	string make;
	string name;
	string color;
	string gear;
	int price;
	int year;
	string engine;
	public:
	int quantity;
	Node* left;
	Node* right;
	Node* left1;
	Node* right1;
	long long int key;
	int height;
	Node(){
		left=NULL;
		right=NULL;
		left1=NULL;
		right1=NULL;
		key=0;
		height=0;
	}
	void setmake(string a){
		make=a;
	}
	void setname(string a){
		name=a;
	}
	void setcolor(string a){
		color=a;
	}
	void setgear(string a){
		gear=a;
	}
	void setprice(int a){
		price=a;
	}
	void setyear(int a){
		year=a;
	}
	void setengine(string a){
		engine=a;
	}
	void setquantity(int a){
		quantity=a;
	}
	int getquantity(){
		return quantity;
	}
	string getengine(){
		return engine;
	}
	string getmake(){
		return make;
	}
	string getname(){
		return name;
	}
	string getcolor(){
		return color;
	}
	string getgear(){
		return gear;
	}
	int getyear(){
		return year;
	}
	int getprice(){
		return price;
	}	
};
int aaa=0;
class CarsDataBase{
	public:
	int c=0;
	private:
		Node* root;
	public:
	int getheight(Node* N){
		if(N==NULL)
		return 0;
			
	return N->height;
	}
	int getBalanceFactor(Node* N){
		if(N==NULL)
		return 0;
		
	return(getheight(N->left)-getheight(N->right));
	}
	int Max(int a,int b){
		return(a>b) ? a : b;
	}
	Node* Max(Node* root){
	if(root==NULL)
		return NULL;
	else if(root->right==NULL)
		return root;
	else
		return Max(root->right);
}
	Node* makeEmpty(Node* root) {
        if (root == NULL)
            return NULL;
        {
            makeEmpty(root->left);
            makeEmpty(root->right);
            delete root;
        }
        return NULL;
    }
	Node* Create(long long int key,string name,string make,string color, string gear,int price,int year, string engine,int quantity){
		Node* N=new Node();
		N->key=key;
		N->left=NULL;
		N->right=NULL;
		N->height=1;
		N->setcolor(color);
		N->setengine(engine);
		N->setgear(gear);
		N->setmake(make);
		N->setname(name);
		N->setprice(price);
		N->setyear(year);
		N->setquantity(quantity);
	
		return N;
	}
	Node* Delete(Node* root,long long int data){
	Node* temp;
	if(root==NULL)
	cout<<"Not Found";
	else if(data<root->key)
	root->left=Delete(root->left,data);
	else if(data>root->key)
	root->right=Delete(root->right,data);	
	else{
		if(root->left && root->right){
			temp=Max(root->left);
			root->key=temp->key;
			root->left=Delete(root->left,root->key);
		}
		else{
			temp=root;
			if(root->left==NULL)
			root=root->right;
			else if(root->right==NULL)
			root=root->left;
			delete temp;
		}
	}return root;
}
	Node* rightRotate(Node* N){
		Node* X=N->left;
		Node* T2=X->right;
		
		X->right=N;
		N->left=T2;
		
		N->height=Max(getheight(N->left),getheight(N->right))+1;
		X->height=Max(getheight(X->left),getheight(X->right))+1;
		return X;
	}
	Node* leftRotate(Node* N){
		Node* y=N->right;
		Node* T2=y->left;
		
		y->left=N;
		N->right=T2;
		
		N->height=Max(getheight(N->left),getheight(N->right))+1;
		y->height=Max(getheight(y->left),getheight(y->right))+1;
		return y;
	}

	Node* Insert(Node* N,long long int key,string name,string make,string color, string gear,int price,int year, string engine,int quantity){
		
		if(N==NULL){

		return (Create(key,name,make,color,gear,price,year,engine,quantity));	
	}
		if(key<N->key){
			N->left=Insert(N->left,key,name,make,color,gear,price,year,engine,quantity);
		}else if(key>N->key){
			
			N->right=Insert(N->right,key,name,make,color,gear,price,year,engine,quantity);
		}
		else if(key==N->key){
		

			N->quantity++;
		
			return N;

		}
		N->height=1+Max(getheight(N->left),getheight(N->right));
		
		int balance=getBalanceFactor(N);
		if(balance>1 && key<N->left->key){
			return rightRotate(N);
		}
		if(balance<-1 && key>N->right->key){
			return leftRotate(N);
		}
		if(balance>1 && key>N->left->key){
			N->left=leftRotate(N->left);
			return rightRotate(N);
		}
		if(balance<-1 && key<N->right->key){
			N->right=rightRotate(N->right);
			return leftRotate(N);
		}
		return N;
	}

	void PreOrder(Node* root){
		if(root!=NULL){
			cout<<root->key<<" ";
			PreOrder(root->left);
			PreOrder(root->right);
		}
	}
	void InOrder(Node* root){
	//	cout<<"sa";
		if(root!=NULL){
			InOrder(root->left);
			cout<<root->key<<" ";
			cout<<root->getname()<<" ";
			cout<<root->getprice()<<" ";
			cout<<root->getquantity()<<endl;
			InOrder(root->right);
		}
	}
	int CheckDup(Node* root,int x){
		z=z+CheckDup(root->left,x);
		z=z+CheckDup(root->right,x);
		if(x==root->key){
			z++;
		}
		return z;
	}

int checkk(){
		string b;
		cout<<"\nHave you chosen a car or do you want to continue\n1. Proceed to payment\n2. Continue";
    	cin>>b;
		if(b=="1"){
			return 15;
		}
		else {
		return 0;}
		
	}
	
	void Inorder_search5(Node* root,long long int askcode,long long int tocode,long long int price1,long long int price2,string make,string name,string color,int year){
		if ( NULL == root )
        return;
     

    if (askcode < root->key )
        Inorder_search5(root->left, askcode, tocode,price1,price2,make,name,color,year);
     

    if ( askcode <= root->key && tocode >= root->key ){
    	if(root->getmake()==make && root->getname()==name && root->getyear()==year && root->getcolor()==color){
		if(root->getprice()<=price2 && root->getprice()>=price1)
     c++;
			if(c<=15){
    			Display(root);	
				}
    if(c==15){
    	c=checkk();
    
	}	
}
	}
   Inorder_search5(root->right, askcode, tocode,price1,price2,make,name,color,year);
	}
	
	void Inorder_search4(Node* root,long long int askcode,long long int tocode,long long int price1,long long int price2,string c1,string c2,string c3,string c4){
		if ( NULL == root )
        return;
     

    if (askcode < root->key )
        Inorder_search4(root->left, askcode, tocode,price1,price2,c1,c2,c3,c4);
     

    if ( askcode <= root->key && tocode >= root->key ){
    	if((root->getmake()==c1 || root->getname()==c1 || to_string(root->getyear())==c1 || root->getcolor()==c1 || c1=="0")&&(root->getmake()==c2 || root->getname()==c2 || to_string(root->getyear())==c2 || root->getcolor()==c2 || c2=="0")&&(root->getmake()==c3 || root->getname()==c3 || to_string(root->getyear())==c3 || root->getcolor()==c3 || c3=="0")&&(root->getmake()==c4 || root->getname()==c4 || to_string(root->getyear())==c4 || root->getcolor()==c4 || c4=="0")){
		if(root->getprice()<=price2 && root->getprice()>=price1)
     c++;
			if(c<=15){
    			Display(root);	
				
				}
    if(c==15){
    	c=checkk();
    
	}	
	}

	}
   Inorder_search4(root->right, askcode, tocode,price1,price2,c1,c2,c3,c4);
	}
	
	
	

	void Inorder_search3(Node* root,long long int askcode,long long int tocode,long long int price1,long long int price2,string c1,string c2,string c3){
		if ( NULL == root )
        return;
     

    if (askcode < root->key )
        Inorder_search3(root->left, askcode, tocode,price1,price2,c1,c2,c3);
     

    if ( askcode <= root->key && tocode >= root->key ){
    	if((root->getmake()==c1 || root->getname()==c1 || to_string(root->getyear())==c1 || root->getcolor()==c1 || c1=="0")&&(root->getmake()==c2 || root->getname()==c2 || to_string(root->getyear())==c2 || root->getcolor()==c2 || c2=="0")&&(root->getmake()==c3 || root->getname()==c3 || to_string(root->getyear())==c3 || root->getcolor()==c3 || c3=="0")){
		if(root->getprice()<=price2 && root->getprice()>=price1){
			 c++;
			if(c<=15){
    			Display(root);	
				}
    if(c==15){
    	c=checkk();
    
	}
	}
}
	}
   Inorder_search3(root->right, askcode, tocode,price1,price2,c1,c2,c3);
	}

	
	void Inorder_search2(Node* root,long long int askcode,long long int tocode,long long int price1,long long int price2,string c1,string c2){
		if ( NULL == root )
        return;
     

    if (askcode < root->key )
        Inorder_search2(root->left, askcode, tocode,price1,price2,c1,c2);
     

    if ( askcode <= root->key && tocode >= root->key ){
    	if((root->getmake()==c1 || root->getname()==c1 || to_string(root->getyear())==c1 || root->getcolor()==c1 || c1=="0")&&(root->getmake()==c2 || root->getname()==c2 || to_string(root->getyear())==c2 || root->getcolor()==c2 || c2=="0")){
		if(root->getprice()<=price2 && root->getprice()>=price1)
     c++;
			if(c<=15){
    			Display(root);	
				
				}
    if(c==15){
    	c=checkk();
    
	}	
	}

	}
   Inorder_search2(root->right, askcode, tocode,price1,price2,c1,c2);
	}
	
	
	
	
	void Inorder_search(Node* root,long long int askcode,long long int tocode,long long int price1,long long int price2,string c1){
		if ( NULL == root )
        return;
     
	string wer;
    if (askcode < root->key )
        Inorder_search(root->left, askcode, tocode,price1,price2,c1);
     

    if ( askcode <= root->key && tocode >= root->key ){
    	if(root->getmake()==c1 || root->getname()==c1 || to_string(root->getyear())==c1 || root->getcolor()==c1){
		if(root->getprice()<=price2 && root->getprice()>=price1){
     c++;
			if(c<=15){
    			Display(root);	
				
				}
    if(c==15){
    	c=checkk();
	}	
}
	}
	}
   Inorder_search(root->right, askcode, tocode,price1,price2,c1);
	}
	
	void SearchSingle(Node* root,long long int code){
	if ( NULL == root )
        return;
    if (code < root->key )
        SearchSingle(root->left, code);
    if ( code == root->key)
    	Display(root);	
    	SearchSingle(root->right, code);
	}
	
	void price_search(Node *root,long long int price1,long long int price2){
	if ( NULL == root )
        return;
     
    if (price1 < root->key )
        price_search(root->left,price1,price2);
     

    if ( price1 <= root->key && price2 >= root->key ){
     	c++;
			if(c<=15){
    			Display(root);	
				
				}
    if(c==15){
    	c=checkk();
    
	}	
	
	}

   price_search(root->right,price1,price2);
	}
	
	void Display(Node *root){
		aaa=1;
	cout<<"Car Name: "<<root->getmake();
	cout<<" "<<root->getname()<<" ";
	cout<<"Model: "<<root->getyear()<<" ";
	cout<<"Price: "<<root->getprice()<<" ";
	cout<<"Engine: "<<root->getengine()<<" ";
	cout<<"Color: "<<root->getcolor()<<" ";
	cout<<root->getgear()<<" ";
	cout<<" "<<" "<<"Product Key: "<<root->key;
	cout<<endl;
}
};