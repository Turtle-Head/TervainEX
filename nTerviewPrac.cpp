// nTerviewPrac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Practice for practical interview 
// Author: James Fehr

#include <iostream>
bool checkOdd(int num);
void evArray(int arg[]);
void dispArray(int arg[]);
void askforanumber();
void pastpresentfuture();
const int CYEAR = 2023;

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 2, 4, 6, 8, 10 };
    int arr3[] = { 1, 3, 5, 7, 9 };

    dispArray(arr1);
    evArray(arr1);
    
    dispArray(arr2);
    evArray(arr2);
    
    dispArray(arr3);
    evArray(arr3);

    askforanumber();

    pastpresentfuture();
}

bool checkOdd(int num) {
    if (num % 2 == 0)
        return(true);
    else
        return(false);
}

bool divby3(int num) {
    if (num % 3 == 0)
        return(true);
    else
        return(false);
}

void evArray(int arg[]) {
    std::cout << "\n";
    for (int i = 0; i < 5; i++) {
        if (checkOdd(arg[i])) 
            std::cout << arg[i] << " ";
        else {
            arg[i] = -1;
            std::cout << arg[i] << " ";
        }
    }
    std::cout << "\n";
}

void dispArray(int arg[]) {
    std::cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        std::cout << arg[i] << " ";
    }
}

void askforanumber() {
    int number;

    std::cout << "\n Please enter a number: ";
    std::cin >> number;
    if (checkOdd(number)) {
        std::cout << "\n " << number << " Even ";
    }
    else {
        std::cout << "\n " << number << " Odd \n";
    }
    if (divby3(number)) {
        std::cout << "\n " << number << " is Divisible by 3 \n";
    }
    else {
        std::cout << "\n " << number << " is not Divisible by 3 \n";
    }
}

void pastpresentfuture() {
    int year;
    std::cout << "\n Enter a year: ";
    std::cin >> year;
    if (year < CYEAR) {
        std::cout << "\n The past...\n";
    }
    else if (year == CYEAR) {
        std::cout << "\n The present !\n";
    }
    else if(year>CYEAR){
        std::cout << "\n The FUTURE !! \n";
    }
}