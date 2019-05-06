#include <iostream>
using namespace std;

class class1{
	public : static int number;
	private : static int count;
	public : const int DEFINENUMBER;
	public : static int add(int x, int y){
		return x + y;
	}
	public : class1():DEFINENUMBER(100){
		
	}
};

int class1::number;
int class1::count;

int main(){
	class1 cl1;
	class1 cl2;
	cl1.number = 23;
	cout << cl2.number << endl;
	cout << cl1.DEFINENUMBER << endl;
	cout << class1::add(cl1.DEFINENUMBER, cl2.number) << endl;
	//class1::count = 44;
	//cout << class1::count << endl;
	return 0;
}
