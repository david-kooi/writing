// C++ Allows Function overloading
class ClassA{
    public:
        void print(int i);
        void print(double f);
}

void signalHandler(int signum){
    // Do stuff
}

int main(void){
    // Register signal handler
    signal(SIGINT, signalHandler);

    ClassA a;
    a.print(1);
    a.print(3.14); 

    int n = 10;
    int int_array[10]; // Static initialization

    int *ptr;
    ptr = new int[n] // Dynamic initialization
    delete[] ptr; // Release memory


    raise(SIGINT); // Create a signal
}
