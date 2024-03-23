//
// Created by luana on 3/21/24.
//

#include "LanguageInput.h"
#include <fstream>
#include <iostream>

using namespace std;

LanguageInput::LanguageInput(int WordCategory)
{
    string GenerateWord(int WordCategory);
};

string LanguageInput::GenerateWord(string WordCategory)
{
    auto content = csvReader.ReadFile("../Config/words.csv");
    
    auto categoryIt = content.find(WordCategory);
    if (categoryIt == content.end())
    {
        cerr << "Error: Word category '" << WordCategory << "' not found in the CSV file." << endl;
        return "";
    }
    
    srand(time(0));
    
    // Select a random word from the values associated with the category
    int randomIndex = rand() % categoryIt->second.size();
    return categoryIt->second[randomIndex];  // Return the random word
}