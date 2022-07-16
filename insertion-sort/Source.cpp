
#include <vector>
#include <iostream>

using namespace std;


//o(n) space and o(n2) time
vector<int> insertionSort(vector<int> array);

int main()
{
    
    vector<int> result = insertionSort({ 8, 5, 2, 9, 5, 6, 3 });

    for (int number : result)
    {
        cout << number << " ";
    }
    return 0;
}

vector<int> insertionSort(vector<int> array) {
    // Write your code here.
    if (array.empty())
        return {};

    for (int i = 0; i < array.size(); i++)
    {
        int j = i;

        while (j > 0 && array[j] < array[j - 1])
        {
            swap(array[j], array[j - 1]);
            --j;
        }
    }

    return array;
}


