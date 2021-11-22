#include "GameCharacter.h"

GameCharacter::GameCharacter(string n, int h, int a, int d) {
    name = n;
    maxHealth = h;
    currHealth = h;
    attack = a;
    defense = d;
}

int GameCharacter::takeDamage(int amount) {
    int damage = amount - defense;

    if (damage < 0) {
        damage = 0;
    }

    currHealth -= damage;

    return damage;
}

bool GameCharacter::checkIsDead() {
    return currHealth <= 0;
}