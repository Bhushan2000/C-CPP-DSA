#include <iostream>
using namespace std;
// int max_of_two(int, int);
float max_of_two(float, float);
int main()
{
    int no1, no2;
    cout << "Enter two values ";
    cin >> no1 >> no2;
    cout << "Max between them is ";
    cout << max_of_two(no1, no2);
    return 0;
}
// int max_of_two(int a, int b)
// {
//     return a > b ? a : b;
// }
float max_of_two(float a, float b)
{
    return a > b ? a : b;
}