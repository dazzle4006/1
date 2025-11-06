//看两个数能否整除
import std;

int main()
{
    // 使用结构化绑定同时读取多个值
    std::println("Enter two integers separated by space: ");

    int a{}, b{};
    std::cin >> a >> b;

    // 检查除数是否为零
    if (b == 0)
    {
        std::cout << "Error: Division by zero is not allowed.\n";
        return 1;
    }

    // 检查整除性并输出结果
    if (a % b == 0)
    {
        std::println("Yes");
    }
    else
    {
        std::println("No");
    }

    return 0;
}
