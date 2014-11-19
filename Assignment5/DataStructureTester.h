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
#include "List.h"

using namespace std;

template<class T>
class DataStructureTester<T>{
protected:
	T list;
public:
	int DoSequentialAdd(int start, int end, int step);
	int DoRandomAdd(int n);
	int DoSequentialRemove(int start, int end, int step);
	int DoRandomRemove(int n);
	int DoSequentialFind(int start, int end, int step);
	int DoRandomFind(int n);
};

template<class T>
DataStructureTester<T>::DataStructureTester(){
}

template<class T>
DataStructureTester<T>::~DataStructureTester(){}

template<class T>
int DataStructureTester<T>::DoSequentialAdd<T>(int start, int end, int step){
	return 0;
}

template<class T>
int DataStructureTester<T>::DoSequentialRemove<T>(int start, int end, int step){
	return 0;
}

template<class T>
int DataStructureTester<T>::DoSequentialFind<T>(int start, int end, int step){
	return 0;
}

template<class T>
int DataStructureTester<T>::DoRandomAdd<T>(int n){
	return 0;
}

template<class T>
int DataStructureTester<T>::DoRandomRemove<T>(int n){
	return 0;
}

template<class T>
int DataStructureTester<T>::DoRandomFind<T>(int n){
	return 0;
}

#endif /* DATASTRUCTURETESTER_H_ */
