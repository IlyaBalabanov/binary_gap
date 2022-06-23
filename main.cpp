#include <cstdlib>
#include <iostream>
#include "vector"
using namespace std;

int solution(int N) {
    vector<int> bin;
    while (N) {
        bin.push_back(N % 2);
        N /= 2;
    }

    int count=0;
    int max_count=0;
    int pas;
    for(int i=0;i<bin.size();i++){
        if(bin[i]!=0) {
            pas = i;
            break;
        }
    }

    for(int i=0; i<pas;i++)
    {
        bin.erase(bin.begin());
    }

    for(int i = 0; i<bin.size(); i++){
        if(bin[i]==0){
            while(bin[i]==0) {
                count += 1;
                i++;
            }

            if(max_count<count)
                max_count=count;
            count=0;
        }

    }

    return max_count;
}

int main() {

  cout<<solution(32);
    return 0;
}
