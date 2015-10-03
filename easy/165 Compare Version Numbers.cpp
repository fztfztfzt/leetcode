/*
Compare Version Numbers
Total Accepted: 34059 Total Submissions: 218198 Difficulty: Easy

Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

0.1 < 1.1 < 1.2 < 13.37
*/

0ms
int compareVersion(string version1, string version2) {
        int l1=version1.length(),l2=version2.length(),i=0,j=0;
        while(i<l1 && version1[i]=='0') ++i;
        while(j<l2 && version2[j]=='0') ++j;
        int count1=0;
        for(int m=i;m<l1;m++)
        {
            if(version1[m]!='.') count1++;
            else break;
        }
        for(int m=j;m<l2;m++)
        {
            if(version2[m]!='.') count1--;
            else break;
        }
        if(count1<0) return -1;
        else if(count1>0) return 1;
        for(;i<l1 && j<l2;i++,j++)
        {
            if(version1[i]!='.' && version2[j]!='.')
            {
                if(version1[i]>version2[j]) return 1;
                else if(version1[i]<version2[j]) return -1;
            }
            else 
            {
                break;
            }
        }
        if(i==l1 && j==l2) return 0;
        else if(i==l1) return compareVersion(version1.substr(i,l1),version2.substr(j+1,l2));
        else if(j==l2) return compareVersion(version1.substr(i+1,l1),version2.substr(j,l2));
        return compareVersion(version1.substr(i+1,l1),version2.substr(j+1,l2));
    }
	
0ms
int compareVersion(string version1, string version2) {
        int l1=version1.length(),l2=version2.length(),i=0,j=0;
        for(auto &x : version1) if(x=='.') x=' ';
        for(auto &x : version2) if(x=='.') x=' ';
        istringstream s1(version1),s2(version2);
        while(1)
        {
            
            if(!(s1>>i)) i=0;
            if(!(s2>>j)) j=0;
            if (!s1 && !s2) return 0;
            if(i>j) return 1;
            else if(i<j) return -1;
        }
    }