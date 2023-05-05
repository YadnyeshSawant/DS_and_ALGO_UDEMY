#include<stdio.h>
int area(int l, int b);
int getlenth();
int setlength(int l);
struct rec
{
    int length;
    int breadth;
}r = {10,5};
void main()
{
    printf("length = %d\n",getlenth());
    printf("AREA = %d\n",area(r.length,r.breadth));
    setlength(2);
    printf("length = %d\n",getlenth());
}
int area(int l, int b)
    {
        return l*b;
    }
int getlenth()
{
    return r.length;
}
int setlength(int l)
{
    r.length = l;
}