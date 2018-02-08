#include <iostream>
using namespace std;
// function calculates the result every time separately from previous calculations;
int num=0;

// void returns smth

void print(int num) {
	cout << "printing " << (num * 5) << endl;
}

// the loop counts how many times to repeat and gives a new number for num every time.
int main (){

for(int i=0; i<10; i++) {
	print (i);
}
	
// last number we want to see calculated
print (1000);

return 0;

}