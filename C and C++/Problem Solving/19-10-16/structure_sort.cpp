#include<bits/stdc++.h>

using namespace std;

struct Range {
    int st,end,minVal;
    Range(){}
    Range(int a,int b,int c) {
        st= a;
        end= b;
        minVal= c;
    }
};

bool compare(Range a, Range b) {
    if (a.end-a.st > b.end-b.st)
        return 0;
    return 1;
}

int main() {
    struct Range inputs[4];
    inputs[0]= Range(1,5,2);
    inputs[1]= Range(1,2,5);
    inputs[2]= Range(1,1,2);
    inputs[3]= Range(3,7,1);

    sort(inputs, inputs+4, compare);

    for (int i=0;i<4;++i) {
        cout<<inputs[i].st<<" "<<inputs[i].end<<" "<<inputs[i].minVal<<endl;
    }
    return 0;
}
