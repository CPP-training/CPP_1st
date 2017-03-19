
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<string>
#include "Class1.h"


using namespace std;

class Ahmad {
public:
	Ahmad(string z) {
		setName (z);

	}
	void setName(string x) {
		name = x;
	}

	string getName() {
		return name;
	}
	
private:
	string name;

};

int main(){
	
	Ahmad bo("this is my name");
	//bo.setName("This is the first class I have ever created in C++");
	cout << bo.getName()<<endl;
	Class1 boo;
	getch();
}


