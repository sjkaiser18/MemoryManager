//
// Created by mark on 1/23/20.
//

#include <cstddef>
#include <iostream>
#include "algoNew.h"

using std::cout;
using std::endl;
using std::cin;

#ifndef MEMORYMANAGER_POINT_H
#define MEMORYMANAGER_POINT_H
class Point {
private:
    unsigned int x, y, z;
public:
    Point (unsigned int xval = 0, unsigned int yval = 0, unsigned int zval = 0):
            x(xval), y(yval), z(zval) {
        cout << "Initializing Point Object with [" << x << ", "
             << y << ", " << z << "]." << endl;
    }

    ~Point () {
        cout << "Executing Point destructor" << endl;
    }

    void* operator new(size_t numBytes) {
        cout << "Allocating Point with new: " << numBytes << " bytes." << endl;
        //return malloc(numBytes);
        return ::new Point;

    }

    void operator delete(void* ptr) {
        cout << "De-allocating Point with delete." << endl;
        free(ptr);
    }

    void* operator new[](size_t numBytes) {
        cout << "Allocating Point Array with new[]: " << numBytes << " bytes." << endl;
        return malloc(numBytes);
    }

    void operator delete[] (void* ptr) {
        cout << "De-allocating Point array with delete." << endl;
        free(ptr);
    }

};
#endif //MEMORYMANAGER_POINT_H
