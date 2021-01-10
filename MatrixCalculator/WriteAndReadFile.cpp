/**
*
* Solution to course project # 06
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Mihaela Gadzhalova
* @idnumber 62452
* @compiler VS
*
*File function: create a file, write in it, read it and close it
*
*/

#include <iostream>
#include <fstream>
#include "WriteAndReadFile.h"

using namespace std;

void writeAndReadFile() {

    char fname[20];
    cout << "Enter operations.txt to read and display the possible commands: ";
    cin >> fname;
    cout << "\n";

    char text[200];

    fstream file;
    //Opening the file
    file.open(fname);

    if (!file) {
        cout << "Error in opening the file! The name of the file is incorrect! \n";
        cout << "Enter any key to exit...\n";
        exit(0);
    }
    else {

        cout << "Welcome to my Matrix calculator!" << "\n";
        cout << "After you enter your matrix choose the operation you'd like to execute." << "\n";
        cout << "Press 1 - Multiplication of a matrix by a scalar" << "\n";
        cout << "Press 2 - Multiplication of a matrix by a matrix" << "\n";
        cout << "Press 3 - Finding the determinant of a matrix with dimensions up to 4x4" << "\n";
        cout << "Press 4 - Division of a matrix by scalar" << "\n";
        cout << "Press 5 - Find the inverse matrix" << "\n";
        cout << "Press 6 - Find the transpose matrix" << "\n";
  
    }
    cin.getline(text, sizeof(text));

    // Writing on file
    file << text << endl;

    // Reding from file
    cout << text << endl;

    //closing the file
    file.close();
    
}