#include<bits/stdc++.h>

using namespace std;

int job_sequencing(vector<pair<int, int>> jobs, int n_jobs){
    int ans=0;
    sort(jobs.begin(), jobs.end(), [] (pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    ans+=jobs[0].first;
    vector<bool> slots(n);
    for(int i=1; i<n_jobs; i++){
        for(int j = min(n, jobs[i].first)-1; j>=0; j--){
            if(!slots[j]){
                slots[j] = true;
                ans+=jobs[i].second;
                break;
            }
        }
    }   
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> jobs(n);
    for(int i = 0; i < n; i++){
        cin >> jobs[i].first >> jobs[i].second;
    }
    int res=;
    return 0;
}