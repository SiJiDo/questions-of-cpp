#include <iostream>
using namespace std;

class Complex{
	public : float a;
	public : float b;	
};

ostream& operator << (ostream& os, Complex& co){
	if(co.b >= 0){
		os << co.a << "+" << co.b << "i"; 
	}
	else{
		os << co.a << co.b << "i";
	}
	return os;
}

istream& operator >> (istream& is, Complex& co){
	is >> co.a >> co.b;
	return is;
}

int main(){
	Complex complex;
	cin >> complex;
	cout << complex;
	return 0;
}
