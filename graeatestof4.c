#include <stdio.h>
void main()
{
    int a, b, c, d, big;
    printf("Enter the four numbers");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    big = a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : (b > c ? (b > d ? b : d) : (c > d ? c : d));
    printf("The greatest of four numbers is = %d", big);
}