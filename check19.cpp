#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//ofstream file;file.open("1.txt");
	//ifstream file("1.txt");
	//fstream file("1.txt"); file.write("test",1024);
	ofstream file("1.txt"); file.read("test",1024);
	return 0;
}
