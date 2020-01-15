#include <iostream>
#include <fstream>

std::string letterToMorse(char letter);
std::string wordToMorse(std::string word);
char letterToLatin(std::string letter);
std::string wordToLatin(std::string sentence);
void fileTranslator(const std::string& type);
void menu();

std::string letterToMorse(char letter)
{
    switch(letter)
    {
        case 'a':
        case 'A':
            return ".-";
        case 'b':
        case 'B':
           return "-...";
        case 'c':
        case 'C':
            return "-.-.";
        case 'd':
        case 'D':
            return "-..";
        case 'e':
        case 'E':
            return ".";
        case 'f':
        case 'F':
            return "..-.";
        case 'g':
        case 'G':
            return "--.";
        case 'h':
        case 'H':
            return "....";
        case 'i':
        case 'I':
            return "..";
        case 'j':
        case 'J':
            return ".---";
        case 'k':
        case 'K':
            return "-.-";
        case 'l':
        case 'L':
            return ".-..";
        case 'm':
        case 'M':
            return "--";
        case 'n':
        case 'N':
            return "-.";
        case 'o':
        case 'O':
            return "---";
        case 'p':
        case 'P':
            return ".--.";
        case 'q':
        case 'Q':
            return "--.-";
        case 'r':
        case 'R':
            return ".-.";
        case 's':
        case 'S':
            return "...";
        case 't':
        case 'T':
            return "-";
        case 'u':
        case 'U':
            return "..-";
        case 'v':
        case 'V':
            return "...-";
        case 'w':
        case 'W':
            return ".--";
        case 'x':
        case 'X':
            return "-..-";
        case 'y':
        case 'Y':
            return "-.--";
        case 'z':
        case 'Z':
            return "--..";
        case '0':
            return "-----";
        case '1':
            return ".----";
        case '2':
            return "..---";
        case '3':
            return "...--";
        case '4':
            return "....-";
        case '5':
            return ".....";
        case '6':
            return "-....";
        case '7':
            return "--...";
        case '8':
            return "---..";
        case '9':
            return "----.";
        case ' ':
            return "/";
        default:
            return "[?]";
    }
}
std::string wordToMorse(std::string word)
{
    std::string result = "";
    for(int letterOfWord = 0; letterOfWord < word.size(); letterOfWord++)
    {
        if (letterOfWord != 0)
        {
            result += " ";
        }
        result += letterToMorse(word.at(letterOfWord));
    }
    return result;
}
char letterToLatin(std::string letter)
{
    if(letter == ".-")
    {
        return 'A';
    }
    if(letter == "-...")
    {
        return 'B';
    }
    if(letter == "-.-.")
    {
        return 'C';
    }
    if(letter == "-..")
    {
        return 'D';
    }
    if(letter == ".")
    {
        return 'E';
    }
    if(letter == "..-.")
    {
        return 'F';
    }
    if(letter == "--.")
    {
        return 'G';
    }
    if(letter == "....")
    {
        return 'H';
    }
    if(letter == "..")
    {
        return 'I';
    }
    if(letter == ".---")
    {
        return 'J';
    }
    if(letter == "-.-")
    {
        return 'K';
    }
    if(letter == ".-..")
    {
        return 'L';
    }
    if(letter == "--")
    {
        return 'M';
    }
    if(letter == "-.")
    {
        return 'N';
    }
    if(letter == "---")
    {
        return 'O';
    }
    if(letter == ".--.")
    {
        return 'P';
    }
    if(letter == "--.-")
    {
        return 'Q';
    }
    if(letter == ".-.")
    {
        return 'R';
    }
    if(letter == "...")
    {
        return 'S';
    }
    if(letter == "-")
    {
        return 'T';
    }
    if(letter == "..-")
    {
        return 'U';
    }
    if(letter == "...-")
    {
        return 'V';
    }
    if(letter == ".--")
    {
        return 'W';
    }
    if(letter == "-..-")
    {
        return 'X';
    }
    if(letter == "-.--")
    {
        return 'Y';
    }
    if(letter == "--..")
    {
        return 'Z';
    }
    if(letter == "-----")
    {
        return '0';
    }
    if(letter == ".----")
    {
        return '1';
    }
    if(letter == "..---")
    {
        return '2';
    }
    if(letter == "...--")
    {
        return '3';
    }
    if(letter == "....-")
    {
        return '4';
    }
    if(letter == ".....")
    {
        return '5';
    }
    if(letter == "-....")
    {
        return '6';
    }
    if(letter == "--...")
    {
        return '7';
    }
    if(letter == "---..")
    {
        return '8';
    }
    if(letter == "----.")
    {
        return '9';
    }
    if(letter == "/")
    {
            return ' ';
    }
    else
    {
        return '?';
    }
}
std::string wordToLatin(std::string sentence)
{
    sentence += ' ';
    std::string result = "";
    std::string currentLetter = "";
    for(int i = 0; i < sentence.size(); i++)
    {
        if(sentence.at(i) != ' ')
        {
            currentLetter += sentence.at(i);
        }
        else
        {
            result += letterToLatin(currentLetter);
            currentLetter = "";
        }
    }
    return result;
}
void menu()
{
    std::string word;
    std::string choose;
    std::cout << "\n1. Text encoder";
    std::cout << "\n2. Text decoder";
    std::cout << "\n3. File encoder";
    std::cout << "\n4. File decoder";
    std::cout << "\n5. About";
    std::cout << "\nEnter number: ";
    std::getline(std::cin, choose);
    if(choose == "1" || choose == "2")
    {
        std::cout << "[.] short signal, [-] long singal, [ ] separates  morse letters, [/] separates morse words" << std::endl;
        std::cout << "Enter sentence: ";
        std::getline(std::cin, word);
    }
    if(choose == "1")
    {
        std::cout << wordToMorse(word) << std::endl;
    }
    else if(choose == "2")
    {
        std::cout << wordToLatin(word) << std::endl;
    }
    else if(choose == "3")
    {
        fileTranslator("Encode");
    }
    else if(choose == "4")
    {
        fileTranslator("Decode");
    }
    else if(choose == "5")
    {
        std::cout << "Jakub Choptiany | C++ | 2020" << std::endl;
        std::cout << "github.com/JChoptiany" << std::endl;
    }
    else
    {
        menu();
    }
}
void fileTranslator(const std::string &type)
{
    std::fstream file;
    std::string line;
    if(type == "Encode")
    {
        file.open("../dataToEncode.txt", std::ios::in);
    }
    else
    {
        file.open("../dataToDecode.txt", std::ios::in);
    }
    if(file.good())
    {
        while (getline(file, line))
        {
            if(type == "Encode")
            {
                std::cout << wordToMorse(line) << std::endl;
            }
            else
            {
                std::cout << wordToLatin(line) << std::endl;
            }
        }
        file.close();
    }
    else
    {
        std::cout << "Please add file named dataToEncode.txt or dataToDecode.txt";
    }
}
int main()
{
    menu();
}


