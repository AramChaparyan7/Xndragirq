#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	int stat;
	pid_t proc=fork();
	wait(&stat);
	if(proc<0){
		printf("failed\n");
	}else if(proc==0){
		printf("child process pid id %d, parent process pid is %d\n",getpid(),getppid());
	}else{
		printf("%d\n",WEXITSTATUS(stat));
		printf("child process pid id %d, parent process pid is %d\n",proc,getpid());
	}
	return 0;
}
