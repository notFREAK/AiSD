#include <iostream>
#include <Windows.h>
#include "MyList.h"


int Check() {
    int input_value;
    while (true) {
        std::cin >> input_value;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "�������� ��������, ���������� �����" << std::endl;
        }
        else {
            break;
        }
    }
    return input_value;
}

int CheckNonNeg() {
    int input_value;
    while (true) {
        std::cin >> input_value;
        if (std::cin.fail() || input_value < 0) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "�������� ��������, ���������� �����" << std::endl;
        }
        else {
            break;
        }
    }
    return input_value;
}

int Options(MyList <int>& start_list, MyList <int> &current_list) {
    std::cout << "================= ��� \"������\" ==================" << std::endl;
    std::cout << "����������� ������: ";
    if (start_list.IsEmpty()) {
        std::cout << "-" << std::endl;
    }
    else {
        MyList<int>::Iterator it = start_list.begin();
        do {
            std::cout << *it << " ";
            ++it;
        } while (it != start_list.end());
        std::cout << std::endl;
    }
    std::cout << "������� �������� ������: ";
    if (current_list.IsEmpty()) {
        std::cout << "-" << std::endl;
    }
    else {
        MyList<int>::Iterator it = current_list.begin();
        do {
            std::cout << *it << " ";
            ++it;
        } while (it != current_list.end());
        std::cout << std::endl;
    }
    std::cout << "============================================" << std::endl;
    std::cout << "1. ����� ������� ������ " << std::endl;
    std::cout << "2. ������� ������" << std::endl;
    std::cout << "3. �������� ������ �� �������" << std::endl;
    std::cout << "4. ����� ������� ��������� ��������" << std::endl;
    std::cout << "5. ������ �������� � �������� ������� � ������" << std::endl;
    std::cout << "6. ��������� �������� � �������� ������� � ������" << std::endl;
    std::cout << "7. ��������� ������� � ������ ��� ��������� ��������" << std::endl;
    std::cout << "8. ��������� ������ ��������" << std::endl;
    std::cout << "9. ��������� ������ �������� � ������� � �������� �������" << std::endl;
    std::cout << "10. �������� ��������� �������� �� ������" << std::endl;
    std::cout << "11. �������� �������� �� ������� � �������� �������" << std::endl;
    std::cout << "12. ��� \"������ ��������\"" << std::endl;
    std::cout << "13. ��� \"�������� ��������\"" << std::endl;
    std::cout << "14. �����" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "������� �������:" << std::endl;
    return Check();
}

int OptionsIterator(MyList <int>::Iterator* it) {
    std::cout << "================= ��� \"������ ��������\" ==================" << std::endl;
    std::cout << "������� �������� ��������� ";
    if (it == NULL)
        std::cout << "- " << std::endl;
    else
        std::cout << **it << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "1. ������ ������� ��������� begin()" << std::endl;
    std::cout << "2. ������ ����������������� ������� ��������� end()" << std::endl;
    std::cout << "3. �������� ������� �� ������ � ������ � �������� �������� *" << std::endl;
    std::cout << "4. �������� ����������" << std::endl;
    std::cout << "5. �������� ���������� ��� �������� � �����������" << std::endl;
    std::cout << "6. �������� �������� �� �������� �������" << std::endl;
    std::cout << "7. �������� �������� �� �������� �������" << std::endl;
    std::cout << "8. �����" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "������� �������:" << std::endl;
    return Check();
}

int OptionsReverseIterator(MyList <int>::ReverseIterator* it) {
    std::cout << "================= ��� \"������ ��������\" ==================" << std::endl;
    std::cout << "������� �������� ���������: ";
    if (it == NULL)
        std::cout << "- " << std::endl;
    else
        std::cout << **it << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "1. ������ ��������� ��������� rbegin()" << std::endl;
    std::cout << "2. ������ ����������������� ��������� ��������� rend()" << std::endl;
    std::cout << "3. �������� ������ � �������� ��������" << std::endl;
    std::cout << "4. �������� ����������" << std::endl;
    std::cout << "5. �������� ���������� ��� �������� � �����������" << std::endl;
    std::cout << "6. �������� �������� �� �������� �������" << std::endl;
    std::cout << "7. �������� �������� �� �������� �������" << std::endl;
    std::cout << "8. �����" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "������� �������:" << std::endl;
    return Check();
}

