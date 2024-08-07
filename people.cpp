#include<bits/stdc++.h>
using namespace std;

struct data{
   string name;
   float height,weight;
   int income;
};

bool compare(data a,data b)
{
    if(a.income==b.income){
        if(a.height==b.height){
            if(a.weight==b.weight){
                return a.name.size()< b.name.size();
            }
            else return a.weight<b.weight;
        }
        else return a.height>b.height;
    }
    else return a.income>b.income;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   int n; cin>>n; // number of people
   vector<data> d(n);
   // data of each people
   // the format must be name,height,weight,income
    for(int i=0;i<n;i++)
    {
        // There should no spaces between name
        cin>>d[i].name;
        cin>>d[i].height;
        cin>>d[i].weight;
        cin>>d[i].income;
    }
    sort(d.begin(),d.end(),compare);
    for(int i=0;i<n;i++)
    {
        cout<<"Candidate no :"<< i+1<<endl;
        cout<<"Name: "<<d[i].name<<endl;
        cout<<"Height: "<<d[i].height<<"\""<<endl;
        cout<<"Weight: "<<d[i].weight<<" kg"<<endl;
        cout<<"Income: "<<d[i].income<<" BDT"<<endl<<endl;
    }
}