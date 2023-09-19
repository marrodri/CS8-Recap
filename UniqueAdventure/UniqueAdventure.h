//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_UNIQUEADVENTURE_H
#define GAMES_CS3A_REVIEW_UNIQUEADVENTURE_H


#include "room.h"
#include <unordered_map>
#include "../Interfaces/GameInterface.h"


class UniqueAdventure : public GameInterface {
public:
    Room currentRoom;
    bool win; // CHANGED FROM hasUserExitedTheRoom
    bool loose;
    std::unordered_map<char, Room> roomsMap;
    UniqueAdventure();
    void runGame();
    void enterUserAction();
    void changeRoom(char roomToChange);
    void setCurrentRoom(Room changedRoom);
    bool isRoomConnected(std::array<char, maxCapOfConnectedRooms> connectedRooms, char roomToCheck);
    std::string getTitle() override;
    void start() override;
};


#endif //GAMES_CS3A_REVIEW_UNIQUEADVENTURE_H
