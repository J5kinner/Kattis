#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    vector<string> dict = vector<string>();
    set<string> s = set<string>();
    while(cin >> n){
        dict.push_back(n);
    }
    for(int i=0; i<dict.size(); i++){
        for(int j=0; j<dict.size(); j++){
            if(dict[i] == dict[j]){
                continue;
            }
            s.insert(dict[i] + dict[j]);
        }
    }
    for(set<string>::iterator iter =s.begin(); iter != s.end(); iter++){
        cout << *iter << '\n';
    }



}
