#include <iostream>
#include "Student.hpp"

using namespace std;

int main()
{
	// Object a
	Student a("a", 1);

	// Reference b
	Student & b = a;
	b.setName("changed by b");
	b.setPid(2);

	cout << a.getName() << " : " << a.getPid() << endl;
	cout << b.getName() << " : " << b.getPid() << endl;

	// Pointer c
	Student * c = new Student("c", 3);

	cout << c << endl;
	cout << (*c).getName() << " : " << (*c).getPid() << endl;
	//-> is used by pointers to call methods of objects
	cout << c->getName() << " : " << c->getPid() << endl;	

	cout << "--------------" << endl;	

	// More Manipulations!
	b = *c;
	Student d = a;
	// Think about what the output should be before you run the program!
	cout << a.getName() << " : " << a.getPid() << endl;
	cout << b.getName() << " : " << b.getPid() << endl;
	cout << c->getName() << " : " << c->getPid() << endl;
	cout << d.getName() << " : " << d.getPid() << endl;

	cout << "--------------" << endl;
	cout << "Think about what the output should be before you run the program!" << endl;
	cout << "Hello CSE 100!" << endl; //endl is the \n character.
	return 0;
}