#include <iostream>
using namespace std;

class class1{
    public: char *name;
    private: int age;
    public: void getInfo(){
        cout << "name is: " << name << ", age is : " << age << endl;
    }
    public: class1(char *name, int age){
    	this->name = new char[20];
    	this->name = name;
		this->age = age;
	}
	friend int getage(class1);
	//int getage(class1);
	//friend int getage();
	//friend int getage(class1&);
};
int getage(class1 cl){
    return cl.age;
}

int main(){
	class1 cl("Toney", 24);
	cout << getage(cl);
	return 0;
}
