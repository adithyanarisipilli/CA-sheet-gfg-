//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<char>lower;
        vector<char>upper;
        string ans="";
        for(int i=0;i<str.length();i++){
            if(str[i]<=90)
              upper.push_back(str[i]);
            else
              lower.push_back(str[i]);
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        int a=0,b=0;
        for(int i=0;i<str.length();i++){
            if(str[i]<=90){
                ans+=(upper[a]);
                a++;
            }
            else{
                ans+=(lower[b]);
                b++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends