#include <iostream>
#include "BinaryHeap.h"
#include "utils.h"

using namespace std;
using namespace ods;

int main(string args[]){
	
	BinaryHeap<int> b;

	for (int i = 2; i <= 10; i += 2){
		b.add(i);
	}

	cout << "Min Value is: " << b.findMin() << endl;
	cout << "Removing 2..." << endl;

	b.remove(0);

	if (b.isHeap() == true)
		cout << "This is a heap." << endl;
	else
		cout << "This is not a heap" << endl;

	cout << "New min is: " << b.findMin() << endl;

	cout << "Removing value at the last slot.." << endl;

	cout << b.remove(3) << endl;

	cout << "Removing values so that 8 is min... " << endl;

	b.remove(0);
	b.remove(0);

	cout << "New min, and only value is : " << b.findMin() << endl;

	if (b.isHeap() == true)
		cout << "This is a heap." << endl;
	else
		cout << "This is not a heap" << endl;

	cout << "Test." << endl;
	system("pause"); // this function is used to keep the console window up.
	return 0;
}