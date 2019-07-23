/* Program to print combinations of dice, given number of dice.
    program to print all permutations of dice rolls which lead to a particular number */
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void func1(vector<int>&);
void dieroll(int16_t);
void dieroll_sum(int16_t,int16_t);
void dieroll_sum_helper(int16_t,int16_t,int16_t, vector<int>& v2);
void dieroll_helper(int16_t digits, vector<int>& v2);

int calls =0;
uint32_t actual_count;
int main(){
printf("Hello ji\n");

vector<int> v1;
v1.push_back(32);
v1.push_back(33);
v1.push_back(34);
//func1(v1);
dieroll(7);
cout<< "acutal count of dierolls :"<<actual_count <<endl ;
cout << "pairs of  number of die whose sum is 10"<<endl;
dieroll_sum(3,9);
cout << "\nmum of calls" << calls;
//cout << v1;
}

void dieroll_helper(int16_t digits, vector<int>& v2){
        if(digits == 0){
actual_count++;
//              cout << '{';
//              for(int i=0;i<v2.size();i++){
//                      cout << v2[i] <<",";
//              }
//              cout << "}\n";
        } else {
        //chooose
                for (int i =1;i<=6;i++){
                        v2.push_back(i);
        //explore
                        dieroll_helper(digits-1,v2);
        //unchoose
                        v2.pop_back();
                }
        }
}
void dieroll(int16_t digits){
        vector<int> v1;
        dieroll_helper(digits,v1);
}
void dieroll_sum(int16_t dice, int16_t sum){
        vector<int> v1;
        dieroll_sum_helper(dice,sum,0,v1);

}

void dieroll_sum_helper(int16_t dice, int16_t sum,int16_t sumsofar, vector<int>& v2){
calls++;
        if(dice == 0){
                //int16_t sum_of_elems =0;
                //for(auto& n: v2)
                //      sum_of_elems +=n;
                if(sumsofar == sum){
                cout << '{';
                for(int i=0;i<v2.size();i++){
                        cout << v2[i] <<",";
                }
                cout << "}\n";
                }
        } else {
        //chooose
                for (int i =1;i<=6;i++){
                //too big, too small
                if(sumsofar +i +1*(dice -1)<= sum &&
                        sumsofar +i +6*(dice -1)>= sum){
                        v2.push_back(i);
        //explore
                        dieroll_sum_helper(dice-1,sum,sumsofar+i,v2);
        //unchoose
                        v2.pop_back();
                }
                }
        }
}