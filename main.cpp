//Составьте небольшой текстовый файл «words.txt», в котором последовательно,
// через пробелы и переносы строк расположены различные слова. Можете использовать любые англоязычные слова.
// Разработайте программу, которая искала бы среди этих слов нужное пользователю
// и выводила бы общее количество повторений этого слова. 0 — если слово вообще не присутствует в файле.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    int nRep = 0;
    std::vector<std::string> strVec;
    std::string word;
    std::string str;
    std::ifstream file;
    file.open("C:\\Users\\777\\CLionProjects\\19.5.1\\Text.text");
    if(!file.is_open())
    {
        std::cout << "Error!";
    }
    else
    {
        std::cout << "File is open" << std::endl;
        std::cout << "Enter found word: " << std::endl;
        std::cin >> word;
        while (!file.eof())
        {
            file >> str;
            strVec.push_back(str);
            if(str == word) ++nRep;
        }
    }
    file.close();
    std::cout << "This word occurs " << nRep << " times";
}