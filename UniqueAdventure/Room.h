//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_ROOM_H
#define GAMES_CS3A_REVIEW_ROOM_H



#include <string>
#include <array>
#include <iostream>
const int maxCapOfConnectedRooms = 5;
class Room
{
public:
    Room();
    Room(const char*  roomName,
         char roomKeyword,
         std::array<char, maxCapOfConnectedRooms>  connectedRooms,
         bool isRoomDeadEnd,
         const char*  roomDescription);
    std::string roomName;
    char roomKeyword;
    std::array<char, maxCapOfConnectedRooms> connectedRooms;
    bool isRoomLocked;
    bool isRoomDeadEnd;

    void toggleLock(); // add(marthel)
    std::string roomDescription;
};


#endif //GAMES_CS3A_REVIEW_ROOM_H
