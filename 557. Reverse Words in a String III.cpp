class Solution
{
    string reverse(string &ss)
    {
        int i = 0, j = ss.size() - 1;
        while (i <= j)
        {
            swap(ss[i], ss[j]);
            i++;
            j--;
        }
        return ss;
    }

public:
    string reverseWords(string s)
    {
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            string temp = "";
            while (s[i] != ' ' && i < s.size())
            {
                temp.push_back(s[i]);
                i++;
            }
            ans += (reverse(temp));
            if (i < s.size())
                ans += ' ';
        }
        return ans;
    }
};