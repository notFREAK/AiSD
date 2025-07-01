#pragma once
#include "IList.h"
#include <iostream>


template <typename T>
class MyList : public IList<T> {

protected:

    class Node {
    public:
        T item;
        Node* next;
        Node* prev;
        Node() : item(0), next(nullptr), prev(nullptr) {}
        explicit Node(T value) : item(value), next(nullptr), prev(nullptr) {}
        ~Node() = default;
    };

private:

    int size = 0;
    Node* head;


public:
    ~MyList() override;                              //
    int GetSize() const override;                          //  
    void Clean() override;                           // 
    bool IsEmpty() const override;                         //   
    bool IsThere(T value) const override;                  //  
    T FindValue(int k) const override;                     //      
    bool ChangeValue(int k, T value) override;       //      
    int FindPos(T value) const override;                   //     
    void AddValue(T value) override;                 //  
    bool AddValueToPos(int k, T value) override;     //       
    T DeleteValue(T value) override;                 //    
    T DeletePos(int k) override;                     //      
    T DeleteValue(T value);                 //Óäàëåíèå çàäàííîãî çíà÷åíèÿ èç ñïèñêà
    T DeletePos(int k);                     //Óäàëåíèå çíà÷åíèÿ èç ïîçèöèè ñ çàäàííûì íîìåðîì

    class Iterator {
        MyList* p;
        Node* cur;
    public:
        explicit Iterator(Node* cur_, MyList* p_) : cur(cur_), p(p_) {};
        T& operator* () { return cur->item; }
        Iterator& operator++() { cur = cur->next; return *this; }
        Iterator& operator--() { cur = cur->prev; return *this; }
        bool operator==(const Iterator& it) { return cur == it.cur; }
        bool operator!=(const Iterator& it) { return cur != it.cur; }
    };

    class ReverseIterator {
        MyList* p;
        Node* cur;
    public:
        ReverseIterator(Node* cur_, MyList* p_) : cur(cur_), p(p_) {};
        T& operator* () { return cur->item; }
        ReverseIterator& operator++() { cur = cur->prev; return *this; }
        ReverseIterator& operator--() { cur = cur->next; return *this; }
        bool operator==(const ReverseIterator& it) { return cur == it.cur; }
        bool operator!=(const ReverseIterator& it) { return cur != it.cur; }
    };

    friend class Iterator;
    friend class ReverseIterator;

    Iterator begin() {
        return Iterator(head, this);
    }
    Iterator end() {
        return Iterator(head->prev, this);
    }

    ReverseIterator rbegin() {
        return ReverseIterator(head->prev, this);
    }
    ReverseIterator rend() {
        return ReverseIterator(head, this);
    }
};

template
class MyList<int>;
