#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
void * f1(){
    int a=0;
    clock_t tr;
    tr=clock();
    while(((clock()-tr)/CLOCKS_PER_SEC)<1){
a++;
    }
    printf("%d",a);
    return (NULL);
}
int main()
{
    pthread_t tid_0;
    pthread_create(&tid_0,NULL,&f1,NULL);
    pthread_join(tid_0,NULL);
    return 0;


}