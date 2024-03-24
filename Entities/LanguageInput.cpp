//
// Created by luana on 3/21/24.
//

#include "LanguageInput.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

LanguageInput::LanguageInput(string WordCategory)
{
    string GenerateWord(string WordCategory);
    LettersLeft = (int)OriginalWord.length();
    GetHiddenWord();
};

string LanguageInput::GenerateWord(string WordCategory)
{
    auto content = csvReader.ReadFile("../Config/words.csv");
    
    auto categoryIt = content.find(WordCategory);
    if (categoryIt == content.end())
    {
        cerr << "Error: HiddenWord category '" << WordCategory << "' not found in the CSV file." << endl;
        return "";
    }
    
    srand(time(0));
    
    // Select a random word from the values associated with the category
    int randomIndex = rand() % categoryIt->second.size();
    
    return OriginalWord = categoryIt->second[randomIndex];  // Return the random word
}

void LanguageInput::TakeGuess(char letterChosen)
{
    if (LettersLeft == 0) {}
    auto it = std::find(OriginalWord.begin(),OriginalWord.end(),letterChosen);
    
    if (it != OriginalWord.end())
    {
        --LettersLeft;
        FreeLetter(letterChosen, distance(OriginalWord.begin(), it) );
    }
}

string LanguageInput::GetHiddenWord() {
    HiddenWord = "";
    for (int i = 0; i < OriginalWord.length(); ++i) HiddenWord += "_";
    
    return HiddenWord;
}

void LanguageInput::FreeLetter(char letter, int index) { HiddenWord[index] = letter; }
