
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool stringMatch(string a, string b) {
        if (b.size() > a.size())
            return false;
        size_t len_b = b.size();
        size_t len_a = a.size();
        for (size_t i = 0; (i < len_a) && (i < (len_a - len_b + 1)); i++ ) {
            if (a.substr(i, len_b) == b)
                return true;
        }
        return false;    
    }
    
}; 





int main()
{
  string a("whatisyour");
  string b("whatis");
  Solution s;
  cout << s.stringMatch(a, b) << endl;
}
