#include <iostream>
using namespace std;

class class1{
    public: char *name;
    private: int age;
    public: void getInfo(char *msg){
        cout << "you say:" << msg << " to " << name << ". It age is : " << age;
    }
    public: void setinfo(char *name, int age){
    	this->name = new char[20];
    	this->name = name;
		this->age = age;
	}
    public: int getage(){
		return age;
	}
};

int main(){
	class1 cl;
	cl.setinfo("jack", 18);
	
	cl.name = "Rose";
	//cl.age = 20;
	cout << cl.getage();
	cl.getInfo("too young too simple");
	
	return 0; 
} 
