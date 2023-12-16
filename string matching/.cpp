//naive approach method
//Print 0 or 1 if the pattern appear
int naive_search(string text, string pat)
{
    // Your code goes here
    if (text.length() < pat.length())
        return 0;
    for (int i = 0; i < text.length() - pat.length(); ++i)
    {
        if (text[i] == pat[0])
        {
            bool flat = true;
            for (int j = 1; j < pat.length(); ++j)
            {
                if (pat[j] != text[i + j])
                {
                    flat = false;
                    break;
                }
            }
            if (flat == true)
                return 1;
        }
    }
    return 0;
}

// KMP (Knuth-Morris-Pratt)
// The goal is printing all position (start at 1) which the pattern present
vector<int> search(string pat, string txt)
{
    // code here.
    vector<int> v;
    // check if the pattern's length is longer than the text's length
    if (pat.length() > txt.length())
        return vector<int>();
    // stage 1: create lps array
    int lps[pat.length()] = {0};
    int len = 0;
    for (int i = 1; i < pat.length();)
    {
        if (pat[len] == pat[i])
        {
            ++len;
            lps[i] = len;
            ++i;
        }
        else if (len > 0)
        {
            len = lps[len - 1];
        }
        else
        {
            lps[i] = len;
            ++i;
        }
    }
    // stage 2: string matching and return the index
    for (int i = 0; i < txt.length() - pat.length() + 1; ++i)
    {
        if (pat[0] == txt[i])
        {
            int j;
            for (j = 1; j < pat.length();)
            {
                if (pat[j] != txt[i + j])
                {
                    if (j == 0)
                        break;
                    i += j - lps[j - 1];
                    j = lps[j - 1];
                }
                else
                    ++j;
            }
            if (j == pat.length())
                v.push_back(i + 1);
        }
    }
    return v;
}