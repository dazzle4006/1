//输入一个十进制数，转换为英文单词
import std;

int main()
{
    std::println("Enter a single numeral (0-9): ");

    char input;
    std::cin >> input;

    // 使用C++23的format库来构建输出字符串
    std::string result;

    switch (input)
    {
        case '0':
            result = std::format("You entered: zero");
            break;
        case '1':
            result = std::format("You entered: one");
            break;
        case '2':
            result = std::format("You entered: two");
            break;
        case '3':
            result = std::format("You entered: three");
            break;
        case '4':
            result = std::format("You entered: four");
            break;
        case '5':
            result = std::format("You entered: five");
            break;
        case '6':
            result = std::format("You entered: six");
            break;
        case '7':
            result = std::format("You entered: seven");
            break;
        case '8':
            result = std::format("You entered: eight");
            break;
        case '9':
            result = std::format("You entered: nine");
            break;
        default:
            result = std::format("'{}' is not a valid single numeral", input);
            break;
    }

    std::println("{}", result);

    return 0;
}
