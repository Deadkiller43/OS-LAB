#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *mythread1(void *vargp)
{
   int i;
   printf("thread1\n");
   for(i=1;i<=10;i++)
     printf("i=%d\n",i);    
   printf("exit from thread1\n");
   return NULL;
}

void *mythread2(void *vargp)
{
   int j;
   printf("thread2 \n");
   for(j=1;j<=10;j++)
    printf("j=%d\n",j);
   printf("Exit from thread2\n");
   return NULL;
}


int main()
{
  pthread_t tid;
  printf("before thread\n");
  pthread_create(&tid,NULL,mythread1,NULL);
  pthread_create(&tid,NULL,mythread2,NULL);
  pthread_join(tid,NULL);
  pthread_join(tid,NULL);
  exit(0);
}
