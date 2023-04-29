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
    int area;
    r.length = 10;
    r.breadth = 15;
    area = r.length*r.breadth;
    printf("AREA = %d",area);
    cout<<area;
       return 0;
}

