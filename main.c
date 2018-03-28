#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

#define SYS_stephen 333

int main(){
	
	char *arg = "-stephen";
	printf("Making sys call with \"%s\".\n",arg);
	long res = syscall(SYS_stephen, arg);
	printf("SYS call returned %ld.\n", res);
	return res;
}
