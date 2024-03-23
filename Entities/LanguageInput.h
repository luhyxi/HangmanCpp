//
// Created by luana on 3/21/24.
//

#ifndef UNTITLED_LANGUAGEINPUT_H
#define UNTITLED_LANGUAGEINPUT_H

#include <string>
#include "CSVReader.h"

using namespace std;

class LanguageInput
    {

public:
    LanguageInput(int WordCategory);
    
    int LettersLeft;
    
    void TakeGuess();

private:
    string OriginalWord;
    CSVReader csvReader;
    
    string GenerateWord(string WordCategory);
    };


#endif //UNTITLED_LANGUAGEINPUT_H
