#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

int i;
sem_t s1,s2;

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
for(int i=20;i<30;i++){
printf("%d\n",i);
}
}

int main()
{
sem_init(&s1,0,0);
sem_init(&s2,0,0);
pthread_t tid,tid2,tid3;

pthread_create(&tid,NULL,Thread1,(void *)&tid);
pthread_create(&tid2,NULL,Thread2,(void *)&tid2);
pthread_create(&tid3,NULL,Thread3,(void *)&tid3);
pthread_exit(NULL);
return 0;
}
