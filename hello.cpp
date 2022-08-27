#include<iostream>

using namespace std;

int main()
{
	int a;
	int *p ;
	a = 10 ;
	p = &a;
	cout<< p << " " <<   *p << endl;
	int b = 20;
	*p = b ;
	cout<< p <<"  "<<   *p << endl;
}
