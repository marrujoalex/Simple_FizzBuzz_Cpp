/*
* This file is used as a slight practice in C++
* for the simple use of FizzBuzz techniques.
* Date: 05/13/2013
* Updated: 09/03/2015
*/

#include <iostream>
using namespace std;

int main() {

	for (int i=1; i < 101; ++i) {
		if (((i % 15) == 0)) // i % 3 == 0 && i % 5 == 0 because 3 and 5 are prime and no gcd exists beyond 1, means when 3 and 5 are both divisble means i % 15 == 0
			cout << "FizzBuzz\n";
		else if ((i % 5) == 0)
			cout << "Buzz\n";
		else if ((i % 3) == 0)
			cout << "Fizz\n";
		else cout << i << endl;
	}
	return 0;
}
