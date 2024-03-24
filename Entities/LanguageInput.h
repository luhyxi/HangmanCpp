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
    LanguageInput(string WordCategory); // Constructor
    
    void TakeGuess(char letterChosen);
    void FreeLetter(char letter, int index);
    string GetHiddenWord(); // It's weird that both getter and attribute are public
    
    int LettersLeft;
    string HiddenWord;

private:
    string OriginalWord;
    CSVReader csvReader;
    
    string GenerateWord(string WordCategory);
    };


#endif //UNTITLED_LANGUAGEINPUT_H
