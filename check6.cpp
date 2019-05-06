#include <iostream>
using namespace std;

int main(){
	float *f1, **f2;
	f1 = new float[5];
	f2 = new float *[3];
	//int *f3;	f3 = new int;
	for(int i =0; i < 3; i++){
	    f2[i] = new float[3];
	}
	//delete []f1;
	/*
	for(int i = 0; i < 3; i++){
		delete []f2[i];
	}
	delete []f2;
	*/
}
