//Without using  semaphores

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *Thread1(){
printf("I am first thread\n");
for (int i=10;i<20;i++){
printf("%d\n",i);
}
}

void *Thread2(){

printf("I am second thread\n");
for (int i=0;i<10;i++){
printf("%d\n",i);
}
}

void( *Thread3()){
printf("I am third thread\n");
for(int i=20;i<30;i++){
printf("%d\n",i);
}
}

int main()
{
pthread_t tid,tid2,tid3;

pthread_create(&tid,NULL,Thread1,(void *)&tid);
pthread_create(&tid2,NULL,Thread2,(void *)&tid2);
pthread_create(&tid3,NULL,Thread3,(void *)&tid3);
pthread_exit(NULL);
return 0;
}
