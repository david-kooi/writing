class Notes{
// Default definitions are private
double a;
double b;

public:
    int notes_public(int a, int v);

}
Notes::notes_public(int a, int v){
    // Do something
}
class CPPNotes_priv: private Notes{
    public:
        int cpp_notes_public(int a);
}
CppNotes_priv::cpp_notes_public(int a){
    // Do something
}

/* Inheritance Notes 
All Public members of the Base Class become Public Members of the derived class
& All Protected members of the Base Class become Protected Members of the
Derived Class.


All Public members of the Base Class become Private
Members of the Derived class & All Protected members of the Base Class become
Private Members of the Derived Class.
*/

int main(){
    Notes simple_notes;
    CppNotes_priv cpp_notes_priv;

    simple_notes.notes_public(1, 2);   // Allowed 
    cpp_notes_priv.notes_public(1);    // Not allowed
    cpp_notes_priv.cpp_notes_public(1) // Allowed
}
