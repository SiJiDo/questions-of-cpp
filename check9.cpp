#include <iostream>
using namespace std;

int main(){
	struct st{char c; int i;};
	union un{int i;long l;};
	enum en{I, love, China};
	st t1;
	un t2;
	en t3;
	//cout << t1;
	t2.l=23;cout << t2.i;
	//t3=Chinese;
	//t3 = t1.c;
}
