#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int i1=1, n,k1,k2, j1,j2;
    cin>>n;
    int n1 = (n+1)/2;
    int n2 = n1-1;
    
     while(i1<=n1)
     {
         int k1=1;
         while(k1<=n1-i1)
         {
             cout<<" ";
             k1++;
         } 
         int j1=1;
         while(j1<=2*i1-1)
         {
             cout<<"*";
             j1++;
         }
         cout<<endl;
         i1++;
     }
    
    // now we have to print lower bound of diamond shape
    int i2=n2;
     while(i2>0) 
        {
            int k2=1;
            while(k2<=n2-i2+1)
            {
                cout<<" ";
                k2++;
            }
            int j2=1;
            while(j2<=2*i2-1)
            {
                cout<<"*";
                j2++;
            }
            cout<<endl;
            i2--;
        }
    //main loop ends
}

