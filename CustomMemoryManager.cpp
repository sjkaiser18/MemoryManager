//
// Created by mark on 1/24/20.
//

#include "CustomMemoryManager.h"

CustomMemoryManager* CustomMemoryManager::allocator=nullptr;
CustomMemoryManager* CustomMemoryManager::getInstance() {
    /*if(allocator==nullptr){
        allocator=new CustomMemoryManager();
    }*/

}