#include <iostream>
using namespace std;

int main(void){
	char *p;
	char s[] = {"hello ntu"};
	p = s; cout << p[4];
	//p = &s; cout << p[4];
	//p = s[4]; cout << *p;
	//*p = s[4]; cout << *p;
	return 0;
}
