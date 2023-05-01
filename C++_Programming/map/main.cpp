#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<string> countChar(string s)
{
    map<char,int> m;
    vector<string> v;
    for(int i = 0; i < s.length() ; i++)
    {
        m[s[i]]++;
    }
    for(map<char, int>::iterator it = m.begin(); it !=m.end(); it++){
        string data = " ";
        data = it->first + data + to_string(m[it->first]) ;
        v.push_back(data);
    }
    return v;
}
int main(){
    string s = "aaabbbcccc";
	vector<string> list(countChar(s));
    for(vector<string>::iterator it = list.begin(); it != list.end(); it++){
        cout << *it << endl;
    }
	return 0;
}
