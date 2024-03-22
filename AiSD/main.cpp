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
            std::cout << "Неверное значение, попробуйте снова" << std::endl;
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
            std::cout << "Неверное значение, попробуйте снова" << std::endl;
        }
        else {
            break;
        }
    }
    return input_value;
}

int Options(MyList <int>& start_list, MyList <int> &current_list) {
    std::cout << "================= АТД \"Список\" ==================" << std::endl;
    std::cout << "Изначальный список: ";
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
    std::cout << "Текущее значение списка: ";
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
    std::cout << "1. Опрос размера списка " << std::endl;
    std::cout << "2. Очистка списка" << std::endl;
    std::cout << "3. Проверка списка на пустоту" << std::endl;
    std::cout << "4. Опрос наличия заданного значения" << std::endl;
    std::cout << "5. Чтение значения с заданным номером в списке" << std::endl;
    std::cout << "6. Изменение значения с заданным номером в списке" << std::endl;
    std::cout << "7. Получение позиции в списке для заданного значения" << std::endl;
    std::cout << "8. Включение нового значения" << std::endl;
    std::cout << "9. Включение нового значения в позицию с заданным номером" << std::endl;
    std::cout << "10. Удаление заданного значения из списка" << std::endl;
    std::cout << "11. Удаление значения из позиции с заданным номером" << std::endl;
    std::cout << "12. АТД \"Прямой Итератор\"" << std::endl;
    std::cout << "13. АТД \"Обратный Итератор\"" << std::endl;
    std::cout << "14. Выход" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Введите команду:" << std::endl;
    return Check();
}

int OptionsIterator(MyList <int>::Iterator* it) {
    std::cout << "================= АТД \"Прямой итератор\" ==================" << std::endl;
    std::cout << "Текущее значение итератора ";
    if (it == NULL)
        std::cout << "- " << std::endl;
    else
        std::cout << **it << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "1. Запрос прямого итератора begin()" << std::endl;
    std::cout << "2. Запрос «неустановленного» прямого итератора end()" << std::endl;
    std::cout << "3. Операция доступа по чтению и записи к текущему значению *" << std::endl;
    std::cout << "4. Операция инкремента" << std::endl;
    std::cout << "5. Операция декремента для перехода к предыдущему" << std::endl;
    std::cout << "6. Проверка является ли итератор головой" << std::endl;
    std::cout << "7. Проверка является ли итератор хвостом" << std::endl;
    std::cout << "8. Выход" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Введите команду:" << std::endl;
    return Check();
}

int OptionsReverseIterator(MyList <int>::ReverseIterator* it) {
    std::cout << "================= АТД \"Прямой итератор\" ==================" << std::endl;
    std::cout << "Текущее значение итератора: ";
    if (it == NULL)
        std::cout << "- " << std::endl;
    else
        std::cout << **it << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "1. Запрос обратного итератора rbegin()" << std::endl;
    std::cout << "2. Запрос «неустановленного» обратного итератора rend()" << std::endl;
    std::cout << "3. Операция записи к текущему значению" << std::endl;
    std::cout << "4. Операция инкремента" << std::endl;
    std::cout << "5. Операция декремента для перехода к предыдущему" << std::endl;
    std::cout << "6. Проверка является ли итератор головой" << std::endl;
    std::cout << "7. Проверка является ли итератор хвостом" << std::endl;
    std::cout << "8. Выход" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Введите команду:" << std::endl;
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
                std::cout << "Запрос rbegin() успешно выполнен" << std::endl;
            }
            else
                std::cout << "Итератор уже инициализирован" << std::endl;

            break;
        case 2:
            if (it == NULL) {
                it = new MyList<int>::ReverseIterator(list.rend());
                std::cout << "Запрос rend() успешно выполнен" << std::endl;
            }
            else
                std::cout << "Итератор уже инициализирован" << std::endl;
            break;
        case 3:
            std::cout << "Введите значение для записи:" << std::endl;
            input_value = Check();
            **it = input_value;
            std::cout << "Значение элемента изменено" << std::endl;
            break;
        case 4:
            ++(*it);
            std::cout << "Переход к предыдущему элементу выполнен" << std::endl;
            break;
        case 5:
            --(*it);
            std::cout << "Переход к следующему элементу выполнен" << std::endl;
            break;
        case 6:
            if (*it == list.rend())
                std::cout << "Итератор указывает на голову" << std::endl;
            if (*it != list.rend())
                std::cout << "Итератор не указывает на голову" << std::endl;
            break;
        case 7:
            if (*it == list.rbegin())
                std::cout << "Итератор указывает на хвост" << std::endl;
            if (*it != list.rbegin())
                std::cout << "Итератор не указывает на хвост" << std::endl;
            break;
        case 8:
            delete it;
            f = false;
            break;
        default:
            std::cout << "Команды не существует" << std::endl;
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
                std::cout << "Запрос begin() успешно выполнен" << std::endl;
            }
            else
                std::cout << "Итератор уже инициализирован" << std::endl;

            break;
        case 2:
            if (it == NULL) {
                it = new MyList<int>::Iterator(list.end());
                std::cout << "Запрос end() успешно выполнен" << std::endl;
            }
            else
                std::cout << "Итератор уже инициализирован" << std::endl;
            break;
        case 3:
            std::cout << "Введите значение для записи:" << std::endl;
            input_value = Check();
            **it = input_value;
            std::cout << "Значение элемента изменено" << std::endl;
            break;
        case 4:
            ++(*it);
            std::cout << "Переход к следующему элементу выполнен" << std::endl;
            break;
        case 5:
            --(*it);
            std::cout << "Переход к предыдущему элементу выполнен" << std::endl;
            break;
        case 6:
            if (*it == list.begin())
                std::cout << "Итератор указывает на голову" << std::endl;
            if (*it != list.begin())
                std::cout << "Итератор не указывает на голову" << std::endl;
            break;
        case 7:
            if (*it == list.end())
                std::cout << "Итератор указывает на хвост" << std::endl;
            if (*it != list.end())
                std::cout << "Итератор не указывает на хвост" << std::endl;
            break;
        case 8:
            delete it;
            f = false;
            break;
        default:
            std::cout << "Команды не существует" << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }
}

