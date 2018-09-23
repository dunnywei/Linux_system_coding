//https://www.youtube.com/watch?v=SMeDw2GDMsE&index=36&list=PLypxmOPCOkHXbJhUgjRaV2pD9MJkIArhg

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHSIZE 100

int main(int argc, char *argv[])
{
    int shmid;
    key_t key;
    char *shm;
    char *s;
     
    key=9976;
    printf("Hello World");
    
    shmid=shmget(key,SHSIZE,IPC_CREATE | 0666);
    if(shmid<0)
    {
        perror("shmget_fail");
        exit(1);
    }
    shmid=shmat(shmid, NULL,0);

    if(shm==(char*)-1)
    {
        perror("shmat_fail");
        exit(1);
    }//(6:01)
    
    memcpy(shm,"hello world",11);
    /*
    "hello world" has 11 characters
    */
    s=shm;
    s+=11;
    
    *s=0;
    while(*shm!='*')
    {    
        sleep(1);
    }
    //(7:43)
    return 0;
     
    
}

//(1:00)
