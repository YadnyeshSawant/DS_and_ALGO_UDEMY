#include<stdio.h>
struct student
{
    int rno;
    char name[50];
    char add[50];
    int per;
    int age;
}S;
void main()
{
    printf("Enter rollno:\t");
    scanf("%d",&S.rno);

    printf("Enter name:\t");
    scanf("%s",S.name);
    
    printf("Enter address:\t");
    scanf("%s",S.add);
    
    printf("Enter percentage:\t");
    scanf("%d",&S.per);
    
    // printf("Enter age:\t");
    // scanf("%d",S.age);

    printf("STUDENT DETAILS\n");
    printf("----------------------------------------\n");
    printf("ROLLNO\tNAME\tADDRESS\tPERCENTAGE\tAGE\n");
    printf("%d\t%s\t%s\t%d\t%d\n",S.rno,S.name,S.add,S.per,S.age);

}