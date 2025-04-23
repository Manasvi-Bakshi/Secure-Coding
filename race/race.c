#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define NUM 50000

int counter = 0;
//pthread_mutex_t lock;

void*increment(void* arg){
  for (int i=0; i<NUM; i++){
    //pthread_mutex_lock(&lock);
    //usleep(1);
    counter++;
    //pthread_mutex_unlock(&lock);
  }
  return NULL;
}

int main(){
  pthread_t t1,t2;
  //pthread_mutex_init(&lock, NULL);
  pthread_create(&t1, NULL, increment,NULL);
  pthread_create(&t2, NULL, increment,NULL);
  
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
  //pthread_mutex_destroy(&lock, NULL);
  printf("Expected 100000 \n");
  printf("Actual counter: %d \n",counter);
  
  return 0;
  
}
