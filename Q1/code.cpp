#include <iostream>
using namespace std;

struct student{
	char name[20];
	int id;
	float Chinese;
	float Math;
	float English;
	float total;
};

int main(){
	student *table;
	int number, i;
	cin >> number;
	table = new student[number];
	for(i = 0; i < number; i++){
		cin >> table[i].name >> table[i].id >> table[i].Chinese >> table[i].Math >> table[i].English;
		table[i].total = table[i].Chinese + table[i].Math + table[i].English;
	}
	for(i = 0; i < number; i++){
		cout << table[i].name << '\t' << table[i].id << '\t' << table[i].Chinese << '\t' << table[i].Math << '\t' << table[i].English << '\t' << table[i].total << endl;
	}
	
	return 0;
}
