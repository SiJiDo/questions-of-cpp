#include <iostream>
#include <string>
using namespace std;

class Car{
	private : char *name;
	private : int value;
	private : char *color;
	private : int oil;
	
	public : void setInfo(char* name, int value, char* color, int oil){
		this->name = name;
		this->value = value;
		this->color = color;
		this->oil = oil;
	} 
	
	public : void run(){
		cout << "car run, you cost 5 oil" << endl;
		oil = oil - 5;
	}
	public : void showInfo(){
		cout << "name is: " << name << endl;
		cout << "value is: " << value << endl;
		cout << "color is: " << color << endl;
		cout << "oil is: " << oil << endl; 
	}
	
	public : int getoil(){
		return oil;
	}
};

int main(){
	Car c;
	c.setInfo("auto", 20000, "blue", 67);
	c.showInfo();
	c.run();
	cout << c.getoil() << endl;
	c.showInfo();
	return 0;
}
