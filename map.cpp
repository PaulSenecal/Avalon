#include "map.h"

Map::Map() {}
Map::Map(int width, int height) {
    // TODO:
    // 1. m_width = width;
    // 2. m_height = height;
    // 3. Redimensionner m_tiles avec height lignes
    // 4. Pour chaque ligne, redimensionner avec width colonnes

    // Indice pour le redimensionnement :
    // m_tiles.resize(height);
    // for (int i = 0; i < height; i++) {
    //     m_tiles[i].resize(width);
    // }
}

int Map::getWidth() const
{
    return this->m_width;
}

int Map::getHeight() const
{
    return this->m_height;
}


void Map::setObject(int row, int col, ObjectType type)
{

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
