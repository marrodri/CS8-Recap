//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_GAME_H
#define GAMES_CS3A_REVIEW_GAME_H


#include "room.h"
#include <unordered_map>


class Game {
public:
    Room currentRoom;
    bool win; // CHANGED FROM hasUserExitedTheRoom
    bool loose;
    std::unordered_map<char, Room> roomsMap;
    Game();
    void runGame();
    void enterUserAction();
    void changeRoom(char roomToChange);
    void setCurrentRoom(Room changedRoom);
    bool isRoomConnected(std::array<char, maxCapOfConnectedRooms> connectedRooms, char roomToCheck);
};


#endif //GAMES_CS3A_REVIEW_GAME_H
