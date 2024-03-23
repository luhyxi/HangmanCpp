//
// Created by luana on 3/21/24.
//

#include "CSVReader.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


map<string, vector<string>> CSVReader::ReadFile(string path)
{
    ifstream myFile(path); // Open file directly with constructor
    
    FileIntegrityCheck(myFile); // Integrity/error check
    
    map<string, vector<string>> contents;
    string line;
    while (getline(myFile, line))
    {
        stringstream ss(line);  // Create a stringstream to parse the line
        string firstElement;
        getline(ss, firstElement, ',');  // Extract first element using a comma delimiter
        
        vector<string> remainingElements;
        string element;
        
        while (getline(ss, element, ','))
            remainingElements.push_back(element);
        
        contents[firstElement] = remainingElements;  // Add key-value pair to the map
    }
    
    myFile.close();
    return contents;
}

void CSVReader::FileIntegrityCheck(ifstream &file) // Pass ifstream by reference
{
    if (file.fail())
    {
        cerr << "File integrity check failed." << endl;
        exit(1);
    }
}
