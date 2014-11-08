/*
 * Test.cpp
 *
 *  Created on: Nov 2, 2014
 *      Author: Tom
 */

#include <iostream>

#include "BinaryTree.h"
#include "BinarySearchTree.h"
#include "DLList.h"

using namespace std;
using namespace ods;

void test1() { // Test 1 includes questions 1 & 2
	BinarySearchTree<BSTNode1<int>, int> tree;
	tree.add(15);
	tree.add(14);
	tree.add(13);
	tree.add(17);
	tree.add(18);
	cout << "Original height function: " << tree.height() << endl;
	cout << "New height function: " << tree.height2() << endl;
	if (tree.isBalanced() == 1) {
		cout << "The tree is balanced" << endl;
	} else {
		cout << "The tree is not balanced" << endl;
	}

	cout << "Removing Nodes..." << endl;
	tree.remove(18);
	tree.remove(17);

	if (tree.isBalanced() == 1) {
		cout << "The tree is balanced" << endl;
	} else {
		cout << "The tree is not balanced" << endl;
	}
}

void test2() { // Test 2 includes questions 3 & 4
	BinarySearchTree<BSTNode1<int>, int> tree;
	tree.add(15);
	tree.add(14);
	tree.add(13);
	tree.add(17);
	tree.add(18);
	cout << "Testing getNode() for value 18: " << ((tree.getNode(18)->x))
			<< endl;
	DLList<int> list = tree.getLE(17);
	cout << "Listing all values from 17 and below in the binary tree:" << endl;
	for (int i = 0; i < list.size() - 1; i++) {
		cout << list.get(i) << endl;
	}
}

int main() {

	test1();
	test2();

	return 0;
}

