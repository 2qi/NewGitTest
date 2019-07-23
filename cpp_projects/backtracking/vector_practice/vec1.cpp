#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
int main() {
        vector<int> g1;

        for ( int i =0;i <9; i++){
                g1.push_back(i*i);
        }

        printf("g1.size() = %lu\n",g1.size());
        printf("g1.max_size() = %lu\n",g1.max_size());
        printf("g1.empty() = %d\n",g1.empty());
        printf("g1.capacity() = %lu\n",g1.capacity());
        printf("iterating from top to bottom: " );
        for (auto k = g1.begin(); k != g1.end();++k){
                cout<< *k <<" ";
        }
        cout << endl;

        // resize the vector
        g1.resize(5);
        cout << "New size after resizing to 5: " <<g1.size();
        printf("\n iterating from top to bottom: " );
        for (auto k = g1.begin(); k != g1.end();++k){
                cout<< *k <<" ";
        }
        cout << endl;

        g1.shrink_to_fit();
        cout << "Shrinking vector - new size:"<<g1.size()<< "new capacity :" <<g1.capacity();

        cout << endl << "Iterating using indexing: ";
        for (int i =0; i<g1.size();i++){
                cout << " g1["<<i<<"] ="<<g1[i] <<endl;
        }

        vector<int> g2;
        g2.assign(3,8);
        g2.assign(2,7);
        cout <<"\n vector g2:";
        for (int i =0 ; i<g2.size();i++){
                cout << g2[i] << "-";
        }

        //push_back
        g2.push_back(35);
        g2.push_back(49);
        cout <<"\ng2 last element:" << g2.back() <<endl;
        g2.pop_back();
        cout <<"\n vector g2:";
        for (int i =0 ; i<g2.size();i++){
                cout << g2[i] << "-";
        }
        auto k = g2.begin();
        g2.insert(k+2,23);
        cout <<"\n vector g2:";
        for (int i =0 ; i<g2.size();i++){
                cout << g2[i] << "-";
        }

        return 0;
}