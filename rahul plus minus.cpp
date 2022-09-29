
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


void plusMinus(vector<int> arr) {
    double add=0;
    double subs =0;
    double zero=0;
    
    for (int i=0; i<arr.size(); i++) {
        if (arr[i]>0) {
        add = add+1;
        }
        if (arr[i]<0) {
        subs = subs+1;
        }
        if(arr[i]==0)zero++;
    }
    // cout<< plus <<"\n " ;
    // cout<<minus << " ";
    // cout<< zero <<" "<<endl;
    cout<<add/arr.size()<<endl;
    cout<<subs/arr.size()<<endl;
    cout <<zero/arr.size()<<endl;

}


int main()
{
   
    vector<int>myarr={1, -6, 5 ,-6,1 ,-8, -5}; 
    plusMinus(myarr);
 
    
    return 0;
}
