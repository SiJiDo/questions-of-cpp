#include <iostream>
#include <cstring>
using namespace std;

class A{
	private : int a;
	//protected : int a;
	//public : int a;
	protected : int b;
	public : int c;
	
	public : A(int a, int b, int c){
		this->a = a;
		this->b = b;
		this->c = c;
	}
	
	public : void showInfo(){
		cout << "a is: " << a << endl << "b is: " << b << endl << "c is: " << c << endl;
	}
};

class B :A {
//class B : public A{
//class B : protected A{
//class B : private A{
	public : B(int a, int b, int c):A(a,b,c){}
	public : void showInfo(){
		cout << "b is: " << b << endl << "c is: " << c << endl;
		//cout << "a is: " << a << endl << "b is: " << b << endl << "c is: " << c << endl;
	}
};



int main(){
	A a(1,2,3);
	a.showInfo();
	cout << a.c << endl;
	B b(4,5,6);
	b.showInfo();
	//cout << b.c;
	return 0;
}
