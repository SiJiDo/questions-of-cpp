#include <iostream>
using namespace std;

int main(){
	int array[3][3] ={{1,2},{5,6},{3,4}};
	int *p[3] = {array[0], array[1], array[2]};
	cout << *p[2] << "," << *p[0]++ << ","  << p[1] << endl;
	return 0;
}
