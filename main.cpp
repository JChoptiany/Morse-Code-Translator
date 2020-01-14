#include <iostream>

std::string letterToMorse(char letter);
std::string wordToMorse(std::string word);
char letterToLatin(std::string letter);
std::string wordToLatin(std::string sentence);
void menu();

std::string letterToMorse(char letter)
{
    if(letter == 'A' || letter == 'a')
    {
        return ".-";
    }
    if(letter == 'B' || letter == 'b')
    {
        return "-...";
    }
    if(letter == 'C' || letter == 'c')
    {
        return "-.-.";
    }
    if(letter == 'D' || letter == 'd')
    {
        return "-..";
    }
    if(letter == 'E' || letter == 'e')
    {
        return ".";
    }
    if(letter == 'F' || letter == 'f')
    {
        return "..-.";
    }
    if(letter == 'G' || letter == 'g')
    {
        return "--.";
    }
    if(letter == 'H' || letter == 'h')
    {
        return "....";
    }
    if(letter == 'I' || letter == 'i')
    {
        return "..";
    }
    if(letter == 'J' || letter == 'j')
    {
        return ".---";
    }
    if(letter == 'K' || letter == 'k')
    {
        return "-.-";
    }
    if(letter == 'L' || letter == 'l')
    {
        return ".-..";
    }
    if(letter == 'M' || letter == 'm')
    {
        return "--";
    }
    if(letter == 'N' || letter == 'n')
    {
        return "-.";
    }
    if(letter == 'O' || letter == 'o')
    {
        return "---";
    }
    if(letter == 'P' || letter == 'p')
    {
        return ".--.";
    }
    if(letter == 'Q' || letter == 'q')
    {
        return "--.-";
    }
    if(letter == 'R' || letter == 'r')
    {
        return ".-.";
    }
    if(letter == 'S' || letter == 's')
    {
        return "...";
    }
    if(letter == 'T' || letter == 't')
    {
        return "-";
    }
    if(letter == 'U' || letter == 'u')
    {
        return "..-";
    }
    if(letter == 'V' || letter == 'v')
    {
        return "...-";
    }
    if(letter == 'W' || letter == 'w')
    {
        return ".--";
    }
    if(letter == 'X' || letter == 'x')
    {
        return "-..-";
    }
    if(letter == 'Y' || letter == 'y')
    {
        return "-.--";
    }
    if(letter == 'Z' || letter == 'z')
    {
        return "--..";
    }
    if(letter == '0')
    {
        return "-----";
    }
    if(letter == '1')
    {
        return ".----";
    }
    if(letter == '2')
    {
        return "..---";
    }
    if(letter == '3')
    {
        return "...--";
    }
    if(letter == '4')
    {
        return "....-";
    }
    if(letter == '5')
    {
        return ".....";
    }
    if(letter == '6')
    {
        return "-....";
    }
    if(letter == '7')
    {
        return "--...";
    }
    if(letter == '8')
    {
        return "---..";
    }
    if(letter == '9')
    {
        return "----.";
    }
    if(letter == ' ')
    {
        return "/";
    }
    else
    {
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
    std::cout << "\n1. Encoder";
    std::cout << "\n2. Decoder";
    std::cout << "\n3. About";
    std::cout << "\nEnter number: ";
    std::getline(std::cin, choose);
    if(choose == "1" || choose == "2")
    {
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
        std::cout << "Jakub Choptiany | C++ | 2020" << std::endl;
        std::cout << "github.com/JChoptiany" << std::endl;
    }
    else
    {
        menu();
    }
}
int main()
{
    menu();
}