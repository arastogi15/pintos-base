// C examples from CSCI 350 -- 1/18/19


// 1. Object size
int i;
float f;
struct MyStruct;

// sizeof(int) == 4
// sizeof(i) == 4

// pointer manipulation
int i = 1;
in* a = &i

a++; // 0x0004 --> pointer addition, increment by size of POINTER TYPE
((char*)a)++; // 0x0005

// class instantiation

// C++ class
class MyClass {
public:
	MyClass();
	~MyClass();

private:	
	int i;

}

// "NO FUNCTION AT ALL"
struct MyStruct {
	int i;
}

// this tells us we want to do the construction for that specific pointer
void init_mystruct(struct MyStruct* ms) {
	ms->i = 1;
}

// C-style member function. declare functions outside of class, declare class pointer as first parameter
// so we know which object we're operating on.
int MyStruct_fun1(struct MyStruct* ms, int i2) {
	ms->i = i2;
	return ms->i;
}

// object size plays a role in C struct instantiation

// C++ instantiation
MyClass ms = new MyClass();
delete ms;

//  C-style instantiation. (1) Allocate and (2) do construction logic

struct MyStruct* ms = malloc(sizeof(struct MyStruct)); // you may need to do casting 
init_mystruct(ms);

ms-i = 2;
