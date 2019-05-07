#include <iostream>
#include <cstring>
using namespace std;

class animal{
	private : int age;
	private : char sex[10];
	public : animal(int age, char* sex){
		this->age = age;
		strcpy(this->sex, sex);
	}
	
	public : void sound(){
		cout << "animal's sound" << endl;
	}
	public : void showInfo(){
		cout << "age is: " << age << endl << "sex is: " << sex <<endl;
	}
};

class dog : public animal{
	private : char color[20];
	public : dog(int age, char* sex, char* color):animal(age, sex){
		strcpy(this->color, color);
	}
	public : void sound(){
		cout << "wangwang" << endl;
	}
	public : void showInfo(){
		animal::showInfo();
		cout << "color is:" << color <<endl;
	}
};



int main(){
	animal a(2,"female");
	a.sound();
	a.showInfo();
	dog d(3,"male", "blue");
	d.sound();
	d.showInfo();
	return 0;
}
