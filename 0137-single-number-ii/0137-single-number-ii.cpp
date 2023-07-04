class Solution {
public:
int singleNumber(vector<int>& s) 
    {
    	vector<int> t(32);
    	int sz = s.size();
    	int i, j, n;
    	for (i = 0; i < sz; ++i)
    	{
    		n = s[i];
    		for (j = 31; j >= 0; --j)
    		{
    			t[j] += n & 1;
    			n >>= 1;
    			if (!n)
    				break;
    	    }
        }
	int res = 0;
	for (j = 31; j >= 0; --j)
	{
		n = t[j] % 3;
		if (n)
			res += 1 << (30+1 - j);
	}
	return res;
}
};