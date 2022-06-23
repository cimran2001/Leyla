#pragma once

#include <iostream>

class Vector {
private:
    int *_arr; // elements
    int _size; // how many elements we have
    int _capacity; // the size of arr

public:
    Vector() {
        _arr = new int[1];
        _size = 0;
        _capacity = 1;
    }

    Vector(int size) {
        _arr = new int[size];
        _size = 0;
        _capacity = size;
    }

    Vector(const Vector &vector) {
        _capacity = vector._capacity;
        _size = vector._size;

        _arr = new int[_capacity];
        for (int i = 0; i < _size; i++)
            _arr[i] = vector._arr[i];
    }

    Vector(Vector &&vector) noexcept {
        _size = vector._size;
        _capacity = vector._capacity;

        _arr = vector._arr;
        vector._arr = nullptr;
    }

    ~Vector() {
        if (_arr != nullptr)
            delete[] _arr;
    }

    void push_back(int value) {
        if (_capacity <= _size) {
            int newCapacity = _capacity * 2;
            int *newArr = new int[newCapacity];
            
            for (int i = 0; i < _size; i++)
                newArr[i] = _arr[i];
            delete[] _arr;

            _arr = newArr;
            _capacity = newCapacity;            
        }

        _arr[_size] = value;
        _size++;
    }

    const int &at(int index) {
        if (index < 0 || index >= _size)
            throw "Not a correct index";

        return _arr[index];
    }

    int size() {
        return _size;
    }

    int capacity() {
        return _capacity;
    }

    // operator overloading
    int &operator[](int index) {
        return _arr[index];
    }
};
