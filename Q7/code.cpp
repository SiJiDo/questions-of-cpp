#include <iostream>
using namespace std;

class Complex{
	public : float Real;
	public : float Image;
	public : Complex(float Real, float Image){
		this->Real = Real;
		this->Image = Image;
	}
	public : Complex(){} 
	public : 
	void display(){
		if(Image > 0){
			cout << Real << "+" << Image << "i" << endl;
		}
		else{
			cout << Real << Image << "i" << endl;
		}
	}
	Complex& operator = (Complex& comp){
		Real = comp.Real;
		Image = comp.Image;
		return *this;
	}
	Complex& operator + (Complex& comp){
		Complex tmp;
		tmp.Real = Real + comp.Real;
		tmp.Image = Image + comp.Image;
		//cout << tmp.Real << "+" << tmp.Image << "i" << endl;
		return tmp;
	}
	Complex& operator + (float number){
		Complex tmp;
		tmp.Real = Real + number;
		tmp.Image = Image;
		//cout << tmp.Real << "+" << tmp.Image << "i" << endl;
		return tmp;
	}
	
	Complex& operator - (Complex& comp){
		Complex tmp;
		tmp.Real = Real - comp.Real;
		tmp.Image = Image - comp.Image;
		return tmp;
	} 
};

int main(){
	Complex comp1(1,-2.5);
	Complex comp2(3,4);
	Complex comp3;
	comp1.display();
	comp2.display();
	comp3 = comp1 + comp2;
	comp3.display();
	return 0;
}
