# include <stdio.h>
# include <sys/types.h>
# include <unistd.h>

int main(){
int pid_tpid,mypid,myppid;
int pid = getpid();
printf("Before fork: Process id is %d\n",pid);
pid = fork();
if(pid<0){
	printf("fork() failure\n");
	return 1;
}
//Child Process
if(pid==0){
	printf("This is Child Process\n");
	mypid = getpid();
	myppid = getppid();
	printf("Process id is %d and PPID is %d\n",mypid,myppid);
}
else{
//Parent Process
	sleep(2);
	printf("This is Parent Process\n");
	mypid = getpid();
	myppid = getppid();
	printf("Process id is %d and PPID is %d\n",mypid,myppid);
	printf("Newly created process id or child pid is %d\n",pid);
}
return 0;
} 
