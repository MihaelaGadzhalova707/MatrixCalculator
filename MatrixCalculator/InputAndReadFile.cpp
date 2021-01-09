#include <iostream>
#include <string>
#include <fstream>
#include "InputAndReadFile.h"

using namespace std;

void inputAndReadFile() {

    ofstream myFile_Handler;
    char fname[20];
    cout << "Enter operations.txt to read and display it's content: ";
    cin >> fname;
    cout << "\n";

    char text[200];

    fstream file;
    file.open(fname);

    cout << "Welcome to my Matrix calculator!" << "\n";
    cout << "After you enter yout matrix choose the operation you'd like to execute." << "\n";
    cout << "Press 1 - Multiplication of a matrix by a scalar" << "\n";
    cout << "Press 2 - Multiplication of a matrix by a matrix" << "\n";
    cout << "Press 3 - Finding the determinant of a matrix with dimensions up to 4x4" << "\n";
    cout << "Press 4 - Division of a matrix by scalar" << "\n";
    cout << "Press 5 - Find the inverse matrix" << "\n";
    cout << "Press 6 - Find the transpose matrix" << "\n";
    cin.getline(text, sizeof(text));

    // Writing on file
    file << text << endl;

    // Reding from file
    //file >> text;
    cout << text << endl;

    //closing the file
    file.close();

    /*fstream myFile_Handler;
    string myLine;

    char fname[20];
    cout << "Enter operations.txt to read and display it's content: ";
    cin >> fname;
    // File Open
    myFile_Handler.open(fname, ios::in | ios::out);

    // Check if the file has opened
    if (!myFile_Handler)
    {
        cout << "File did not open!";
        exit(1);
    }

    // Write to the file
    myFile_Handler << "1. This is another sample test File. " << endl;
    myFile_Handler << "2. This is the second line of the file. " << endl;

    myFile_Handler.seekg(ios::beg);

    // Read the File
    if (myFile_Handler.is_open())
    {
        // Keep reading the file
        
            // print the line on the standard output
            cout << myLine << endl;
        

        // File Close
        myFile_Handler.close();
    }
    else
    {
        cout << "Unable to open the file!";
    }
    myFile_Handler.close();
    */
    /*ifstream ifile;
    char s[100], fname[20];
    cout << "Enter operations.txt to read and display it's content: ";
    cin >> fname;
    ifile.open(fname);
    if (!ifile) {
        cout << "Error in opening the file!\n";
        cout << "Enter any key to exit...\n";
        exit(0);
    }
    while (ifile.eof() == 0) {
        ifile >> s;
        cout << s << " ";
    }
    cout << endl;
    ifile.close();*/
    
}