#include <iostream>
#include <Windows.h>
#include "MyList.h"

#include "InputValidator.h"


int Options(MyList <int>& start_list, MyList <int> &current_list) {
    return InputValidator::Check();
    return InputValidator::Check();
    return InputValidator::Check();
            input_value = InputValidator::Check();
    }
    else {
        MyList<int>::Iterator it = start_list.begin();
        do {
            std::cout << *it << " ";
            ++it;
        } while (it != start_list.end());
        std::cout << std::endl;
    }
    std::cout << "Òåêóùåå çíà÷åíèå ñïèñêà: ";
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
    std::cout << "1. Îïðîñ ðàçìåðà ñïèñêà " << std::endl;
    std::cout << "2. Î÷èñòêà ñïèñêà" << std::endl;
    std::cout << "3. Ïðîâåðêà ñïèñêà íà ïóñòîòó" << std::endl;
    std::cout << "4. Îïðîñ íàëè÷èÿ çàäàííîãî çíà÷åíèÿ" << std::endl;
    std::cout << "5. ×òåíèå çíà÷åíèÿ ñ çàäàííûì íîìåðîì â ñïèñêå" << std::endl;
    std::cout << "6. Èçìåíåíèå çíà÷åíèÿ ñ çàäàííûì íîìåðîì â ñïèñêå" << std::endl;
    std::cout << "7. Ïîëó÷åíèå ïîçèöèè â ñïèñêå äëÿ çàäàííîãî çíà÷åíèÿ" << std::endl;
    std::cout << "8. Âêëþ÷åíèå íîâîãî çíà÷åíèÿ" << std::endl;
    std::cout << "9. Âêëþ÷åíèå íîâîãî çíà÷åíèÿ â ïîçèöèþ ñ çàäàííûì íîìåðîì" << std::endl;
    std::cout << "10. Óäàëåíèå çàäàííîãî çíà÷åíèÿ èç ñïèñêà" << std::endl;
    std::cout << "11. Óäàëåíèå çíà÷åíèÿ èç ïîçèöèè ñ çàäàííûì íîìåðîì" << std::endl;
    std::cout << "12. ÀÒÄ \"Ïðÿìîé Èòåðàòîð\"" << std::endl;
    std::cout << "13. ÀÒÄ \"Îáðàòíûé Èòåðàòîð\"" << std::endl;
    std::cout << "14. Âûõîä" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Ââåäèòå êîìàíäó:" << std::endl;
    return Check();
}

int OptionsIterator(MyList <int>::Iterator* it) {
    std::cout << "================= ÀÒÄ \"Ïðÿìîé èòåðàòîð\" ==================" << std::endl;
    std::cout << "Òåêóùåå çíà÷åíèå èòåðàòîðà ";
    if (it == NULL)
        std::cout << "- " << std::endl;
    else
        std::cout << **it << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "1. Çàïðîñ ïðÿìîãî èòåðàòîðà begin()" << std::endl;
    std::cout << "2. Çàïðîñ «íåóñòàíîâëåííîãî» ïðÿìîãî èòåðàòîðà end()" << std::endl;
    std::cout << "3. Îïåðàöèÿ äîñòóïà ïî ÷òåíèþ è çàïèñè ê òåêóùåìó çíà÷åíèþ *" << std::endl;
    std::cout << "4. Îïåðàöèÿ èíêðåìåíòà" << std::endl;
    std::cout << "5. Îïåðàöèÿ äåêðåìåíòà äëÿ ïåðåõîäà ê ïðåäûäóùåìó" << std::endl;
    std::cout << "6. Ïðîâåðêà ÿâëÿåòñÿ ëè èòåðàòîð ãîëîâîé" << std::endl;
    std::cout << "7. Ïðîâåðêà ÿâëÿåòñÿ ëè èòåðàòîð õâîñòîì" << std::endl;
    std::cout << "8. Âûõîä" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Ââåäèòå êîìàíäó:" << std::endl;
    return Check();
}

