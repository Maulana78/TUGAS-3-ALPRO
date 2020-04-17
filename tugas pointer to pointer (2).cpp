#include <iostream>
using namespace std;

int xy(int *x){
	int z;
	z = *x + 50;
}
int main (){
	int x= 50;
	cout<<"nilai x : "<<x<<endl;
	cout<<"nilai z : "; 
	cout<< xy (&x);
	return 0;
}

