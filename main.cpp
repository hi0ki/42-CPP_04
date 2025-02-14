#include <iostream>
using namespace std;

class base {
public:
    virtual void fun_1(){}; // Pure virtual function
};

class derived : public base {
private:
    int i;
public:
	void fun_1() { 
		cout << "fun_1 of derived\n"; 
	}
};


class derived1 : public derived {
public:
	void fun_1() { 
		cout << "fun_1 of derived1\n"; 
	}
};

int main() {
    derived1 mehdi2;
    base *mehdi = &mehdi2;
    
	mehdi->fun_1();
    return 0;
}