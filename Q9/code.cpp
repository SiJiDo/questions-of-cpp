#include <iostream>
#include <fstream>

using namespace std;
int main(){
	fstream infile("1.txt");
	fstream outfile("2.txt",ios_base::app);

	infile >> noskipws;
	while(infile >> word){
		outfile << word;
	}
	
	return 0;
}
