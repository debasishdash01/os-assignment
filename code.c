//gcc code.c -lpthread
//./a.out


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

int i; //shared variable
sem_t s1,s2; //semaphore variables

void *Thread1(){
sem_wait(&s1);
printf("I am first thread\n");
for (int i=10;i<20;i++){
printf("%d\n",i);
}
sem_post(&s2);
}

void *Thread2(){

printf("I am second thread\n");
for (int i=0;i<10;i++){
printf("%d\n",i);
}
sem_post(&s1);
}

void *Thread3(){
sem_wait(&s2);
printf("I am third thread\n");
for(int i=20;i<31;i++){
printf("%d\n",i);
}
}

int main()
{
sem_init(&s1,0,0);
sem_init(&s2,0,0);
//1st argument for the address of the semaphore variable
//2nd arg for the thread, non-zero value is used in case for process
//3rd arg for initializing the semaphore value

pthread_t tid,tid2,tid3;

pthread_create(&tid,NULL,Thread1,(void *)&tid);
pthread_create(&tid2,NULL,Thread2,(void *)&tid2);
pthread_create(&tid3,NULL,Thread3,(void *)&tid3);

sem_destroy(&s1);
sem_destroy(&s2);
//for destroying the semaphores

pthread_exit(NULL);
return 0;
}
