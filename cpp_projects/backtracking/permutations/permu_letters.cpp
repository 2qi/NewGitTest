/*
    permutate the letters in a string.
    efficiently.
    without repeating.
    Use a set, and do backtracking.
 */
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <bits/stdc++.h>

using namespace std;

void permute_helper(string, string, vector<string>& v3, set<string>& s1);
void permute(string,vector<string>& v2, set<string>& s2);
void indent(int);

//vector<string> v1;
uint32_t numcalls =0;

int main(){
vector<string> v1;
set<string> finalset;
string mystring = "ABedcec";
sort(mystring.begin(),mystring.end());
cout<< "mystring =" << mystring <<endl;
//permute("ABBCdee",v1, finalset);
permute(mystring,v1, finalset);
cout << "printing vector -  size = " << v1.size();
//for(int i =0; i<v1.size();i++){
//      cout<<v1[i]<<endl;
//      }
cout <<endl << "Set contents - size = " << finalset.size() << " \n";
for (set<string>::iterator i1 = finalset.begin(); i1!= finalset.end(); i1++){
        cout << *i1 << " - ";
}
cout << "\ntotal num of calls = " << numcalls;
}

void permute(string inStr, vector<string>& v2, set<string>& s1){
//      vector v1;
        permute_helper(inStr,"",v2, s1);
}
void permute_helper(string inStr, string chosen,vector<string>& v3, set<string>& s2){
numcalls++;
// second string tp keep a track of whats chosen
//      indent(chosen.length());
//      cout << "helper-{\"" << inStr <<","<<chosen<<"\"}" <<endl;
        if(inStr.empty()){
        // base case. when string empty
                //cout << chosen << endl;
                //v1.push_back(chosen);
                v3.push_back(chosen);
                s2.insert(chosen);
        } else {
                for(int i =0;i<inStr.length();i++){
                // choose
                char c = inStr[i];
                if(i==0 || c != inStr[i-1]){
                        inStr.erase(i,1);
                        //explore
                        permute_helper(inStr,chosen + c,v3,s2);
                        // un choose
                        inStr.insert(i,1,c);
                        //chosen.erase(chosen.length() - 1,1);
                        }
                }
        }
}
void indent(int n){
for(int i =0;i<n;i++){
        cout << "  -  ";

}
}