// TriangleProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void rightTri(int height)
{
    //nested forloop needed
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

void maybeS(int L, int H)
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < L; j++)
        {
            cout << "[] ";
        }
        cout << endl;
    }
}

int main()
{
   // std::cout << "Hello World!\n";
   // int height;
   // cout << "Enter how tall you want this triangle to be: ";
  //  cin >> height;
   // rightTri(height);
   // int Length;
   // int Height;
   // cout << "Enter the length and the height: ";
   // cin >> Length >> height;
    maybeS(4, 4);


}

