#include <iostream>
using namespace std;

struct s1{float a1; int a2;};
struct s2{float a1; int a2;}x1;
//struct s3{float a1; int a2;}
struct {float a1; int a2;}x2;

int main(){
	s1 t1;
	t1.a1 = 5.0;
	cout << t1.a1 << endl;
	x1.a2 = 3;
	cout << x1.a2 << endl;
	x2.a1 = 2.33;
	cout << x2.a1 << endl;
	return 0;
}
