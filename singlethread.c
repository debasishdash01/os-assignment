#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *myThreadFun(void *vargp)
{
int *myid=(int *)vargp;
printf("Thread ID: %d\n", *myid);
}
int main()
{

pthread_t tid;

pthread_create(&tid,NULL,myThreadFun,(void *)&tid);

pthread_exit(NULL);
return 0;
}
