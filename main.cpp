#include <iostream>

using namespace std;

int main()
{
    int i,j=0,n,p,q;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p>>q;
        int o=q-p;
        if(o>=2)
            j++;
    }
    if(j==0)
    cout << "0" << endl;
    else
        cout<<j<<endl;
    return 0;
}
