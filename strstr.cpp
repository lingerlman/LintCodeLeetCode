
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool stringMatch(string a, string b) {
        if (b.size() > a.size())
            return -1;
        size_t len_b = b.size();
        size_t len_a = a.size();
        for (size_t i = 0; i < len_a - len_b + 1; ++i ) {  //no need for i < len_a and access empty string
            if (a.substr(i, len_b) == b)
                return i;
        }
        return -1;    
    }
    
}; 





int main()
{
  string a("whatisyour");
  string b("whatis");
  Solution s;
  cout << s.stringMatch(a, b) << endl;
}
