#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
}r;
int main()
{
    r.length = 10;
    r.breadth = 15;
    printf("AREA = %d",r.length*r.breadth);
    return 0;
}

