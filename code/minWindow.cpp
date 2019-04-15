//
// Created by Raymond Li on 2019-04-02.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;


string minWindow(string s, string t) {
    vector<int> map(128,0);
    for(auto c: t) map[c]++;
    int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
    while(end<s.size()){
        if(map[s[end++]]-->0) counter--; //in t
        while(counter==0){ //valid
//            cout << end << endl;
//            cout << s[begin] << " " << map[s[begin]] << endl;
            if(end-begin<d)  d=end-(head=begin);
//            cout << s[begin] << " " << map[s[begin]] << endl;
            if(map[s[begin++]]++==0) {
                cout << s[begin] << " " << map[s[begin]] << endl;
                counter++;  //make it invalid
            }
        }
    }
    return d==INT_MAX? "":s.substr(head, d);
}

int main () {
    cout << minWindow("BCDDCDBAC", "BCA") << endl;
}