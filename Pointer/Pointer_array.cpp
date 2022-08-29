#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A[] = { 0, 1, 2, 3, 4, 5};
    cout<<A<<endl<<&A[0]<<endl;
    cout<<*A<<endl<<*(A+1)<<endl;
    int *p= &A[0];
    cout<<p+1;
    return 0;
}
