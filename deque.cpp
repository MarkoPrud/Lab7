#include "deque.h"
#include <iostream>
#include <cstdlib>

using namespace main_savitch_6B;

template <typename T>
deque::deque(){
    count = 0;
    first = NULL;
    last = NULL;
}

template <typename T>
deque::~deque() {

}

template <typename T>
deque::deque(const deque<T> &dq) {

}

template <typename T>
deque<T>& deque::operator=(const deque<T> &dq) {

}

template <typename T>
T& deque::front() {
    if(!empty()){
        return first->data();

    }
}

template <typename T>
T deque::front() const {
    if(!empty()){
        return first->link();
    }

}

template <typename T>
T& deque::back() {
    if(!empty()){
        return last->data();
    }

}

template <typename T>
T deque::back() const {
    if(!empty()){
        return first->link();
    }

}

template <typename T>
void deque::push_front(const T &entry) {
    list_head_insert(first, entry);
}

template <typename T>
void deque::push_back(const T &entry) {
    

}

template <typename T>
void deque::pop_front() {

}

template <typename T>
void deque::pop_back() {

}

template <typename T>
size_type deque::size() const {
    return count;

}

template <typename T>
bool deque::empty() const {
    if(size() == 0)
        return true;
}
