// include some definitions needed for woring with standard input/output (streams)
#include <iostream>
//#include <climits>

int myFunction();
int qwe();








int myFuncton()
{
    qwe();
    return 1;
}

int qwe()
{
    myFuncton();
    return 2;
}



// the entrypoint of the application
int main()
{
    int a;
    a = 0;

    double c = 2.1;
    char asd = 61;
    
    // put a string literal "Hello world!" to the standard output stream in order 
    // to print it at the console, which is normally associated with this stream
    std::cout << "Hello world!" << "Second output\n";


    size_t s1 = sizeof(char);
    size_t s2 = sizeof(short);
    size_t s3 = sizeof(int);
    size_t s4 = sizeof(long);
    size_t s5 = sizeof(long long);

    std::cout << asd << "\n";
    std::cout << s2 << "\n";
    std::cout << s3 << "\n";
    std::cout << s4 << "\n";
    std::cout << s5 << "\n";

    // must return a "errorlevel code": 0 is for OK
    return 0;
}
