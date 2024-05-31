#include<stdio.h>

int main()
{
    int a; // 4 bytes (by-default long)
    long int a1; // 4 bytes
    short int a2; // 2 bytes
    float b; // 4 byte
    double c; // 8 byte
    char d; // 1 byte
    printf("%d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}
