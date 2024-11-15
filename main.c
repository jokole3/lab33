#include <stdio.h> 
#include "askname.h" 
int main(int argc, char **argv) 
{ 
    char first[255], last[255];
    askname(first); 
    printf("Hey, %s %s!\n", first, last); 
    printf("Hi, %s %s!\n", first, last); 
    return 0; 
} 