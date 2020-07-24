// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>



using namespace std;

int main()
{
    /*std::cout << "Hello World!\n";

    // Vector with 5 integers

    std::vector<int>
        vecOfInts(5);
    for (int x : vecOfInts)
        std::cout << x << std::endl;

        

    // Array of string objects
    std::string arr[] = {
        "first",
        "sec",
        "third",
        "fourth"
    };

    // Vector with a string array
    std::vector < std::string > vecOfStr(arr,
        arr +
        sizeof(arr) / sizeof(std::string));
    for (std::string str : vecOfStr)
        std::cout << str << std::endl;

        */

    /*
    std::list < std::string > listOfStr;
    listOfStr.push_back("first");
    listOfStr.push_back("sec");
    listOfStr.push_back("third");
    listOfStr.push_back("fouth");
    // Vector with std::list
    std::vector < std::string > vecOfStr(listOfStr.begin(), listOfStr.end());
    for (std::string str : vecOfStr)
        std::cout << str << std::endl;
        */

    //Copy from one vector to another
    std::vector < std::string > vecOfStr;
    vecOfStr.push_back("first");
    vecOfStr.push_back("sec");
    vecOfStr.push_back("third");
    // Vector with other string object
    std::vector < std::string > vecOfStr3(vecOfStr);

    /*
    vector <char> v{
        'C',
        '#'
    };
    vector <char> v1;
    v1.operator = (v);
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i];

        */


    vector <int> x{
        1, 3, 5, 2, 0, 4, 2
    };

    
    for(int i = 0; i < x.size(); i++)
        std::cout << x[i] << ' ';

    //new vector
    vector <int> v{
        1, 3, 5, 2, 0, 4, 2
    };


    //sort the vector
   std::sort(v.begin(), v.end());
   
   for (size_t i = 0; i < x.size(); i++)
   {
       std::cout << v[i] << ' ';
   }

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
