# cse100sp19_discussion1_demo
This is the demo present in discussion 1 (with additional materials) in April 3rd.

## Information
This is the final commit containing some additional object/reference/pointer practices in main.cpp that I did not get to talk about in discussions.

## How to Use this repo
Feel free to clone this repo to your local or even fork it to do more manipulations!

In your cloned local repo, you can use "git log" to see the full history of each different steps we went over in discussion, and use "git checkout <commit_number>" to checkout certain versions.


## Makefile
We do not really need the rules if we can make use of the Makefile implicit rules for x.cpp

The omitted rules for target main and Student.o are as below:
```
$(CXX) $(CXXFLAGS) main.cpp Student.o -o main
```

```
$(CXX) $(CXXFLAGS) Student.cpp -c
```

## How to Compile without a Makefile

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
