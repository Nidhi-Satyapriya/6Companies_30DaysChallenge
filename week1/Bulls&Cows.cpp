class Solution {
public:
    string getHint(string s, string g) {
            int a=0, b=0;
            unordered_map<char,int>mp;
        // for(int i=0;i<s.length();i++){
        //     mp.insert({s[i], i}); 
        // }
        //   for(int i=0;i<g.length();i++){
        //     if(mp.count(g[i])) {if(mp[g[i]]==i) a++; else b++;}
        //     }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == g[i]) a++;  else mp[s[i]]++; 
            
        }
        for (int i = 0; i < g.length(); i++) {
            if (s[i] != g[i] && mp[g[i]] > 0) {
                b++; 
                mp[g[i]]--; 
            }
        }
        return to_string(a) + "A" + to_string(b) + "B";
    }
};