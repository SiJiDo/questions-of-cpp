#include <iostream>
using namespace std;

float func(float *p[3][]){
	return p[1][1];
}

int main()
{
	float array[3][2] = {{22.1,33.2}, {44.3,55.4}, {77.5,77.6}};
	float *p[3] = {array[0], array[1], array[2]};
	//int array[3] = {11,22,33};
	float result = func(p);
	cout << result;
    return 0;
}

