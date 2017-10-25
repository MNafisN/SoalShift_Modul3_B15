#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

pthread_t tid[2];
int waifu1;
int waifu2;


void* cariwaifu(void *arg)
{
        unsigned long i=0;
        pthread_t id=pthread_self();
        waifu1=0;
        waifu2=0;
        //char buka;
        //buka = system("cat Novel.txt");
        /*FILE *cek;
        cek = fopen("Novel.txt","r+");*/
        int waifu1=0;
        int waifu2=0;
        if(pthread_equal(id,tid[0]))
        {
                //if(strstr
                int cek1;
                cek1 = system("cat Novel.txt | grep -Fx Ifah");
                while(cek1) waifu1++;
        }
        else if(pthread_equal(id,tid[1]))
        {
                int cek2;
                cek2 = system("cat Novel.txt | grep -Fx Fina");
                while(cek2) waifu2++;
        }
        //printf("%d %d", waifu1, waifu2);
        return NULL;
}

int main(void)
{
        int i=0;
        int err;
        while (i<2)
        {
                pthread_create(&(tid[i]),NULL,&cariwaifu,NULL);
                i++;
        }
        pthread_join(tid[0],NULL);
        pthread_join(tid[1],NULL);
        printf("%d %d", waifu1, waifu2);
        return 0;
}

