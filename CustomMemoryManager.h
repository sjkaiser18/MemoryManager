//
// Created by mark on 1/24/20.
//

#ifndef MEMORYMANAGER_CUSTOMMEMORYMANAGER_H
#define MEMORYMANAGER_CUSTOMMEMORYMANAGER_H

//this is the AllocatorSingleton class
class CustomMemoryManager {

private:
    static CustomMemoryManager *allocator;//the single instance
    CustomMemoryManager();//private constructor
public:
    static CustomMemoryManager* getInstance(); //the way to "get" that private instance
    //~CustomMemoryManager(); //destructor
};



#endif //MEMORYMANAGER_CUSTOMMEMORYMANAGER_H
