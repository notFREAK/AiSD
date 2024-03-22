#pragma once
#include <iostream>


template <typename T>
class MyList {

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
    MyList();                               //Конструктор
    MyList(MyList* a);                      //Конструктор копирования
    ~MyList();                              //Деструктор
    int GetSize();                          //Опрос размера списка
    void Clean();                           //Очистка списка
    bool IsEmpty();                         //Проверка списка на пустоту
    bool IsThere(T value);                  //Опрос наличия элемента
    T FindValue(int k);                     //Чтение значения с заданным номером в списке
    bool ChangeValue(int k, T value);       //Изменение значения с заданным номером в списке
    int FindPos(T value);                   //Получение позиции элемента с заданным значением
    void AddValue(T value);                 //Включение нового значения
    bool AddValueToPos(int k, T value);     //Включение нового значения в позицию с заданным номером
    T DeleteValue(T value);                 //Удаление заданного значения из списка
    T DeletePos(int k);                     //Удаление значения из позиции с заданным номером

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
