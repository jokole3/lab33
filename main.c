#include <stdio.h> 
#include "askname.h" 
int main(int argc, char **argv) 
{ 
    char first[255], last[255];
    char first[255], last[255]; 
    askname(first); 
    printf("Hello, %s %s!\n", first, last); 
    return 0; 
} 