int OptionsReverseIterator(MyList <int>::ReverseIterator* it) {
    std::cout << "================= ÀÒÄ \"Ïðÿìîé èòåðàòîð\" ==================" << std::endl;
    std::cout << "Òåêóùåå çíà÷åíèå èòåðàòîðà: ";
    if (it == NULL)
        std::cout << "- " << std::endl;
    else
        std::cout << **it << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "1. Çàïðîñ îáðàòíîãî èòåðàòîðà rbegin()" << std::endl;
    std::cout << "2. Çàïðîñ «íåóñòàíîâëåííîãî» îáðàòíîãî èòåðàòîðà rend()" << std::endl;
    std::cout << "3. Îïåðàöèÿ çàïèñè ê òåêóùåìó çíà÷åíèþ" << std::endl;
    std::cout << "4. Îïåðàöèÿ èíêðåìåíòà" << std::endl;
    std::cout << "5. Îïåðàöèÿ äåêðåìåíòà äëÿ ïåðåõîäà ê ïðåäûäóùåìó" << std::endl;
    std::cout << "6. Ïðîâåðêà ÿâëÿåòñÿ ëè èòåðàòîð ãîëîâîé" << std::endl;
    std::cout << "7. Ïðîâåðêà ÿâëÿåòñÿ ëè èòåðàòîð õâîñòîì" << std::endl;
    std::cout << "8. Âûõîä" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Ââåäèòå êîìàíäó:" << std::endl;
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
                std::cout << "Çàïðîñ rbegin() óñïåøíî âûïîëíåí" << std::endl;
            }
            else
                std::cout << "Èòåðàòîð óæå èíèöèàëèçèðîâàí" << std::endl;

            break;
        case 2:
            if (it == NULL) {
                it = new MyList<int>::ReverseIterator(list.rend());
                std::cout << "Çàïðîñ rend() óñïåøíî âûïîëíåí" << std::endl;
            }
            else
                std::cout << "Èòåðàòîð óæå èíèöèàëèçèðîâàí" << std::endl;
            break;
        case 3:
            std::cout << "Ââåäèòå çíà÷åíèå äëÿ çàïèñè:" << std::endl;
            input_value = Check();
            **it = input_value;
            std::cout << "Çíà÷åíèå ýëåìåíòà èçìåíåíî" << std::endl;
            break;
        case 4:
            ++(*it);
            std::cout << "Ïåðåõîä ê ïðåäûäóùåìó ýëåìåíòó âûïîëíåí" << std::endl;
            break;
        case 5:
            --(*it);
            std::cout << "Ïåðåõîä ê ñëåäóþùåìó ýëåìåíòó âûïîëíåí" << std::endl;
            break;
        case 6:
            if (*it == list.rend())
                std::cout << "Èòåðàòîð óêàçûâàåò íà ãîëîâó" << std::endl;
            if (*it != list.rend())
                std::cout << "Èòåðàòîð íå óêàçûâàåò íà ãîëîâó" << std::endl;
            break;
        case 7:
            if (*it == list.rbegin())
                std::cout << "Èòåðàòîð óêàçûâàåò íà õâîñò" << std::endl;
            if (*it != list.rbegin())
                std::cout << "Èòåðàòîð íå óêàçûâàåò íà õâîñò" << std::endl;
            break;
        case 8:
            delete it;
            f = false;
            break;
        default:
            std::cout << "Êîìàíäû íå ñóùåñòâóåò" << std::endl;
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
            input_value = InputValidator::Check();
    value = InputValidator::CheckNonNeg();
                input_value = InputValidator::Check();
                input_value = InputValidator::CheckNonNeg();
                input_value = InputValidator::CheckNonNeg();
                value = InputValidator::Check();
                input_value = InputValidator::Check();
                input_value = InputValidator::Check();
                input_value = InputValidator::CheckNonNeg();
                value = InputValidator::Check();
                input_value = InputValidator::Check();
                input_value = InputValidator::CheckNonNeg();
                std::cout << "Èòåðàòîð óæå èíèöèàëèçèðîâàí" << std::endl;
            break;
        case 3:
            std::cout << "Ââåäèòå çíà÷åíèå äëÿ çàïèñè:" << std::endl;
            input_value = Check();
            **it = input_value;
            std::cout << "Çíà÷åíèå ýëåìåíòà èçìåíåíî" << std::endl;
            break;
        case 4:
            ++(*it);
            std::cout << "Ïåðåõîä ê ñëåäóþùåìó ýëåìåíòó âûïîëíåí" << std::endl;
            break;
        case 5:
            --(*it);
            std::cout << "Ïåðåõîä ê ïðåäûäóùåìó ýëåìåíòó âûïîëíåí" << std::endl;
            break;
        case 6:
            if (*it == list.begin())
                std::cout << "Èòåðàòîð óêàçûâàåò íà ãîëîâó" << std::endl;
            if (*it != list.begin())
                std::cout << "Èòåðàòîð íå óêàçûâàåò íà ãîëîâó" << std::endl;
            break;
        case 7:
            if (*it == list.end())
                std::cout << "Èòåðàòîð óêàçûâàåò íà õâîñò" << std::endl;
            if (*it != list.end())
                std::cout << "Èòåðàòîð íå óêàçûâàåò íà õâîñò" << std::endl;
            break;
        case 8:
            delete it;
            f = false;
            break;
        default:
            std::cout << "Êîìàíäû íå ñóùåñòâóåò" << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }
}

