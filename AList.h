#ifndef ALIST_H
#define ALIST_H

#include <iostream>
using namespace std;

template <typename Object>
class AList 
{
  public:
    AList()
      {  
         theCapacity = 12 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         left = 0 ; // array index of location just before the left-most list element 
         right = 1 ; // array index just past the right-most list element
      }
      
    ~AList( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }
    void clear( ){
        // remove all list contents 
        // 
        // Implement this...
        //std::fill(objects, objects+theCapacity, 0);
        theSize = 0;
        left = 0;
        right = 1;
    }

    // Operations 

    void addLeft( const Object x )// Insert a new object at the left end 
    {
	  // Implement this....
        theSize ++;
        objects[left] = x;
        left = (left - 1 + theCapacity) % theCapacity;

    }

    void addRight( const Object x )// Insert a new object at the right end
    {
        theSize ++ ;
	      objects[right] = x ;
        right = (right+1) % theCapacity ;
    }

    Object removeRight( )// Remove and return the object at the right end
    {
        // Implement this 
        theSize --;
        right = (right - 1 + theCapacity) % theCapacity;
        return objects[right];

        
    }

    Object removeLeft( )// Remove and return the object at the left end
    {
        // Implement this 
        theSize--;
        left = (left + 1) % theCapacity;
        return objects[left];
    }

    void display() const // print out the contents of the deque
    {
       if (empty()) {
        std::cout << "AList is empty" << std::endl;
      } 
      int index = (left + 1) % theCapacity; // Start from the logical first element
      for (int i = 0; i < theSize; ++i) {
        std::cout << objects[index] << (i < theSize - 1 ? ", " : "");
        index = (index + 1) % theCapacity; // Move to the next logical element
      }
      std::cout << std::endl;
      
      //Raw Display
      // std::cout << "Raw objects array: ";
      // for (int i = 0; i < theCapacity; ++i) {
      //   std::cout << objects[i] << (i < theCapacity - 1 ? ", " : "");
      // }
      // std::cout << std::endl;


    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {

      std::cout << "Elements in the AList: ";
      
      int index = (left + 1) % theCapacity; // Start from the logical first element
      for (int i = 0; i < theSize; ++i) {
        std::cout << objects[index] << (i < theSize - 1 ? ", " : "");
        index = (index + 1) % theCapacity; // Move to the next logical element
      }
      std::cout << std::endl;

      // Implement this. 
      std::cout << "theSize " << theSize << std::endl;
      std::cout << "Left " << left << std::endl;
      std::cout << "Right " << right << std::endl;
      std::cout << "theCapacity " << theCapacity << std::endl;

      //Raw Display
      std::cout << "Raw objects array: ";
      for (int i = 0; i < theCapacity; ++i) {
        std::cout << objects[i] << (i < theCapacity - 1 ? ", " : "");
      }
      std::cout << std::endl << std::endl;


      
    }


  private:
    int theSize;
    int left;
    int right;
    int theCapacity;
    Object * objects;
};

#endif
