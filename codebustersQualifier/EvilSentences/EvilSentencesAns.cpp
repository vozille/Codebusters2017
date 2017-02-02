#include <bits/stdc++.h>
using namespace std;


bool isPalindome(string s){
    string revstr = s;
    reverse(s.begin(), s.end());
    if(revstr == s)
        return true;
    return false;

}

int main(void){
    freopen("sampleInput.txt", "r", stdin);
    int n;
    cin >> n;
    
    while(n--){
        vector<string> words;
        int k;
        cin >> k;
        string word;
        while(k--){
            cin >> word;
            if(isPalindome(word)){
                words.push_back(word);
            }
        }
        cout << words.size() << endl;
        sort(words.begin(), words.end());
        for(auto i : words){
            cout << i <<endl;
        }
    }
}