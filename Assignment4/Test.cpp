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

void test1(){
	BinarySearchTree<BSTNode1<int>, int> tree;
	  tree.add(15);
	  tree.add(14);
	  tree.add(13);
	  tree.add(17);
	  tree.add(18);
	  cout <<"Original height function: "<< tree.height() << endl;
	  cout <<"New height function: "<< tree.height2() << endl;
	  if(tree.isBalanced() == 1){
		  cout << "The tree is balanced" << endl;
	  }
	  else{
		  cout << "The tree is not balanced" << endl;
	  }
}


int main() {
  test1();
  BinarySearchTree<BSTNode1<int>, int> tree;
  DLList<int> list;
  tree.add(15);
  tree.add(14);
  tree.add(13);
  tree.add(17);
  tree.add(18);
  //list = tree.getLE(15);
  //cout << list.get(0) << endl;

return 0;
}



