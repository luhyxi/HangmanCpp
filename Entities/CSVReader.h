//
// Created by luana on 3/21/24.
//

#ifndef UNTITLED_CSVREADER_H
#define UNTITLED_CSVREADER_H


#include <string>
#include <vector>
#include <map>

using namespace std;


class CSVReader
    {

public:
    map<string, vector<string>> ReadFile(string path);
    
    void FileIntegrityCheck(ifstream &file);
    };


#endif //UNTITLED_CSVREADER_H
