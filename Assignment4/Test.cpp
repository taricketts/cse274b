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


int main() {
  BinarySearchTree<BSTNode1<int>, int> tree;
  DLList<int> list;
  tree.add(15);
  tree.add(14);
  tree.add(13);
  tree.add(17);
  tree.add(18);
  cout << tree.height() << endl;
  cout << tree.height2() << endl;
  cout << tree.isBalanced() << endl;
  //list = tree.getLE(15);
  //cout << list.get(0) << endl;

return 0;
}



