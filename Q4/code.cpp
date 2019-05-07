#include <iostream>
#include <cstring>
using namespace std;

class Student{
	private : int id;
	private : char name[20];
	private : int grade;
	public : int static count;
	
	public : void showInfo(){
		cout << "id is:" << id << ", name is:" << name << ", grade is:" << grade << endl;
	}
	
	public : static void getcount(){
		cout << "count is: " << count << endl; 
	}
	
	public : Student(){
		count++;
		this->id = 999;
		strcpy(this->name, "lisi");
		grade = 16;
	}
	
	public : Student(int id, char* name, int grade){
		count++;
		this->id = id;
		strcpy(this->name,name);
		this->grade = grade;
	}
	
	public : ~Student(){
		showInfo();
	}
};

int Student::count;

int main(){
	Student stu1;
	Student stu2(1,"zhangsan",17);
	Student::getcount();
	return 0;
}
