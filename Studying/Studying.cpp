
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char text[200];

    ofstream filetext;
    filetext.open("text.txt");
    filetext << "Work with files in C++++++++++" << endl;
    filetext.close();

    ifstream file;
    file.open("text.txt");
        if (!filetext.is_open())
        {
            cout << "There is no file with that name!" << endl;
        }
        else
        {
            file.getline(text, 200);
            cout << text << endl;
        }

        cin.get();
        return 0;
}


//char text[200];
//ifstream file;                          --- читаэ файл
//file.open("text.txt");
//file.getline(text, 200);
//cout << text << endl;

//ofstream file;   --- дозволяє вписувати в створений файл
//file.open("text.txt");
//file << "Work with files in C++" << endl;
//file.close();

//#include <fstream>          -----дозволяє працювати з файлами

//enum test { tree1hight = 200, tree1width = 10, tree1years = 25 }; ---- перечислення

//Sleep(1000);      -таймер мс    1 с.

//struct automobile        - структура -багато данних можна вмістити
//{
//    int wheels;
//    char color;
//    int max_speed;
//    float lenght;
//};
//automobile vaz;
//vaz.wheels = 4;
//vaz.color = 'g';
//vaz.lenght = 3;
//vaz.max_speed = 60;

//automobile audi = { 4, 'r', 4, 300 };
//cout << "Ауді колеса - " << audi.wheels << " " << "Ваз швидкість - " << vaz.max_speed << " " << "Ауді макс швидкість - " << audi.max_speed << endl;



//#include <windows.h>    ввід кирилицею

//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);         ввід і вивід кирилицею пишеться зверху
//etlocale(LC_ALL, "Ukrainian");

// char   --- можна помістити один елемент

//gets_s(string);    ---- витягая зміст масиву

// bool   --- або 0 або 1, true  або false

//char string[] = "Hello world";  --- запис string через масив
//cout << string << endl;  

//float   --- 3.14 і тд.

//unsigned int --- int але додатні значення

//system("pause"); нажміть, щоб продовжити

//cin.get();      позволяє ввсести в програму данні

//long --- більше ніж int 

//cout << "The result is:" << result <<endl; --- endl завершує лінію

//exit(0); завершуе роботу коду

//using namespace std; ---щоб не писати std всюди

//if (num1 >= 99999999 && num1 != 2); --- дві умови або більше

//if (num1 >= 99999999 || num1 != 2); --- або

//num1 + num2 == 2 ? cout << "222222" << endl : cout << "33333" << endl; ----альтернатива до умови

//switch (result)         -- ----- result = 1 тоді виконається кейс 1
//{
//case 1:
//    cout << "The number is 1" << endl;
//    break;
//}

// 1 + rand() % 1000 ---- рандомне чило від 1 до 1000

// #include <string> --- можна використовувати рядки
//string name;

//cout << "Enter your name:";

//getline(cin, name);    - -- - ввести  тип данних String

//int random;
//for (random = 1; random <= 1000000; random++)
//{                                                  ----- цикл for
//    cout << random << endl;
//}

//int random = 0;
//while (random <= 1000)                       ---- цикл while
//{
//    random++;                          
//   cout << random << endl;
//}

//int random = 0;
//do
//{                                ---- цикл do while
//    random++;
//    cout << random << endl;
//
//} while (random <= 1000);

//int array[10] = { 1, 2, 3, 6, 4, 5, 8, 9, 4, 2 };
//for (int i = 0; i < 10; i++)
//{                                                масиви одновимірний
//    cout << array[i] << endl;
//}

//do
//{
//    cout << rand() % 2;         анімація 0 1
//} while (rand() % 1 < 3);

//int array[3][2] = { {2, 1}, {4, 5}, {9, 6} };
//for (int i = 0; i < 3; i++)
 //   for (int f = 0; f < 2; f++)           двовимірний масив
 //       cout << array[i][f];
//

//int array[3][2] = { {2, 1}, {4, 5}, {9, 6} };
//for (int i = 0; i < 3; i++)
//{
//    for (int f = 0; f < 2; f++)
//    {
//        cout << array[i][f];
//cout << endl;
//    }
//    cout << endl;
//}

//const float pi = 3.14;       константа  

//int value = 10;
//int& ref = value;        --- посилання

//int* ptrnum = new int;   -виділили память
//*ptrnum = 7;

//cout << *ptrnum << endl;
//delete ptrnum;        висвободили память

//int* ptrarray = new int[20];
//for (int i = 0; i < 20; i++)        зберіг - треба виправити помилку
//{
//    ptrarray[i] = rand() % 100;
//}
//for (int i = 0; i < 20; i++)
//{
//    cout << ptrarray[i] << "";
//    delete[] ptrarray;
//}
//delete ptrarray;

