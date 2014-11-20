/*
 * Test.cpp
 *
 *  Created on: Nov 19, 2014
 *      Author: Tom
 */

#include <iostream>
#include "ChainedHashTable.h"
#include "DataStructureTester.h"
#include "LinearHashTable.h"
#include "BinarySearchTree.h"
#include "RedBlackTree.h"

using namespace std;
using namespace ods;

double GetAverage(int in[]) {
	int length = sizeof(in) / 4;
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += in[i];
	}
	double average = ((double) (sum)) / length;
	return average;
}

int main() {
	DataStructureTester<BinarySearchTree<BSTNode1<int>, int> > testBST;
	DataStructureTester<RedBlackTree<RedBlackNode1<int>, int> > testRBT;
	DataStructureTester<ChainedHashTable<int> > testCHT;
	DataStructureTester<LinearHashTable<int> > testLHT;

	int chainDSA[20];
	int chainDSR[20];
	int chainDSF[20];
	int chainDRA[20];
	int chainDRR[20];
	int chainDRF[20];
	int linearDSA[20];
	int linearDSR[20];
	int linearDSF[20];
	int linearDRA[20];
	int linearDRR[20];
	int linearDRF[20];
	int binaryDSA[20];
	int binaryDSR[20];
	int binaryDSF[20];
	int binaryDRA[20];
	int binaryDRR[20];
	int binaryDRF[20];
	int redDSA[20];
	int redDSR[20];
	int redDSF[20];
	int redDRA[20];
	int redDRR[20];
	int redDRF[20];
/*
	int x = testBST.DoSequentialAdd(1, 10, 1);
	int z = testBST.DoSequentialFind(1, 10, 1);
	int y = testBST.DoSequentialRemove(1, 10, 1);
	//int q = testRBT.DoRandomAdd(5);
	//int c = testRBT.DoRandomFind(5);
	//int v = testRBT.DoRandomRemove(5);


	cout << "Time add = " << (x) << endl;
	cout << "Time remove = " << (y) << endl;
	cout << "Time find = " << (z) << endl;
	//cout << "Time rnd add = " << (q) << endl;
	//cout << "Time rnd remove = " << (v) << endl;
	//cout << "Time rnd find = " << (c) << endl;
*/

	for (int p = 0; p < 20; p++) {
		binaryDSA[p] = testBST.DoSequentialAdd(1, 50000, 1);
		binaryDSF[p] = testBST.DoSequentialFind(1, 50000, 1);
		binaryDSR[p] = testBST.DoSequentialRemove(1, 50000, 1);
		binaryDRA[p] = testBST.DoRandomAdd(50000);
		binaryDRF[p] = testBST.DoRandomFind(50000);
		binaryDRR[p] = testBST.DoRandomRemove(50000);

		redDSA[p] = testRBT.DoSequentialAdd(1, 50000, 1);
		redDSF[p] = testRBT.DoSequentialFind(1, 50000, 1);
		redDSR[p] = testRBT.DoSequentialRemove(1, 50000, 1);
		redDRA[p] = testRBT.DoRandomAdd(50000);
		redDRF[p] = testRBT.DoRandomFind(50000);
		redDRR[p] = testRBT.DoRandomRemove(50000);

		chainDSA[p] = testCHT.DoSequentialAdd(1, 50000, 1);
		chainDSF[p] = testCHT.DoSequentialFind(1, 50000, 1);
		chainDSR[p] = testCHT.DoSequentialRemove(1, 50000, 1);
		chainDRA[p] = testCHT.DoRandomAdd(50000);
		chainDRF[p] = testCHT.DoRandomFind(50000);
		chainDRR[p] = testCHT.DoRandomRemove(50000);

		linearDSA[p] = testLHT.DoSequentialAdd(1, 50000, 1);
		linearDSF[p] = testLHT.DoSequentialFind(1, 50000, 1);
		linearDSR[p] = testLHT.DoSequentialRemove(1, 50000, 1);
		linearDRA[p] = testLHT.DoRandomAdd(50000);
		linearDRF[p] = testLHT.DoRandomFind(50000);
		linearDRR[p] = testLHT.DoRandomRemove(50000);

		cout << p+1 << "/20 complete..." << endl;
	}

	cout << "Average DSAs.. " << endl;
	cout << "Chain = " << GetAverage(chainDSA) << endl;
	cout << "Linear = " << GetAverage(linearDSA) << endl;
	cout << "BST = " << GetAverage(binaryDSA) << endl;
	cout << "RBT = " << GetAverage(redDSA) << endl;
	cout << "-------------------------" << endl;
	cout << "Average DSRs.. " << endl;
	cout << "Chain = " << GetAverage(chainDSR) << endl;
	cout << "Linear = " << GetAverage(linearDSR) << endl;
	cout << "BST = " << GetAverage(binaryDSR) << endl;
	cout << "RBT = " << GetAverage(redDSR) << endl;
	cout << "-------------------------" << endl;
	cout << "Average DSFs.. " << endl;
	cout << "Chain = " << GetAverage(chainDSF) << endl;
	cout << "Linear = " << GetAverage(linearDSF) << endl;
	cout << "BST = " << GetAverage(binaryDSF) << endl;
	cout << "RBT = " << GetAverage(redDSF) << endl;
	cout << "-------------------------" << endl;
	cout << "Average DRAs.. " << endl;
	cout << "Chain = " << GetAverage(chainDRA) << endl;
	cout << "Linear = " << GetAverage(linearDRA) << endl;
	cout << "BST = " << GetAverage(binaryDRA) << endl;
	cout << "RBT = " << GetAverage(redDRA) << endl;
	cout << "-------------------------" << endl;
	cout << "Average DRRs.. " << endl;
	cout << "Chain = " << GetAverage(chainDRR) << endl;
	cout << "Linear = " << GetAverage(linearDRR) << endl;
	cout << "BST = " << GetAverage(binaryDRR) << endl;
	cout << "RBT = " << GetAverage(redDRR) << endl;
	cout << "-------------------------" << endl;
	cout << "Average DRFs.. " << endl;
	cout << "Chain = " << GetAverage(chainDRF) << endl;
	cout << "Linear = " << GetAverage(linearDRF) << endl;
	cout << "BST = " << GetAverage(binaryDRF) << endl;
	cout << "RBT = " << GetAverage(redDRF) << endl;
	cout << "-------------------------" << endl;

	return 0;
}

