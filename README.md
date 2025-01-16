# CMPT225A1-Part-A
TEST
Assignment 1, Part A
Relevant Textbook Reading

Chapter 3, except linked lists (3.2.2, 3.5) and iterators (e.g., 3.3.1, 3.3.2, 3.3.3).
Chapter 1, Section 1.4; Section 1.6 up to end of 1.6.2; Section 1.6.

General

A deque is an ADT that generalizes queues and stacks, allowing insertions and deletions at both ends of a list of items. The C++ STL (standard template library) has a list class which provides this capability, using a linked list implementation. (It is described in Chapter 3, but this is not required reading at this time.) For this assignment, you are to complete a simple implementation of an array-based deque.

For the assignment, our implementation will be a C++ class called AList.  We will think of the list of items in an AList instance as having left and right ends, so the basic operations will be addLeft, addRight, deleteLeft and deleteRight.   So, for example, if L is an instance of the AList class, and the current list contents of L are <1,2,3>, then after executing the instruction L.addLeft(4), the list contents will be <4,1,2,3>.  If we then execute L.deleteRight(), the list contents will be <4,1,2>.

The AList implementation will use the "circular array" scheme, as in the array-based queue implementation we sketched in class. In the queue implementation, as elements are added or removed from the queue, the front and back indices tend to increase, and after some number of operations are likely to reach the upper end of the array and “wrap around”.   In the AList implementation, since additions and deletions to the list may occur at both left and right ends, the array indices of the left and right ends of the list contents can either get larger or smaller.   Thus, you have to manage “wrap around” at both ends of the array: when the indices pass zero, as well as when the reach the array size.
Files Provided

The most important file is the AList.h file, which contains a partial implementation of the AList class

AList.h 

Download AList.h - A partial implementation of the Alist class.

Some additional files will be added to help with your completion of the assignment.
For you to do

Complete the implementation of the AList class. If you don't have C++ experience, I recommend as a first step completing it just as a stack, then as a queue, and then finally adding the all the AList operations only after you have the basic circular-array queue implementation completely correct.
Design and implement a test program that demonstrates the correctness of an implementation of the AList class. Obviously, you should be writing various small test programs as you develop your AList implementation, but at the end you should be thinking of a suite of tests that will convince even a skeptic of the correctness.

Submission and Grading

Submit a .zip file containing your code to Coursys. A grading breakdown will be provided shortly.

Your submission should contain the following files (and probably only these - don't include anything that is not needed):

AList.h, your implementation,
AListTest.cpp, your test program,
Makefile

Some Details

Please name your files as in the above submission instruction;
Makefile: at least "make all" and "make clean" must work. Your Makefile should only compile your AList class and your test progam;
Your submission is due no later than 8:00 pm, Friday January 24
