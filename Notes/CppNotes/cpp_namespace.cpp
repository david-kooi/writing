namespace FooSpace{
    void func(){
    }

}


template <class T> class Stack{
    private:
        vector<T> elems;
    public:
        void push(T element);
        Stack(T); // Constructor
}

template <class T> T Stack<T>::Stack(T a){
    // Constructor
    elems.push_back(T a);
}


template <typename T> T Max(T a, T b){
    return a < b ? b:a;
}

int main(void){
    FooSpace::func();
    int a = Max<int>(1,2);
    double b = Max<double>(1.5,1.7);


    Stack<int> int_stack(1);
    Stack<double> doub_stack(1.1);
}
