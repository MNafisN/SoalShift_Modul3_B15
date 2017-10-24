#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[3];

void faktoriasi()
{
        int sum=0;
        int i, n;
        for(i=1; i<=n; i++)
          { 
            sum=*i;
            printf("Hasil %d! = %d", n, sum);
          }
}

int main(void)
{
pthread_create(&tid[0],NULL,faktorisasi,NULL);
pthread_create(&tid[1],NULL,faktorisasi,NULL);
pthread_create(&tid[2],NULL,faktorisasi,NULL);

pthread_join(tid[0],NULL);
pthread_join(tid[1],NULL);
pthread_join(tid[2],NULL);
return 0;
}

