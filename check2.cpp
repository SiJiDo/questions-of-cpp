#include <iostream>
using namespace std;

int main(){
	int array[3] = {22,33,44};
	int *p = array;
	//cout << *p[1] << endl;
	//cout << *(p++) << endl;
	cout << *(++p) << endl;
	//cout << *p[2] << endl;  
	return 0;
}
