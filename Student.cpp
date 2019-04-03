#include "Student.hpp"

string Student::getName() {
	return name;
}

id Student::getPid() {
	return pid;
}

void Student::setName(string newName) {
	name = newName;
}

void Student::setPid(id newPid) {
	pid = newPid;
}