#include <iostream>
using namespace std;
// function calculates the result every time separately from previous calculations;

// void returns smth

int large_number = 0;
void print(int) ;
void print (int, int);

// the loop counts how many times to repeat and gives a new number every time.
int main (){

	for(int i=0; i<10; i++) {
	
		large_number=large_number+i;
		// print(i, large_number);
		cout << "Printing with one argument" << endl;
		print(i);
	}
	
// last number we want to see calculated
// print (large_number);

return 0;

}
void print(int num) {
	cout << "printing x5 " << (num * 5) << " and total no total was given" << endl;
} 

void print(int num, int total){
	cout << "printing x5 " << (num * 5) << " and total " << total << endl;
	
}