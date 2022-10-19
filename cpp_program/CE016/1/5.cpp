#include<iostream>
#include <cstring>

using namespace std;

int main()

{

    int count, shift;

    cin >> count >> shift;

    string str;

    for (int i = 0; i < count; i++)

    {

        cin >> str;

        for (int j = 0; str[j] != '\0'; j++)

        {

            if (str[j] >= 'A' && str[j] <= 'Z')

            {

                str[j] = (str[j] - 'A' + shift) % 26 + 'A';

            }

            else if (str[j] >= 'a' && str[j] <= 'z')

            {

                str[j] = (str[j] - 'a' + shift) % 26 + 'a';

            }

            if (str[j] >= '0' && str[j] <= '9')

            {

                str[j] = (str[j] - '0' + shift) % 10 + '0';

            }

        }

        cout << str << endl;

    }

    return 0;

}

