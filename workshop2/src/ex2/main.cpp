/*******************************************************************************
 *  Workshop 2/Task 2
 *
 *  Studying input, output, conditions and simple loops.
 *
 *  A program outputs a formatted multiplication table for n numbers.
 *
 *  Example. For n = 3, the output is:
 *
 *      1   2   3
 *  1   1   2   3
 *  2   2   4   6
 *  3   3   6   9
 *
 *  1) Ask a user to input a boundary n for the table.
 *  2) Check whether n is in the range [1; 10] using if statement. Otherwise
 *     output the following message: "Wrong argument", and terminate the program.
 *  3) Output a table row by row using for-loop statement. Use tabs to separate
 *     individual values.
 *  4) Modify the program. Use while-loop statement.
 *
 ******************************************************************************/

#include <iostream>

// the entrypoint of the application
int main()
{
    std::cout << "Hello world!";
    
    int number;
    std::cin >> number;
    
    if (number == 0 and number != 1)
    {
        std::cout << "Wrong";
    }
    else
    {
        // code
    }
    
//    for (int i = 0; i < number; ++i)
//    {
//        std::cout << i << " ";
//    }
    
//    std::cout << "\n";
    
//    int i = 0;
//    while (i < number)
//    {
//        std::cout << i << " ";
        
//        ++i;
//    }

//    char answer;
//    do {
        
//        std::cin >> answer;
        
//        if (answer == 'y' or answer == 'Y')
//        {}
        
        
        
//    } while (true);
    
    
    // TODO: place your code starting from this line

    return 0;
}
