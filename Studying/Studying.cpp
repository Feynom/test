
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
//ifstream file;                          --- ����� ����
//file.open("text.txt");
//file.getline(text, 200);
//cout << text << endl;

//ofstream file;   --- �������� ��������� � ��������� ����
//file.open("text.txt");
//file << "Work with files in C++" << endl;
//file.close();

//#include <fstream>          -----�������� ��������� � �������

//enum test { tree1hight = 200, tree1width = 10, tree1years = 25 }; ---- ������������

//Sleep(1000);      -������ ��    1 �.

//struct automobile        - ��������� -������ ������ ����� �������
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
//cout << "��� ������ - " << audi.wheels << " " << "��� �������� - " << vaz.max_speed << " " << "��� ���� �������� - " << audi.max_speed << endl;



//#include <windows.h>    ��� ���������

//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);         ��� � ���� ��������� �������� ������
//etlocale(LC_ALL, "Ukrainian");

// char   --- ����� �������� ���� �������

//gets_s(string);    ---- ������� ���� ������

// bool   --- ��� 0 ��� 1, true  ��� false

//char string[] = "Hello world";  --- ����� string ����� �����
//cout << string << endl;  

//float   --- 3.14 � ��.

//unsigned int --- int ��� ������ ��������

//system("pause"); ������, ��� ����������

//cin.get();      �������� ������� � �������� ����

//long --- ����� �� int 

//cout << "The result is:" << result <<endl; --- endl ������� ���

//exit(0); �������� ������ ����

//using namespace std; ---��� �� ������ std �����

//if (num1 >= 99999999 && num1 != 2); --- �� ����� ��� �����

//if (num1 >= 99999999 || num1 != 2); --- ���

//num1 + num2 == 2 ? cout << "222222" << endl : cout << "33333" << endl; ----������������ �� �����

//switch (result)         -- ----- result = 1 ��� ���������� ���� 1
//{
//case 1:
//    cout << "The number is 1" << endl;
//    break;
//}

// 1 + rand() % 1000 ---- �������� ���� �� 1 �� 1000

// #include <string> --- ����� ��������������� �����
//string name;

//cout << "Enter your name:";

//getline(cin, name);    - -- - ������  ��� ������ String

//int random;
//for (random = 1; random <= 1000000; random++)
//{                                                  ----- ���� for
//    cout << random << endl;
//}

//int random = 0;
//while (random <= 1000)                       ---- ���� while
//{
//    random++;                          
//   cout << random << endl;
//}

//int random = 0;
//do
//{                                ---- ���� do while
//    random++;
//    cout << random << endl;
//
//} while (random <= 1000);

//int array[10] = { 1, 2, 3, 6, 4, 5, 8, 9, 4, 2 };
//for (int i = 0; i < 10; i++)
//{                                                ������ �����������
//    cout << array[i] << endl;
//}

//do
//{
//    cout << rand() % 2;         ������� 0 1
//} while (rand() % 1 < 3);

//int array[3][2] = { {2, 1}, {4, 5}, {9, 6} };
//for (int i = 0; i < 3; i++)
 //   for (int f = 0; f < 2; f++)           ���������� �����
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

//const float pi = 3.14;       ���������  

//int value = 10;
//int& ref = value;        --- ���������

//int* ptrnum = new int;   -������� ������
//*ptrnum = 7;

//cout << *ptrnum << endl;
//delete ptrnum;        ����������� ������

//int* ptrarray = new int[20];
//for (int i = 0; i < 20; i++)        ����� - ����� ��������� �������
//{
//    ptrarray[i] = rand() % 100;
//}
//for (int i = 0; i < 20; i++)
//{
//    cout << ptrarray[i] << "";
//    delete[] ptrarray;
//}
//delete ptrarray;

