#include "Room.h"

Room::Room(int p, bool ie, vector<Item> is, vector<GameCharacter> npcs) {
    pos = p;
    isExit = ie;
    items = is;
    enemies = npcs;
}

void Room::clearLoot() {
    items.clear();
}

void Room::clearEnemies() {
    enemies.clear();
}