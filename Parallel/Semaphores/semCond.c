/**
 * Albert Owusu-Asare
 * This was highly motivated by  Remzi H. and Andrea C. Arpaci-Dusseau's
 * Operating Systems: Three Easy Pieces
 */

#include <stdio.h>
#include <stdlib.h>
#include "mythreads.h"
#include <pthread.h>
#include <semaphore.h>


/* Global variables */

sem_t sem;

/* child */
void* child (void *arg){
  printf("Child  thread runnig\n");
  sem_post(&sem); // signal that child is done
  return NULL;
   
}// child

/*main*/
int main(int argc, char * argv[]){
  sem_init(&sem,0,0); // initialise semaphore
  printf("parent beginning\n");
  pthread_t childThread;
  Pthread_create(&childThread,NULL,child,NULL);
  sem_wait(&sem);
  printf("parent ended\n");
 
  return 0;
}//main
