#include <stdio.h>

struct person{
    int age;
    char name[34];
    float grade;
};

int main()
{
    struct person p1 = {32, "wuey", 28.3};
    printf("%d\t%s\t%.2f", p1.age, p1.name, p1.grade);
}