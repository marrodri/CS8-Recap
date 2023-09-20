//
// Created by Marthel Rodriguez on 9/19/23.
//

#include "FileIoFunctions.h"

bool openFile(std::ifstream& fin, const std::string& filename)
{
    fin.open(filename);
    return !fin.fail();
}