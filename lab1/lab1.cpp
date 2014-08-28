// classes example
#include <iostream>
#include "rectangle.h"

using namespace std;

int main () {
  Rectangle rect;

  Rectangle &refRect = rect; // this creates a reference to the rect object.

  Rectangle rect2 = rect; // copies the object instead of making a reference like in java.

  Rectangle *pRect = new Rectangle; // this creates a pointer to a rectangle object.

  pRect->set_values(7, 8); // this is how you assign values for an object with a pointer. This will be required in some projects.

  rect.set_values (3,4);
  rect2.set_values (5,6);
  refRect.set_values (10, 5); // this overrides the previous rect.set_values() function and changes the dimensions to (10 ,5)

  cout << "area: " << rect.area() << endl; // endl is just like "System.out.println() + cout <<" or /n in java.
  cout << "area2: " << rect2.area() << endl;
  cout << "Pointer to rect " << pRect << endl; // This is the memory location of the object being pointed to.
  cout << "Area for pointer " << pRect->area() << endl;
  return 0;
}
