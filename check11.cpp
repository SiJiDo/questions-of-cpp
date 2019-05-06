#include <iostream>
using namespace std;

class class1{
    public: char *name;
    private: int age;
    
    public: class1(){
    	this->name = new char[20];
    	this->name = "Tom";
    	this->age = 17;
	}
    
    public: class1(char *name, int age){
    	this->name = new char[20];
    	this->name = name;
		this->age = age;
	}
	
	public: void getInfo(){
        cout << "name is " << name << ", age is : " << age;
    }
    public: ~class1(){
    	cout << "baibai";
	}
	/*
	public: ~class1(){
		cout << "goodbye";
	}
	*/
};

int main(){
	class1 cl1, cl2("Jack", 18);
	return 0;
}
