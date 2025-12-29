#ifndef MAP_H
#define MAP_H

#include <vector>
#include "tile.h"

class QGraphicsScene;

class Map {
private:
    int m_width;
    int m_height;
    std::vector<std::vector<Tile>> m_tiles;  // Grille 2D de Tiles

public:
    // Constructeur : comment initialiser la map avec width x height ?
    Map(int width, int height);
    Map();

    // Accès aux tiles : que retourne cette méthode ?
    Tile& getTile(int row, int col);

    // Modification : que fait cette méthode ?
    void setObject(int row, int col, ObjectType type);

    // Getters
    int getWidth() const;
    int getHeight() const;
};

#endif // MAP_H
