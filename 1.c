#include<stdio.h>
void update(int &a);
int main()
{
    int a[]={1,2,3,4,5};
    int *p=a;
    cout<<*p;
    return 0;
}

void update(int &a)
{
    return;
}