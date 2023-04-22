#include <iostream>
#include <fstream>
#include <string>
#include <locale>

int main()
{
    std::locale sysLocale("");
    std::locale utfLocale(".utf-8");
    std::locale::global(utfLocale);
    std::cout.imbue(sysLocale);
    std::cout << "Locale: " << sysLocale.name() << '\n';
    
    std::ifstream file("example_utf-8.txt");
    if (!file) {
        std::perror("example_utf-8.txt");
        return 2;
    }
    file.imbue(utfLocale);
    std::string line;
    while (getline(file, line)) {
        std::cout << line << '\n';
    }
    std::cout << "\nDONE\n";
}
