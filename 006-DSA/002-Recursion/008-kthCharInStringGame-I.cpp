/*

https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/

3304. Find the K-th Character in String Game I

Alice and Bob are playing a game. Initially, Alice has a string word = "a".

You are given a positive integer k.

Now Bob will ask Alice to perform the following operation forever:

- Generate a new string by changing each character in word to its next character in the English alphabet, and append it to the original word.
For example, performing the operation on "c" generates "cd" and performing the operation on "zb" generates "zbac".

Return the value of the kth character in word, after enough operations have been done for word to have at least k characters.

Note that the character 'z' can be changed to 'a' in the operation.

*/

// Using recursion

#include<iostream>
using namespace std;

char kthCharacter(int k, string word = "a") {
        if (word.size() >= k) {
        return word[k - 1];
    }

    string generatedStr = "";

    for(int i = 0; i < word.size(); i++){

        if(word[i] == 'z'){
            generatedStr.push_back('a');
        }else{
            char next = word[i] + 1;
            generatedStr.push_back(next);
        }
    }

    return kthCharacter(k, word + generatedStr);
}

int main(){
    cout << kthCharacter(5) << endl;
}