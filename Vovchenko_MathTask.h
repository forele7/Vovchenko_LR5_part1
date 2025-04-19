#ifndef _VOVCHENKO_MATHTASK_H_
#define _VOVCHENKO_MATHTASK_H_

#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <fstream>
#include <numeric>
#include <functional>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool Input (string input) 
{
    if (input.empty()) 
    {
        return false;
    }
    
    for (char c : input) 
    {
        if (!isdigit(c)) 
        {
            return false;
        }
    }
    
    try 
    {
        int number = stoi(input);
        if (number < 0) 
        {
            return false;
        }
    } 
    catch (...) 
    {
        return false;
    }
    return true;
}


void Enter_Number(int& varLink, string label)
{
        string get_input;
        cout << label << "= ";
        getline(cin, get_input);
        while (!Input(get_input))
        {
            cout << label << "= ";
            getline(cin, get_input);
        }
        varLink = stoi(get_input);
};

int CalculateRectangle(int A, int B)
{
    return A * B;
}
#endif