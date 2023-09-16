//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Room.h"

// the room class must have a constructor,
// as it will need to have data setted for each room.

Room::Room()
{
    this->roomName = " ";
    this->roomKeyword = ' ';
    this->connectedRooms = {' ', ' ', ' ', ' ', ' '};
    this->isRoomLocked = false;
    // this->isRoomOutside = false;
    this->roomDescription = " ";
}

Room::Room(const char *roomName,
           char roomKeyword,
           std::array<char, maxCapOfConnectedRooms> connectedRooms,
           bool isRoomDeadEnd,
           const char *roomDescription)
{
    this->roomName = roomName;
    this->roomKeyword = roomKeyword;
    this->connectedRooms = connectedRooms;
    this->isRoomLocked = false;
    this->isRoomDeadEnd = isRoomDeadEnd;
    this->roomDescription = roomDescription;
}

void Room::toggleLock()
{
    int setToogle = rand() % 2;

    if(setToogle == 1){
        isRoomLocked = true;
    }
    else{
        isRoomLocked = false;

    }
    // todo, when the user has changed of room and this room is a dead end,
    // call this function to toggle the lock, it will call a random number.
    //if the random number is equal to a specific number; toogle the lock to true.
//    std::cout << "calling toggleLock for room: " << this->roomName << std::endl;


}

