#include "tile.h"

Tile::Tile() {
    m_type = EMPTY;
    m_walkable = true;
}

ObjectType Tile::getType() {
    return m_type;
}

bool Tile::isWalkable() {
    return m_walkable;
}

void Tile::setType(ObjectType type) {
    m_type = type;

    // Ajuster walkable selon le type
    if (type == WALL || type == TREE) {
        m_walkable = false;
    } else {
        m_walkable = true;
    }
}

void Tile::setWalkable(bool walkable) {
    m_walkable = walkable;
}
