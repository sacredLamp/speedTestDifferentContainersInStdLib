#pragma once
#include "containers.h"

class myList : protected containers{
private:
    std::list<int> testList;
public:
	void testInsertChronologicalNumbers();
    void testInsertRandomNumbers();
    void testAccessRandomPositions();
};

