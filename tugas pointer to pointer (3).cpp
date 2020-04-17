#include <iostream>
using namespace std;

int main (){
	void* a;
	int b= 20;
	a = &b;
	cout<<&b<<endl;
	cout<<a;
	return 0;
}

