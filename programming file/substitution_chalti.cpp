#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canFormPalindrome(string str) 
{ 
  
    // Create a list 
    vector<char> list; 
  
    // For each character in input strings, 
    // remove character if list contains 
    // else add character to list 
    for (int i = 0; i < str.length(); i++) 
    { 
        auto pos = find(list.begin(), list.end(), str[i]); 
        if (pos != list.end()) 
        { 
            auto posi = find(list.begin(), list.end(),str[i]); 
            list.erase(posi); 
        } 
        else
            list.push_back(str[i]); 
    } 
  
    // if character length is even list is expected to be empty 
    // or if character length is odd list size is expected to be 1 
    if (str.length() % 2 == 0 && list.empty() // if string length is even 
        || (str.length() % 2 == 1 && list.size() == 1)) // if string length is odd 
        return true; 
    else
        return false; 
  
}

int main() {
	string str;
	cin>>str;
	if (canFormPalindrome(str)) 
        cout << ("Yes") << endl; 
    else
        cout << ("No") << endl;

	return 0;
	
}