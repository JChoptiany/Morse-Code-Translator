#include <iostream>

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
        return "-";
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
}
std::string wordToMorse(std::string word)
{
    std::string result = "";
    for(auto letterOfWord : word)
    {
        result += letterToMorse(letterOfWord);
    }
    return result;
}
int main()
{
    std::string word;
    int numberOfWord = 0;
    while(word != "stop")
    {
        ++numberOfWord;
        std::cin >> word;
        if(word == "stop")
        {
            break;
        }
        if(numberOfWord > 1)
        {
            std::cout << " ";
        }
        std::cout << wordToMorse(word);
    }
    return 0;
}