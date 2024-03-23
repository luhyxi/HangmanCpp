//
// Created by luana on 3/20/24.
//

#ifndef UNTITLED_ENTITY_H
#define UNTITLED_ENTITY_H

#include <string>

using namespace std;


class Entity {
public:
    // Constructor to initialize body and lives
    explicit Entity(const string &body = "Default Body");

    // Getter for body
    string getBody();

    // Setter for body
    void setBody(const string &newBody);

    // Function to decrease lives
    bool decreaseLives();

private:
    string body;
    int lives;
    bool isAlive;
};


#endif //UNTITLED_ENTITY_H
