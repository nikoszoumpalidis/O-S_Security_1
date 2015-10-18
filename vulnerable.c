#include<stdio.h>
#include<stdlib.h>


void main(int argc, char *argv[]) {
char buffer[100];
printf("%p\n", buffer);
if (argc > 1)
strcpy(buffer,argv[1]);
}
