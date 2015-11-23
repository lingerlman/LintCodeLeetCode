
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {

        if (source == nullptr || target == nullptr)
            return -1;
        const string a(source);
        const string b(target);
        
        if (b.size() > a.size())
            return -1;

        size_t len_b = b.size();
        size_t len_a = a.size();
        for (size_t i = 0; i < len_a - len_b + 1; ++i ) {
            if (a.substr(i, len_b) == b)
                return i;
        }
        return -1;    
    }
}; 

int main()
{
  char *a = "abc";
  char b[10] = "ab";
  Solution s;
  cout << s.strStr(a, b) << endl;
}
