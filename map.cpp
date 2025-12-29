#include "map.h"

Map::Map() {}
Map::Map(int width, int height) {
    this->m_height = height;
    this->m_width = width;
    this->m_tiles.resize(height);
    for (int i = 0; i < height; i++) {
        m_tiles[i].resize(width);
    }
}

int Map::getWidth() const
{
    return this->m_width;
}

int Map::getHeight() const
{
    return this->m_height;
}


void Map::setObject(int row, int col, ObjectType type) {
    m_tiles[row][col].setType(type);
}
Tile& Map::getTile(int row, int col) {
    return m_tiles[row][col];
}
/*

private:
    int m_width;
    int m_height;
    std::vector<std::vector<Tile>> m_tiles;  // Grille 2D de Tiles

public:
    // Accès aux tiles : que retourne cette méthode ?
    Tile& getTile(int row, int col);

    // Modification : que fait cette méthode ?
    void setObject(int row, int col, ObjectType type);

*/
