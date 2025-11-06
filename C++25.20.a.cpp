//计算并显示 1 到 5 的整数和
import std;
int main()
{
    // 创建包含整数1到5的vector
    std::vector<int> numbers{1, 2, 3, 4, 5};

    // 使用C++23的reduce算法计算和（支持并行化，但这里顺序执行）
    int sum = std::reduce(numbers.begin(), numbers.end());

    // 输出结果
    std::println("The sum of integers from 1 to 5 is:{}", sum);

    return 0;
}
