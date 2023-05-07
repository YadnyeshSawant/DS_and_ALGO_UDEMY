#include<stdio.h>
struct rec
{
    int length;
    int breadth;
}r;
int area(struct rec r);
int getlenth();
int setlength(int l);
void main()
{
    printf("Enter the size of length and breadth\t");
    scanf("%d%d",r.length,r.breadth);
    printf("AREA = %d\n",area(r));
    printf("length = %d\n",getlenth());
    setlength(2);
    printf("length = %d\n",getlenth());
}
int area(struct rec r)
    {
        return r.length*r.breadth;
    }
int getlenth()
{
    return r.length;
}
int setlength(int l)
{
    r.length = l;
}