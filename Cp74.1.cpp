//输入一个数 看奇偶
import std;

int main()
{
    int number;

    std::println("请输入一个整数: ");
    std::cin >> number;

    if (number % 2 == 0)
    {
        std::println( "数字{}是偶数", number);
    }
    else
    {
        std::println( "数字{}是奇数", number);
    }

    return 0;
}
