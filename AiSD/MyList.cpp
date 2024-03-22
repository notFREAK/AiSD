#include "MyList.h"
template<typename T>
MyList<T>::MyList() {
    head = nullptr;
    size = 0;
}

template<typename T>
MyList<T>::MyList(MyList* a) {
    Node* current = a->head;
    do {
        AddValue(current->item);
        current = current->next;
    } while (current != a->head);

}

template<typename T>
MyList<T>::~MyList() {
    Clean();
}

template<typename T>
void MyList<T>::Clean() {
    while (head != nullptr) {
        DeletePos(0);
    }
}

template<typename T>
int MyList<T>::GetSize() {
    return size;
}

template<typename T>
bool MyList<T>::IsEmpty() {
    return (head == nullptr);
}

template<typename T>
bool MyList<T>::IsThere(T value) {
    Node* current = head;
    bool flag = false;
    do {
        if (current->item == value) {
            flag = true;
            break;
        }
        else {
            current = current->next;
        }
    } while (current != head);
    return flag;
}

template<typename T>
T MyList<T>::FindValue(int k) {
    if (k < size && k >= 0) {
        Node* current = head;
        for (int i = 0; i < k; i++) {
            current = current->next;
        }
        T value = current->item;
        return value;
    }
    else {
        throw "¬веденна€ позици€ недействительна";
    }
}

template<typename T>
bool MyList<T>::ChangeValue(int k, T value) {
    bool flag = false;
    if (k < size && k >= 0) {
        Node* current = head;
        for (int i = 0; i < k; i++) {
            current = current->next;
        }
        current->item = value;
        flag = true;
    }
    else {
        throw "¬веденна€ позици€ недействительна";
    }
    return flag;
}

template<typename T>
int MyList<T>::FindPos(T value) {
    Node* current = head;
    int i = 0, k = -1;
    do {
        if (current->item == value) {
            k = i;
            break;
        }
        else {
            current = current->next;
        }
        i++;
    } while (current != head);
    return k;
}

template<typename T>
void MyList<T>::AddValue(T value) {
    if (size == 0) {
        head = new Node();
        head->next = head;
        head->prev = head;
    }
    else {
        Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        auto* temp = new Node(value);
        current->next = temp;
        temp->next = head;
        temp->prev = current;
        head->prev = temp;
    }
    size++;
}

template<typename T>
bool MyList<T>::AddValueToPos(int k, T value) {
    bool flag = true;
    Node* current = head;
    if (k <= size && k > 0) {
        for (int i = 0; i < k; i++) {
            current = current->next;
        }
        auto* temp = new Node(value);
        temp->prev = current->prev;
        temp->item = value;
        temp->next = current;
        current->prev->next = temp;
        current->prev = temp;
        size++;
    }
    else if (k == 0) {
        auto* temp = new Node(value);
        auto* temp2 = head;
        head = temp;
        head->next = temp2;
        head->prev = temp2->prev;
        temp2->prev->next = head;
        temp2->prev = head;
        head->item = value;
        size++;
    }
    else {
        throw "¬веденна€ позици€ недействительна";
    }
    return flag;
}

template<typename T>
T MyList<T>::DeleteValue(T value) {
    return DeletePos(FindPos(value));
}

template<typename T>
T MyList<T>::DeletePos(int k) {
    if (k < size && k >= 0) {
        Node* current = head;
        for (int i = 0; i < k; i++) {
            current = current->next;
        }
        if (current == head) {
            head = head->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        T value = current->item;
        if (size == 1) {
            head = nullptr;
        }
        delete current;
        size--;
        return value;
    }
    else {
        throw "¬веденна€ позици€ недействительна";
    }
}
