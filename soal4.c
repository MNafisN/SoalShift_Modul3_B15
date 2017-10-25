#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[3];

int i, n, j;

void* faktorial(void* arg)
{
        int sum=1;
        pthread_t id=pthread_self();

        if (pthread_equal(id,tid[i]))
          { 
                for(i=0; i<n; i++)
                {
                        sum=sum*(i+1);
                        printf("Hasil %d! = %d", n, sum);
                }
          }
}

int main()
{
        pthread_create(&(tid[0]),NULL,&faktorial,NULL);
        pthread_create(&(tid[1]),NULL,&faktorial,NULL);
        pthread_create(&(tid[2]),NULL,&faktorial,NULL);

        pthread_join(tid[0],NULL);
        pthread_join(tid[1],NULL);
        pthread_join(tid[2],NULL);
        return 0;
}
