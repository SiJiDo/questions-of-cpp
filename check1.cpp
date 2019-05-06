#include <iostream>
using namespace std;

int main(void){
	int array[5] = {25,73,62,21,6};
	int a1=array[0];
	int *a2=&array[0];
	a1++;
	a2++;
	cout << a1 << endl;
	cout << *a2 << endl;
	return 0;
}
