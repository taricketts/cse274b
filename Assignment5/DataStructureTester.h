/*
 * DataStructureTester.h
 *
 *  Created on: Nov 8, 2014
 *      Author: Tom
 */

#ifndef DATASTRUCTURETESTER_H_
#define DATASTRUCTURETESTER_H_

#include <ctime>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

namespace ods {

template<class H>
class DataStructureTester {
protected:
	H list;

public:
	DataStructureTester();
	~DataStructureTester();
	int DoSequentialAdd(int start, int end, int step);
	int DoRandomAdd(int n);
	int DoSequentialRemove(int start, int end, int step);
	int DoRandomRemove(int n);
	int DoSequentialFind(int start, int end, int step);
	int DoRandomFind(int n);
};

template<class H>
DataStructureTester<H>::DataStructureTester() {
}

template<class H>
DataStructureTester<H>::~DataStructureTester() {
}

template<class H>
int DataStructureTester<H>::DoSequentialAdd(int start, int end, int step) {
	clock_t t;
	t = clock();

	for (int i = start; i <= end; i += step) {
		list.add(i);
		//cout << "Added: " << list.find(i) << endl;
	}

	t = 1000 * (clock() - t) / CLOCKS_PER_SEC; // already converted to milliseconds here.
	int out = (int) t;
	return out;
}

template<class H>
int DataStructureTester<H>::DoSequentialRemove(int start, int end, int step) {
	int z = 0;
	clock_t t;
	t = clock();

	for (int i = start; i <= end; i += step) {
		z = list.find(i);
		list.remove(i);
		//cout << "Removed: " << z << endl;
	}

	t = 1000 * (clock() - t) / CLOCKS_PER_SEC; // already converted to milliseconds here.
	int out = (int) t;
	return out;
}

template<class H>
int DataStructureTester<H>::DoSequentialFind(int start, int end, int step) {
	int z = 0;
	clock_t t;
	t = clock();

	for (int i = start; i <= end; i += step) {
		z = list.find(i);
		//cout << "Found: " << z << endl;
	}

	t = 1000 * (clock() - t) / CLOCKS_PER_SEC; // already converted to milliseconds here.
	int out = (int) t;
	return out;
}

template<class H>
int DataStructureTester<H>::DoRandomAdd(int n) {
	clock_t t;
	int r = 0;
	srand(time(0));
	t = clock();
	for(int i = 0; i < n; i++){
		r = rand() % 50000 + 1;
		//cout << "Add: " << r << endl;
		list.add(r);
	}
	t = 1000 * (clock() - t) / CLOCKS_PER_SEC; // already converted to milliseconds here.
	int out = (int) t;
	return out;
}

template<class H>
int DataStructureTester<H>::DoRandomRemove(int n) {
	clock_t t;
	int r = 0;
	srand(time(0));
	t = clock();
	for(int i = 0; i < n; i++){
		r = rand() % 50000 + 1;
		//cout << "Remove: " << r << endl;
		list.remove(r);
	}
	t = 1000 * (clock() - t) / CLOCKS_PER_SEC; // already converted to milliseconds here.
	int out = (int) t;
	return out;
}

template<class H>
int DataStructureTester<H>::DoRandomFind(int n) {
	clock_t t;
	int r = 0;
	srand(time(0));
	t = clock();
	for(int i = 0; i < n; i++){
		r = rand() % 50000 + 1;
		//cout << "Finding: " << r << " " << list.find(r) << endl;
		list.find(r);
	}
	t = 1000 * (clock() - t) / CLOCKS_PER_SEC; // already converted to milliseconds here.
	int out = (int) t;
	return out;
}

}
#endif /* DATASTRUCTURETESTER_H_ */
