/*
Given a string, print out all possible anagrams/permutations of it.
Eg. Input: Rabbit Output: abbitr, batibr, tibarb, etc. 
*/
#include <string.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int counter = 0;
void swap(char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
    
}

void recurse(string input, int index, int n)
{
    if(index==n)
    {
        cout << input << endl;
        counter++;
    }
    else
    {
        for(int j=index; j<=n; j++)
        {
            swap(input[index], input[j]);
            recurse(input, index+1, n);
        }
    }
    
}



int main()
{
    string input = "";
    cout << "Enter a string:\n";
    cin >> input;
    cout << endl;

    
    int n = input.size() - 1;
    recurse(input,0,n);
    cout << counter << " permutations." << endl;
}
