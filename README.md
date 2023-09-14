# BruteForceAggresiveCows
Saving code
bool find(vector<int> &arr, int k, int dist) {
    int lastcow = arr[0];
    int n = arr.size();
    int totalc = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] - lastcow >= dist) {
            totalc++;
            lastcow = arr[i];
            
        }
        if (totalc >= k) {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    int n = stalls.size();
    // This is the maximum distance.
    sort(stalls.begin(),stalls.end());
    int dist = stalls[n - 1] - stalls[0];
    
    for (int j = 1; j <= dist; j++) {
        // j is the maximum distance we are finding.
        if (find(stalls, k, j) == false) {
            return j - 1;
        }
    }
    return dist;
}
