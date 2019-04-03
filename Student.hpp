#include <iostream>

using namespace std;

typedef int id;

class Student {

	public:
		Student(string s, id i):name(s),pid(i){};
		~Student(){};
		string getName();
		id getPid();
		void setName(string newName);
		void setPid(id newPid);

	private:
		string name;
		id pid;


}; // End of class