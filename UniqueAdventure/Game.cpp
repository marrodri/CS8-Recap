//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Game.h"

#include "game.h"
#include <algorithm>
#include <array>

// Game::Game() {
// }
Game::Game()
{

    std::cout << "Instantiating game" << std::endl;
    this->win = false;
    this->loose = false;
    this->roomsMap['l'] = Room("(l)iving room", 'l', {'d', 'h', 'r', 'm', 's'}, false, "living room");
    this->roomsMap['d'] = Room("(d)ining room", 'd', {'k', 'l', ' ', ' ', ' '}, false, "dining room");
    this->roomsMap['b'] = Room("(b)edroom", 'b', {'l', ' ', ' ', ' ', ' '}, true, "bed");
    this->roomsMap['m'] = Room("(m)aster bedroom", 'm', {'l', ' ', ' ', ' ', ' '}, false, "master bed");
    this->roomsMap['k'] = Room("(k)itchen", 'k', {'p', 'd', ' ', ' ', ' '}, false, "cooking");
    this->roomsMap['h'] = Room("(h)allway", 'h', {'l', 'f', ' ', ' ', ' '}, true, "hall");
    this->roomsMap['r'] = Room("(r)estroom", 'r', {'l', ' ', ' ', ' ', ' '}, true, "toilet");
    this->roomsMap['p'] = Room("(p)atio", 'o', {'k', ' ', ' ', ' ', ' '}, true, "patio/backyard");
    this->roomsMap['f'] = Room("(f)ront", 'f', {'h', ' ', ' ', ' ', ' '}, true, "Front entrance to house");
    this->currentRoom = roomsMap['p'];
}
void Game::runGame()
{
    std::cout << "running game" << std::endl;
    while (!this->win && !this->loose)
    {
        this->enterUserAction();
        this->loose = currentRoom.isRoomLocked && currentRoom.isRoomDeadEnd;
    }
    if (this->loose)
    {
        std::cout << "I'm sorry you have locked yourself, wanna try again?" << std::endl;
    }
    else if (this->win)
    {
        std::cout << "Congrats, you have won!!!, wanna play again?" << std::endl;
    }
}
bool Game::isRoomConnected(std::array<char, maxCapOfConnectedRooms> connectedRooms, char roomToCheck)
{
    for (int i = 0; i < maxCapOfConnectedRooms; i++)
    {
        if (connectedRooms[i] == roomToCheck)
        {
            return true;
        }
    }
    return false;
}

void Game::enterUserAction()
{
    char userInput = ' ';
    std::array<char, maxCapOfConnectedRooms> connectedRooms = currentRoom.connectedRooms;
    char roomKey;

    while (userInput == ' ')
    {
        std::cout << "You're in the " << currentRoom.roomName << std::endl;
        std::cout << "Which room do you want to go?" << std::endl;
        for (int i = 0; i < maxCapOfConnectedRooms; i++)
        {
            roomKey = connectedRooms[i];
            if (roomKey != ' ')
            {
                std::cout << roomsMap[roomKey].roomName << std::endl;
            }
        }
        std::cin >> userInput;
        if (isRoomConnected(connectedRooms, userInput))
        {
            this->changeRoom(userInput);
        }
        else
        {
            std::cout << "I'm sorry that is not a valid response" << std::endl;
            std::cout << "Please enter a valid room" << std::endl;
            userInput = ' ';
        }
    }
}

void Game::changeRoom(char roomToChange)
{
    this->setCurrentRoom(roomsMap[roomToChange]);
    std::cout << "changing room to: " << this->currentRoom.roomName << std::endl;
    if(roomToChange == 'f' || roomToChange == 'p' || roomToChange == 'm')
    {
        this->currentRoom.toggleLock();
    }
    if(roomToChange == 'm' && !this->currentRoom.isRoomLocked){
        this->win = true;
    }
}

void Game::setCurrentRoom(Room changedRoom)
{
    this->currentRoom = changedRoom;
}