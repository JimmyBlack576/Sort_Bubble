#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 10;
    int count=0, arr[size], temp;
    cout << "Внесите данные в массив: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        count = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }

        }
        if (count == 0)
        {
            cout << "Сортировка произведена за " << i << " шагов! \n";
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

