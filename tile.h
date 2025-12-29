#ifndef TILE_H
#define TILE_H

enum ObjectType {
    EMPTY = 0,
    TREE = 1,
    CRATE = 2,
    WALL = 3
    // Ajoute d'autres types selon tes besoins
};

class Tile {
private:
    ObjectType m_type;
    bool m_walkable;

public:
    // Constructeur : comment initialiser une Tile vide par défaut ?
    Tile();

    // Getters : que retournent-ils ?
    ObjectType getType() ;
    bool isWalkable() ;

    // Setters : que modifient-ils ?
    void setType(ObjectType type);
    void setWalkable(bool walkable);
};

#endif // TILE_H
