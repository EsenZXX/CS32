
#ifndef Game_h
#define Game_h

class City;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nTooters);
    ~Game();

    // Mutators
    void play();

private:
    City* m_city;
};

int decodeDirection(char dir);

#endif 
