/**
 * Author : Albert Owusu-Asare
 * Date : Sat Oct 11 10:19:34 CDT 2014
 *
 * This document contains a simple implementation of a semaphore lock
 * Inspired by an example from Remzi and Andrea C. Arpaci-Dusseau:Operating 
 * Systems
 */

#include <stdio.h>
#include <semaphore.h>
#include <stdlib.h>
#include <sched.h>
#include <pthread.h>


//sempahore
sem_t sem;
int num = 0;

// some function
void *function (void *arg){
  int i;

  for(i =0 ; i< 10 ; i++){

    num++;
  }
  return NULL;
}

//main
int main(int argc , char * argV[]){
  pthread_t other_thread ;
  int i;
  int rc = pthread_create(&other_thread,NULL,function,NULL);
  if(rc == 0)
    {
      printf("Thread Create failed ...\n");
      return 0;
    }

  int pass =  sem_init(&sem,0,1);
  if (pass){
    sem_wait(&sem); // decreases by 1 value now 0
    for(i =0 ; i< 10 ; i++){
    num++;
    }
    sem_post(&sem); // increases by 1 value now 1;
  }
    printf("%d\n",num);
  return 0;
}
