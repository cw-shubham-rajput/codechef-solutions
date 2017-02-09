#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int MaxElement(vector< int > Input)
{
    sort(Input.begin(), Input.end());
    int LargestElementOfInput = 0;
    int i = 0;
    while (i < Input.size() - 1)
    {
        if (LargestElementOfInput == Input[Input.size() - (i + 1)])
        {
            i++;
            continue;
        }

        else
        {
            if (Input[i] != 0)
            {
                LargestElementOfInput = Input[Input.size() - (i + 1)];
                int AllowedValue = LargestElementOfInput / Input[i];
                int j = 0;

                while (j < Input.size())
                {
                    if (Input[j] > AllowedValue)
                        break;
                    else if (j == i)
                    {
                        j++;
                        continue;
                    }
                    else
                    {
                        int Product = Input[i] * Input[j++];
                        if (Product == LargestElementOfInput)
                            return Product;
                    }
                }
            }

            i++;
        }
    }

    return -1;
}

int main()
{
    vector <int> a (2,4,2);
    cout << MaxElement(a);
    return 0;
}