void Menu() {
    int value, input_value;
    bool f = true;
    std::cout << "Введите размер списка:";
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
                std::cout << "Размер списка: " << current_list.GetSize() << std::endl;
                break;
            case 2:
                std::cout << "Список отчищен" << std::endl;
                current_list.Clean();
                break;
            case 3:
                if (current_list.IsEmpty()) {
                    std::cout << "Список пуст" << std::endl;
                }
                else {
                    std::cout << "Список не пуст" << std::endl;
                }
                break;
            case 4:
                std::cout << "Введите значение, наличие которого нужно проверить:" << std::endl;
                input_value = Check();
                if (current_list.IsThere(input_value)) {
                    std::cout << "Значение является элементом списка" << std::endl;
                }
                else {
                    std::cout << "Значение не является элементом списка" << std::endl;
                }
                break;
            case 5:
                std::cout << "Введите позицию искомого значения: " << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Значение: " << current_list.FindValue(input_value) << std::endl;
                break;
            case 6:
                std::cout << "Введите позицию заменяемого значения:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Введите значение для замены:" << std::endl;
                value = Check();
                if (current_list.ChangeValue(input_value, value))
                    std::cout << "Значение успешно изменено" << std::endl;
                break;
            case 7:
                std::cout << "Введите значение, которое нужно найти:" << std::endl;
                input_value = Check();
                value = current_list.FindPos(input_value);
                if (value != -1) {
                    std::cout << "Позиция значения: " << value << std::endl;
                }
                else {
                    std::cout << "Значение не является элементом списка" << std::endl;
                }
                break;
            case 8:
                std::cout << "Введите значение для добавления:" << std::endl;
                input_value = Check();
                current_list.AddValue(input_value);
                std::cout << "Значение успешно добавлено" << std::endl;
                break;
            case 9:
                std::cout << "Введите позицию для добавления:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Введите значение для добавления:" << std::endl;
                value = Check();
                if (current_list.AddValueToPos(input_value, value)) {
                    std::cout << "Значение успешно добавлено" << std::endl;
                }
                break;
            case 10:
                std::cout << "Введите значение для удаления:" << std::endl;
                input_value = Check();
                value = current_list.DeleteValue(input_value);
                if (input_value == value) {
                    std::cout << "Значение успешно удалено" << std::endl;
                }
                else {
                    std::cout << "Значение не удалено" << std::endl;
                }
                break;
            case 11:
                std::cout << "Введите позицию для удаления:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Значение " << current_list.DeletePos(input_value) << " успешно удалено" << std::endl;
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
                std::cout << "Команды не существует" << std::endl;
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
