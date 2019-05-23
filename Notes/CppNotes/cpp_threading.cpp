#include <pthread.h>
int FooThread(int a){
    // Blah
    pthread_exit(NULL);
}

int main(void){
    pthread_t threads[10];
    for(int i = 0; i < 10; i++){
        int rc = pthread_create(&threads[i], NULL, &FooThread, 
                (void*)&i);
        if(rc){
            // Error
        }   
    }

}
