#include <iostream>
using namespace std;

class A{
	public : int a;
	public : A(int a){
		this->a = a;
	}
	public : void showA(){
		cout << "In class A, the var a is: " << a << endl;
	} 
};

class B{
	public : int a;
	public : B(int a){
		this->a = a;
	}
	public : void showB(){
		cout << "In class B, the var a is: " << a << endl;
	} 
};

class C: public A,public B {
	public : int a;
	public : C(int a, int b):A(a),B(b){
		this->a = 77;
	}
	
	public : void showC(){
		cout << "In class C, the var a is:" << a << endl;
	}
};
int main(){
	C c(1,2);
	c.showC();
	return 0;
}
