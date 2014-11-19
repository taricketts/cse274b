/*
 * List.h
 *
 *  Created on: Nov 19, 2014
 *      Author: Tom
 */

#ifndef LIST_H_
#define LIST_H_

namespace ods {

// this is an abstract class

template<class T>
class List {
public:
  virtual T find(T x) = 0;
  virtual bool remove(T x) = 0;
  virtual bool add(T x) = 0;
};
}

#endif /* LIST_H_ */
