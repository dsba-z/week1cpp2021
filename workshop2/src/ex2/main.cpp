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
 *  5)  Recreate the multiplication table task, allowing the
user to rerun the program again after it prints the multiplication table. Use
a new project for this task, do not erase the project containing the multipli-
cation table program without reruns.
 *
 ******************************************************************************/

#include <iostream>
#include <string>


// the entrypoint of the application
int main()
{
    using namespace std;
    int number;
    std::cin >> number;
    
    if (number <= 0) 
    {
        std::cout << "Your\tnumber is incorrect\n";
        return 1;
    }
    
    std::cout << "\n";
    int n = 5;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << " ";
    }
    
    char answer;
    std::cin >> answer;
    if (answer == 'Y' or answer == 'y')
    {
        // ...
    }
    
    int i = 0;
    do {
        
        ++i;
        
    } while (i < n);
    
    
//    int array[10];
    
    std::cout << "\n";
    int i = 0;
    while (i < n) {
        std::cout << i << " ";
        
        
//        i++;
        ++i;
//        i += 1;
//        int j = array[++i] + 1;
    }
    

    // TODO: place your code starting from this line

    return 0;
}
