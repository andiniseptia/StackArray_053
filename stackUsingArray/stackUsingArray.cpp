#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//construktor 
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceed the Limit" << endl;
			return 0;
		}
		top++;  //step 2
		stack_array[top] = element;  //step 3
		cout << endl;;
		cout << element << " ditambahkan(pushed)" << endl;

		return element;
	}
};
