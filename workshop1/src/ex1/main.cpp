// include some definitions needed for woring with standard input/output (streams)
#include <iostream>
#include <climits>

typedef unsigned long my_new_type;


// the entrypoint of the application
int main()
{
    // put a string literal "Hello world!" to the standard output stream in order 
    // to print it at the console, which is normally associated with this stream
//    std::cout << 4;
    
    int a = 1;
    char b = 60;
    size_t s1 = sizeof(char);
    size_t s2 = sizeof(short);
    size_t s3 = sizeof(int);
    size_t s4 = sizeof(long);
    size_t s5 = sizeof(long long);

    std::cout << b << "\n";
    std::cout << s2 << "\n";
    std::cout << s3 << "\n";
    std::cout << s4 << "\n";
    std::cout << s5 << "\n";
    // must return a "errorlevel code": 0 is for OK
    return 0;
}
