// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
#include <iostream>
#include <vector>
#include <cstring>

using  namespace  std;
char* myStrcat(char* dest, const char* src) {
    size_t destLen = strlen(dest);
    size_t srcLen = strlen(src);
     
    vector<char> result(destLen + srcLen + 1); 
    
    for (size_t i = 0; i < destLen; ++i) {
        result[i] = dest[i];
    }
    for (size_t i = 0; i < srcLen; ++i) {
        result[destLen + i] = src[i];
    }
    result[destLen + srcLen] = '\0';
    return result.data();
}

int main() {
    char dest[50] = "Hello, ";
    const char* src = "World!";
    
    char* result = myStrcat(dest, src);
    
    cout << "Результат: " << result << endl;

    return 0;
}

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
