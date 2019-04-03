#include <iostream>
#include "Student.hpp"

using namespace std;

int main()
{

	Student a("a", 1);
	cout << a.getName() << " : " << a.getPid() << endl;

	cout << "Hello CSE 100!" << endl; //endl is the \n character.
	return 0;
}