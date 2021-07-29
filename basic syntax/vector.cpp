/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C++ program to illustrate the
// capacity function in vector
#include <iostream>
#include <vector>
  #include <bits/stdc++.h> //find()
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
  
    // resizes the vector size to 4
    g1.resize(4);
  
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
  
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    cout << "\nVector before Shrinks: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
    
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector after Shrinks:  ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();  
    
    
    int x = 4;
    cout << "\nIndex of "<<x<<" is ";
    auto it = find(g1.begin(), g1.end(), x);
    // If element was found
    if (it != g1.end())
    {
     
        // calculating the index
        // of K
        int index = it - g1.begin();
        cout << index << endl;
    }
    else {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    }
    
    cout<<"\nSort vector" ;
    
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
  
    sort(v.begin(), v.end());
  
    cout << "Sorted \n";
    for (auto x : v)
        cout << x << " ";
    
    return 0;
}
