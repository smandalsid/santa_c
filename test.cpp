#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr;
    int a=5;
    ptr=&a;
    cout<<*ptr<<"\n";
    free(ptr);
    cout<<*ptr<<"\n";
    return 0;
}