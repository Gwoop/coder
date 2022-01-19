// coder.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rfawfa");
    string path = "TY.txt";
    cout << (int)'А' << endl;
    cout << (int)'_' << endl;
    cout << (int)' ' << endl;
    cout << (int)'?' << endl;
    
    
   
    int Vibor = 0;
    //cout << "Вы хотите кодировать или декодировать текст?" << endl;
    cout << "Если Кодировать if you want  coding, press 1, if decoding 2" << endl;
    cin >> Vibor;
    switch (Vibor)
    {
    case 1:
    {
        cout << "Ведите текст для шифровки" << endl;
        string text;
        cin >> text;
        cout << text << endl;
        int g;
        cout << "Ведите отступ" << endl;
        cin >> g;
        string kode_text;
        for (int i = 0; text.length() > i; i++)
        {
            int GG;
            int JJ;
            GG = text[i];
            if (GG == 32)
            {
                GG = 95 - g;
            }
            cout << (int)GG << endl;
            JJ = (int)GG + g;
            cout << (int)GG << endl;

            kode_text += JJ;

        }
        cout << kode_text;
        ofstream oo;
        
        oo.open(path);


        
        oo << kode_text;

        oo.close();
        break;
    }

    case 2:
    {
        cout << "Укажите название файла" << endl;
        cout << "Пример: Пример.txt" << endl;
        cout << "Если фаил находиться не в коренной папке то укажите путь полность!" << endl;
        string PO;

        cin >> PO;

        ifstream tt;

        tt.open(PO);
        
        int g;
        cout << "Ведите отступ" << endl;
        cin >> g;

        for (int i = 0; PO.length() > i; i++)
        {
           
            int GG;
            int JJ;
            GG = PO[i];
            cout << (int)GG << endl;
            JJ = (int)GG - g;
            cout << (int)GG << endl;
            
            PO += JJ;
            cout << PO << endl;
        }
        cout << PO << endl;
        tt.close();
        break;
    }
        
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
