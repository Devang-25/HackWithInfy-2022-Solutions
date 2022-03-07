https://leetcode.com/discuss/interview-question/1825509/problems-asked-in-hackwithinfy-2022-round-1

/*
You are given a binary string s. You want to set all bits of s to 1.

In one operation, you can choose some non-empty suffix of the string and flip all of it's bits. In other words, in one operation you can choose an index i and flip all the bits s[j] where i<=j<=n.

Find the minimum number of operations required to set all the bits in s to 1.

Input Format:
The first line contains a string, s, denoting the value of s described in the problem.

Constraints:
1 <= len(s) <= 10^5

Sample Input:
10

Sample Output:
1

Explanation:
We can flip the last bit in one move.

Sample Input:
1111

Sample Output:
0

Explanation:
The string already has all bits set to 1. So we require no moves.

Sample Input:
1001101

Sample Output:
4

Explanation:
In the first move, we can choose the index(2). The string now looks like 1110010.
In the second move, we choose the index (4). The string looks like 1111101.
Then we choose index(6) and (7) in our next two moves. The final string is 1111111.

*/

// Author: @devangs
// TC: O(N)

#include<bits/stdc++.h>
using namespace std;

int minFlips(string target)
{
	char curr = '0';
	int count = 0;
	for(int i = 0; i < target.length(); i++)
	{		
	if (target[i] == curr)
	{
		count++;
		curr = (char)(48 + (curr + 1) % 2);
	}
	}
	return count;
}

int main()
{   
    int tc;
    string S;
    cin>>tc;
    while(tc--)
    {
    cin>>S;	
	cout <<minFlips(S)<<endl;
    }
    
return 0;
}


IP:

3
10
1111
1001101

OP:

1
0
4



Py Code: 
TC: O(N^2)


s = list(input())
ans = 0

for i in range(len(s)):
    if (s[i] == '0'):
        ans+=1
        for j in range(i,len(s)):
            if (s[j]=='0'):
                s[j]='1'
            else:
                s[j] ='0'
                
print(ans)    
