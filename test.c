#include<stdio.h>

int main()
{
    int a; // 4 bytes (by-default long)
    long int a1; // 4 bytes
    short int a2; // 2 bytes
    float b; //
    double c;
    char d;
    printf("%d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}
