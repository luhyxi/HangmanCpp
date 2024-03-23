//
// Created by luana on 3/20/24.
//

#include <string>


#include "Entity.h"


// Constructor with descriptive initialization
Entity::Entity(const string &body) : body(body), lives((int) body.length()), isAlive(true) {}


// Getter for body (consider making private if not needed for modification)
string Entity::getBody() {
    return body;
}


// Setter for body (consider adding validation if needed)
void Entity::setBody(const string &newBody) {
    body = newBody;
    lives = (int) newBody.length();
}


// Function to decrease lives, indicating death if applicable
bool Entity::decreaseLives() {
    lives--;
    isAlive = lives > 0;
    return isAlive;
}
