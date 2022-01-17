/*******************************************************************************
 * Workshop 2/Task 1
 * Studying properties of some basic datatypes.
 *
 * Use operator sizeof to explore size of all important basic datatypes:
 *  char, short, int, long, long long, double, bool
 *
 * For storing results use named variables of size_t for some types from the
 * list above.
 * Also, try to create complex expressions for output formatted results to
 * std::cout.
 *
 ******************************************************************************/

#include <iostream>

// the entrypoint of the application
int main()
{
    char a = 10;
//    std::cout << "Hello world!";
    size_t s1 = sizeof(char);
    size_t s2 = sizeof(short);
    size_t s3 = sizeof(int);
    size_t s4 = sizeof(long);
    size_t s5 = sizeof(long long);
    
    size_t s6 = sizeof(float);
    size_t s7 = sizeof(double);

    
    std::cout << s1 << "\n";
    std::cout << s2 << "\n";
    std::cout << s3 << "\n";
    std::cout << s4 << "\n";
    std::cout << s5 << "\n";
    std::cout << s6 << "\n";
    std::cout << s7 << "\n";

    // TODO: place your code starting from this line

    return 0;
}
