#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
long int generate_single(string a){
		long int i=0;
	long long int colorcode=0;
		while(i<a.length()){
	//	cout<<color[i]<<" ";
	//	printf("%d\n",name[i]);
		colorcode=colorcode+a[i]*pow(13,i);
	//	cout<<colorcode<<" ";
		colorcode=colorcode%99;
		i++;
	}
//	cout<<colorcode<<" ";
	return colorcode;
}
long long int Generate_CodeMake(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(c);
	B=generate_single(a);
	C=generate_single(b);
	D=generate_single(d);
	E=generate_single(e);
//	cout<<D<<" "<<B<<" "<<C<<" "<<A<<" "<<E<<"  ";
	F=D+B*100+C*10000+A*1000000+E*100000000;
	//cout<<F<<" ";
	return F;
}
long long int Generate_CodeName(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(c);
	B=generate_single(a);
	C=generate_single(b);
	D=generate_single(d);
	E=generate_single(e);
	F=D+B*100+C*10000+E*1000000+A*100000000;
	return F;
}
long long int Generate_CodePrice(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(c);
	B=generate_single(a);
	C=generate_single(b);
	D=generate_single(d);
	E=generate_single(e);
	F=B+D*100+E*10000+A*1000000+C*100000000;
	return F;
}
long long int Generate_CodeYear(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(c);
	B=generate_single(a);
	C=generate_single(b);
	D=generate_single(d);
	E=generate_single(e);
	F=D+E*100+C*10000+A*1000000+B*100000000;
	return F;
}
long long int Generate_CodeColor(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(c);
	B=generate_single(a);
	C=generate_single(b);
	D=generate_single(d);
	E=generate_single(e);
	F=B+C*100+E*10000+A*1000000+D*100000000;
	return F;
}
long long int Generate_CodeGeneral(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(a);//name
	B=generate_single(b);//year
	C=generate_single(c);//price
	D=generate_single(d);//color
	E=generate_single(e);//make
	F=E+D*100+C*10000+B*1000000+A*100000000;
	return F;
}
long long int Generate_CodeGeneral1(string a,string b, string c, string d,string e){
	long long int A=0,B=0,C=0,D=0,E=0;
	long long int F=0;
	A=generate_single(a);//name
	B=generate_single(b);//year
	C=generate_single(c);//price
	D=generate_single(d);//color
	E=generate_single(e);//make
	F=E+D*100+C*10000+B*1000000;
	F=F*100;
	return F;
}
