#include <cstdio>
#include <vector>

// pass-by-value, copy into local variables (stack), owns local variables
std::vector<int> combine(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) { result[i] = a[i] + 2 * b[i]; }

    return result;
}

int main()
{
    const int N = 1000000;
    std::vector<int> v1(N), v2(N);

    for (int i = 0; i < 100; ++i) { combine(v1, v2); }

    // {
    //     std::vector<int> a(v1);
    //     std::vector<int> b(v2);
    //     std::vector<int> result(a.size());

    //     for (size_t i = 0; i < a.size(); ++i) { result[i] = a[i] + 2 * b[i]; }

    //     return result;
    // }

    return 0;
}
