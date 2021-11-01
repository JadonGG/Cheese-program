// Cheeese program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jadon Goddard //
#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>


using namespace std;
int main()
{
    std::cout << "*********************************************************************************************************************";
    std::cout << "\n****************************************** Welcome to my Cheese Program *******************************************" << endl;
    std::cout << "\n*********************************************************************************************************************";

    int num1;
    double kilo = 2.76;
    cout << "\n\nPlease enter the total number of kilograms of cheese produced: ";
    cin >> num1;

    cout << "\nThe number of containers to hold the cheese is:                          " << round(num1 / kilo);

    int container = round(num1 / kilo);
    double cost = 4.12;
    
    string s1 = "\n\nThe cost of producing " + to_string(container) + " container(s) of cheese is:                     ";
    cout << setw(0) << left << s1 << setw(0) << right << '$' << container * cost << endl;

    double profit = 1.45;

    string s2 = "\nThe profit from producing " + to_string(container) + " container(s) of cheese is:              ";
    cout << setw(4) << left << s2 << setw(4) << right << '$' << container * profit << endl;


    system("\npause");
    
    
    


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
