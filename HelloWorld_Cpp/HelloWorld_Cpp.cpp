// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
#include <iostream>
#include <vector>

int main()
{
    std::cout << "My first submission in github!" << std::endl;
    std::cout << "准备开始调试..." << std::endl;

    int sum = 0;
    std::vector<int> numbers = { 10, 20, 30, 40, 50 };

    // 我们将在这里观察循环
    for (int i = 0; i < numbers.size(); i++)
    {
        int current_val = numbers[i];
        sum += current_val*10;

        std::cout << ">>>突发消息！处理第 " << i + 1 << " 个数字: " << current_val << std::endl;
        std::cout << "当前总和: " << sum << std::endl;
    }

    std::cout << "最终结果: " << sum << std::endl;
    return 0;
}