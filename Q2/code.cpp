#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int number, i;
	char *str[50];
	char *p;
	cin >> number;
	
	for(int i = 0; i < number; i++){
		str[i] = new char[50];
	}
	
	for(i = 0; i < number; i++){
		cin >> str[i];
	}
	
	for(i = 0; i < number; i++){
		for(int j = i + 1; j < number; j++){
			
			if(strcmp(str[i],str[j]) > 0){
				p = str[i];
				str[i] = str[j];
				str[j] = p;
			}
		}
	}
	
	for(i = 0; i < number; i++){
		cout << str[i] << endl;
	}
	
	 
	return 0;
}
