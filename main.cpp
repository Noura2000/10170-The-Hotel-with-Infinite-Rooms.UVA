#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,q,in,c=1;
    vector<int>num;
    cin>>n>>q;
    while(n!=0&&q!=0)
    {
        cout<<"CASE# "<<c<<":"<<endl;
        for(int i=0;i<n;i++){ cin>>in; num.push_back(in);}

        sort(num.begin(),num.end());
        while(q--)
        {
            cin>>in;
            int lw=lower_bound(num.begin(),num.end(),in)-num.begin();

            if(num[lw]==in) cout<<in<<" found at "<< (lw+1)<<endl;
            else cout<<in<<" not found"<<endl;

        }

        cin>>n>>q;
        c++;
        num.clear();
    }

    return 0;
}