void MenuReverseIterator(MyList<int>& list) {
    system("cls");
    MyList<int>::ReverseIterator *it = NULL;
    int input_value;
    bool f = true;
    while (f) {
        switch (OptionsReverseIterator(it)) {
        case 1:
            if (it == NULL) {
                it = new MyList<int>::ReverseIterator(list.rbegin());
                std::cout << "������ rbegin() ������� ��������" << std::endl;
            }
            else
                std::cout << "�������� ��� ���������������" << std::endl;

            break;
        case 2:
            if (it == NULL) {
                it = new MyList<int>::ReverseIterator(list.rend());
                std::cout << "������ rend() ������� ��������" << std::endl;
            }
            else
                std::cout << "�������� ��� ���������������" << std::endl;
            break;
        case 3:
            std::cout << "������� �������� ��� ������:" << std::endl;
            input_value = Check();
            **it = input_value;
            std::cout << "�������� �������� ��������" << std::endl;
            break;
        case 4:
            ++(*it);
            std::cout << "������� � ����������� �������� ��������" << std::endl;
            break;
        case 5:
            --(*it);
            std::cout << "������� � ���������� �������� ��������" << std::endl;
            break;
        case 6:
            if (*it == list.rend())
                std::cout << "�������� ��������� �� ������" << std::endl;
            if (*it != list.rend())
                std::cout << "�������� �� ��������� �� ������" << std::endl;
            break;
        case 7:
            if (*it == list.rbegin())
                std::cout << "�������� ��������� �� �����" << std::endl;
            if (*it != list.rbegin())
                std::cout << "�������� �� ��������� �� �����" << std::endl;
            break;
        case 8:
            delete it;
            f = false;
            break;
        default:
            std::cout << "������� �� ����������" << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }
}

void MenuIterator(MyList<int>&list) {
    system("cls");
    int input_value;
    MyList<int>::Iterator* it = NULL;
    bool f = true;
    while (f) {
        switch (OptionsIterator(it)) {
        case 1:
            if (it == NULL) {
                it = new MyList<int>::Iterator(list.begin());
                std::cout << "������ begin() ������� ��������" << std::endl;
            }
            else
                std::cout << "�������� ��� ���������������" << std::endl;

            break;
        case 2:
            if (it == NULL) {
                it = new MyList<int>::Iterator(list.end());
                std::cout << "������ end() ������� ��������" << std::endl;
            }
            else
                std::cout << "�������� ��� ���������������" << std::endl;
            break;
        case 3:
            std::cout << "������� �������� ��� ������:" << std::endl;
            input_value = Check();
            **it = input_value;
            std::cout << "�������� �������� ��������" << std::endl;
            break;
        case 4:
            ++(*it);
            std::cout << "������� � ���������� �������� ��������" << std::endl;
            break;
        case 5:
            --(*it);
            std::cout << "������� � ����������� �������� ��������" << std::endl;
            break;
        case 6:
            if (*it == list.begin())
                std::cout << "�������� ��������� �� ������" << std::endl;
            if (*it != list.begin())
                std::cout << "�������� �� ��������� �� ������" << std::endl;
            break;
        case 7:
            if (*it == list.end())
                std::cout << "�������� ��������� �� �����" << std::endl;
            if (*it != list.end())
                std::cout << "�������� �� ��������� �� �����" << std::endl;
            break;
        case 8:
            delete it;
            f = false;
            break;
        default:
            std::cout << "������� �� ����������" << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }
}

void Menu() {
    int value, input_value;
    bool f = true;
    std::cout << "������� ������ ������:";
    value = CheckNonNeg();

    MyList <int> start_list;
    for (int i = 0; i < value; i++) {
        start_list.AddValue(i);
    }
    MyList <int> current_list(&start_list);

    while (f) {
        try {
            switch (Options(start_list, current_list)) {
            case 1:
                std::cout << "������ ������: " << current_list.GetSize() << std::endl;
                break;
            case 2:
                std::cout << "������ �������" << std::endl;
                current_list.Clean();
                break;
            case 3:
                if (current_list.IsEmpty()) {
                    std::cout << "������ ����" << std::endl;
                }
                else {
                    std::cout << "������ �� ����" << std::endl;
                }
                break;
            case 4:
                std::cout << "������� ��������, ������� �������� ����� ���������:" << std::endl;
                input_value = Check();
                if (current_list.IsThere(input_value)) {
                    std::cout << "�������� �������� ��������� ������" << std::endl;
                }
                else {
                    std::cout << "�������� �� �������� ��������� ������" << std::endl;
                }
                break;
            case 5:
                std::cout << "������� ������� �������� ��������: " << std::endl;
                input_value = CheckNonNeg();
                std::cout << "��������: " << current_list.FindValue(input_value) << std::endl;
                break;
            case 6:
                std::cout << "������� ������� ����������� ��������:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "������� �������� ��� ������:" << std::endl;
                value = Check();
                if (current_list.ChangeValue(input_value, value))
                    std::cout << "�������� ������� ��������" << std::endl;
                break;
            case 7:
                std::cout << "������� ��������, ������� ����� �����:" << std::endl;
                input_value = Check();
                value = current_list.FindPos(input_value);
                if (value != -1) {
                    std::cout << "������� ��������: " << value << std::endl;
                }
                else {
                    std::cout << "�������� �� �������� ��������� ������" << std::endl;
                }
                break;
            case 8:
                std::cout << "������� �������� ��� ����������:" << std::endl;
                input_value = Check();
                current_list.AddValue(input_value);
                std::cout << "�������� ������� ���������" << std::endl;
                break;
            case 9:
                std::cout << "������� ������� ��� ����������:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "������� �������� ��� ����������:" << std::endl;
                value = Check();
                if (current_list.AddValueToPos(input_value, value)) {
                    std::cout << "�������� ������� ���������" << std::endl;
                }
                break;
            case 10:
                std::cout << "������� �������� ��� ��������:" << std::endl;
                input_value = Check();
                value = current_list.DeleteValue(input_value);
                if (input_value == value) {
                    std::cout << "�������� ������� �������" << std::endl;
                }
                else {
                    std::cout << "�������� �� �������" << std::endl;
                }
                break;
            case 11:
                std::cout << "������� ������� ��� ��������:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "�������� " << current_list.DeletePos(input_value) << " ������� �������" << std::endl;
                break;
            case 12:
                MenuIterator(current_list);
                break;
            case 13:
                MenuReverseIterator(current_list);
                break;
            case 14:
                f = false;
                break;
            default:
                std::cout << "������� �� ����������" << std::endl;
                break;
            }
        }
        catch (const char* error_message) {
            std::cout << error_message << std::endl;
        }
        system("pause");
        system("cls");
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Menu();
    return 0;
}
