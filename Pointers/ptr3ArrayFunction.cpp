#include <iostream>
using namespace std;

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

int main()
{
    // int numbers[5] = {23,22,5,78,2};
    int numbers[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter Numbers: ";
        cin >> numbers[i];
    }

    cout << "Min is " << getMin(numbers, 5) << endl;
    cout << "Max is " << getMax(numbers, 5) << endl;
}