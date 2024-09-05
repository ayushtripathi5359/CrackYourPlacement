class Solution {
public:
    string reorganizeString(string s) {
        vector<int> H (26,0);
        for(int i = 0 ; s[i]!='\0';i++)
        H[s[i]-97]++;

        int max = 0 , letter = 0 ;
        for(int i = 0 ; i<H.size();i++)
        {
            if(H[i]> max )
            {
                max = H[i];
                letter = i ;
            }
        }
        if(max > (s.length()+1)/2) return "";
        vector<char> res(s.length());
        int index = 0;
        while(H[letter]-- > 0 )
        {
            
            res[index]= static_cast<char>(letter + 'a');
            index+=2;
        }

        for(int i = 0 ; i < H.size();i++)
        {
            while(H[i]-->0)
            {
                
                if(index>=res.size()) index=1;
                res[index]=static_cast<char>(i + 'a');
                index+=2;
            }
        }
        return string(res.begin(),res.end());
    }
};
