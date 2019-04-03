# cse100sp19_discussion1_demo
This is the demo present in discussion 1 (with additional materials) in April 3rd.

## Information
This is the 2nd commit containing full implementation of Student class and main.cpp use Student class to make an Student object.

## How to Compile and Run your code Right Now (without a Makefile)

### Compile Separately
The below command compiles Student.o object files
```
g++ -std=c++11 -g -Wall Student.cpp -c
```

The below command compiles main.cpp and name output executable as "main"
```
g++ -std=c++11 -g -Wall main.cpp Student.o -o main
```

### Compile in one line
One of you in 9am discussion suggests that we can directly compile main, which is absolutely doable. The command is as below.
```
g++ -std=c++11 -g -Wall main.cpp Student.cpp -o main
```

## How to Run your code
The below command runs the current executable
```
./main
```
