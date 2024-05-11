/*
Write a Program to Count the Number of Vowels
*/

#include <bits/stdc++.h>
using namespace std;

int count_vowel(string inp)
{
    int count = 0;
    if (inp.empty())
    {
        return 0;
    }

    else
    {
        for (int i = 0; i < inp.size(); i++)
        {
            if (inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u' || inp[i] == 'A' || inp[i] == 'E' || inp[i] == 'I' || inp[i] == 'O' || inp[i] == 'U')
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string inp="helo we are now dating and Tanvi loves abhishek ";
    cout<<"no of vowels =  "<<count_vowel(inp);

    return 0;
}