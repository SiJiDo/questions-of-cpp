#include <iostream>
#include <cstring>
using namespace std;

class A{
	public : int a;
	public : A(int a){
		this->a = a;
	}
};

class B : virtual public A{
	public : B(int a):A(a){}
};

class C : virtual public A{
	public : C(int a):A(a){}
};

class D: public B,public C{
	public : D(int a, int b):B(a),C(b),A(b){}
	public : void showInfo(){
		cout << "a is:" << a << endl;
	}
};

int main(){
	D c(1,2);
	c.showInfo();
	return 0;
}
