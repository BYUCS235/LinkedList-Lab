#pragma once

#include <string>

#include "LinkedListInterface.h"

template<typename T>
class LinkedList: public LinkedListInterface<T> {
public:
    LinkedList() {
        // implement your constructor here
    }

    virtual ~LinkedList() {
        // implement your destructor here
    }

    virtual void push_front(T item) {
        // implement push_front here
    }

    virtual void push_back(T item) {
        // implement push_back here
    }

    virtual void insert(T item, size_t position) {
        // implement insert here
    }

    virtual void pop_front() {
        // implement pop_front here
    }

    virtual void pop_back() {
        // implement pop_back here
    }

    virtual void remove(size_t position) {
        // implement remove here
    }

    virtual T front() const {
        // implement front here
    }

    virtual T back() const {
        // implement back here
    }

    virtual T at(size_t index) const {
        // implement at here
    }

    virtual bool contains(const T& item) const {
        // implement contains here
    }

    virtual size_t size() const {
        // implement size here
    }

    virtual void clear() {
        // implement clear here
    }

    virtual std::string toString() const {
        // implement toString here
    }
};
