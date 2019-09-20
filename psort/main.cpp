#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,s,n,i,j,x,y,z;
    cin>>p>>s;
    y=p;
    int arr[2][s];
    vector <pair<int,int> > v1,v2;
    vector <pair<int,int> >::iterator it,it1;
    while(p--)
    {for(int i=0;i<s;i++)
    {
        cin>>arr[0][i];
    }
    for(int i=0;i<s;i++)
    {
        cin>>arr[1][i];
    }
    for(int i=0;i<s;i++)
    {v1.push_back(make_pair(arr[0][i],arr[1][i]));

    }
    }
i=1,j=0;
    for(it = v1.begin();it != v1.end();)
    { n=0;
    x=j+s-1;
    it1 = it +s;
        sort(it,it1);
        for(;j<x;j++)
        {  //cout<<v1[j].second<<" "<<v1[j+1].second<<endl;
            if(v1[j].second>v1[j+1].second)
            { n++;
           // cout<<n;
            }
            //cout<<endl;
        }
        it=it+s;
        j++;
        v2.push_back(make_pair(n,i));
        i++;

    }

    sort(v2.begin(),v2.end());
    for(int i=0;i<y-1;i++)
        {if(v2[i].first==v2[i+1].first)
           {
               if(v2[i].second<v2[i+1].second)
                 {cout<<v2[i].second<<endl;
                  cout<<v2[i+1].second<<endl;
                  i++;}
               else
               {
                   cout<<v2[i+1].second<<endl;
                   cout<<v2[i].second<<endl;
                   i++;}
               }
               else
               {
                   cout<<v2[i].second<<endl;
               }
           z=i+1;}
           if(z==y-1)
            cout<<v2[z].second;





    return 0;
}