void Menu() {
    int value, input_value;
    bool f = true;
    std::cout << "Ââåäèòå ðàçìåð ñïèñêà:";
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
                std::cout << "Ðàçìåð ñïèñêà: " << current_list.GetSize() << std::endl;
                break;
            case 2:
                std::cout << "Ñïèñîê îò÷èùåí" << std::endl;
                current_list.Clean();
                break;
            case 3:
                if (current_list.IsEmpty()) {
                    std::cout << "Ñïèñîê ïóñò" << std::endl;
                }
                else {
                    std::cout << "Ñïèñîê íå ïóñò" << std::endl;
                }
                break;
            case 4:
                std::cout << "Ââåäèòå çíà÷åíèå, íàëè÷èå êîòîðîãî íóæíî ïðîâåðèòü:" << std::endl;
                input_value = Check();
                if (current_list.IsThere(input_value)) {
                    std::cout << "Çíà÷åíèå ÿâëÿåòñÿ ýëåìåíòîì ñïèñêà" << std::endl;
                }
                else {
                    std::cout << "Çíà÷åíèå íå ÿâëÿåòñÿ ýëåìåíòîì ñïèñêà" << std::endl;
                }
                break;
            case 5:
                std::cout << "Ââåäèòå ïîçèöèþ èñêîìîãî çíà÷åíèÿ: " << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Çíà÷åíèå: " << current_list.FindValue(input_value) << std::endl;
                break;
            case 6:
                std::cout << "Ââåäèòå ïîçèöèþ çàìåíÿåìîãî çíà÷åíèÿ:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Ââåäèòå çíà÷åíèå äëÿ çàìåíû:" << std::endl;
                value = Check();
                if (current_list.ChangeValue(input_value, value))
                    std::cout << "Çíà÷åíèå óñïåøíî èçìåíåíî" << std::endl;
                break;
            case 7:
                std::cout << "Ââåäèòå çíà÷åíèå, êîòîðîå íóæíî íàéòè:" << std::endl;
                input_value = Check();
                value = current_list.FindPos(input_value);
                if (value != -1) {
                    std::cout << "Ïîçèöèÿ çíà÷åíèÿ: " << value << std::endl;
                }
                else {
                    std::cout << "Çíà÷åíèå íå ÿâëÿåòñÿ ýëåìåíòîì ñïèñêà" << std::endl;
                }
                break;
            case 8:
                std::cout << "Ââåäèòå çíà÷åíèå äëÿ äîáàâëåíèÿ:" << std::endl;
                input_value = Check();
                current_list.AddValue(input_value);
                std::cout << "Çíà÷åíèå óñïåøíî äîáàâëåíî" << std::endl;
                break;
            case 9:
                std::cout << "Ââåäèòå ïîçèöèþ äëÿ äîáàâëåíèÿ:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Ââåäèòå çíà÷åíèå äëÿ äîáàâëåíèÿ:" << std::endl;
                value = Check();
                if (current_list.AddValueToPos(input_value, value)) {
                    std::cout << "Çíà÷åíèå óñïåøíî äîáàâëåíî" << std::endl;
                }
                break;
            case 10:
                std::cout << "Ââåäèòå çíà÷åíèå äëÿ óäàëåíèÿ:" << std::endl;
                input_value = Check();
                value = current_list.DeleteValue(input_value);
                if (input_value == value) {
                    std::cout << "Çíà÷åíèå óñïåøíî óäàëåíî" << std::endl;
                }
                else {
                    std::cout << "Çíà÷åíèå íå óäàëåíî" << std::endl;
                }
                break;
            case 11:
                std::cout << "Ââåäèòå ïîçèöèþ äëÿ óäàëåíèÿ:" << std::endl;
                input_value = CheckNonNeg();
                std::cout << "Çíà÷åíèå " << current_list.DeletePos(input_value) << " óñïåøíî óäàëåíî" << std::endl;
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
                std::cout << "Êîìàíäû íå ñóùåñòâóåò" << std::endl;
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
