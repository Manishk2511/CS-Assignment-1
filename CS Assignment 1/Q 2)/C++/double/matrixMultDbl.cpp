#include<bits/stdc++.h>
using namespace std;



int main(int argc, char * argv[]){
    

    int n,m;
    n=(int)atoi(argv[1]);
    m=(int)atoi(argv[2]);
    vector<vector<double>> a(n,vector<double>(m)),b(n,vector<double>(m)),c(n,vector<double>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=j+1;
            b[i][j]=i+1;
        }
    }
    
    clock_t begin = clock();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            double sum=0;
            for(int k=0;k<n;k++){
                sum+=a[i][k]*b[j][k];
            }
            c[i][j]=sum;
        }
    }
    
    clock_t end = clock();
    cout << "\n\nMeat portion Executed in " << (double(end - begin) / (CLOCKS_PER_SEC)) << "s.\n";

    return 0;
}

