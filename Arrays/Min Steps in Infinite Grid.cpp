int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int res=0;
    for(int i=0;i<(A.size()-1);i++){
        int temp1=A[i+1]-A[i];
        int temp2=B[i+1]-B[i];
        if(temp1<0)
            temp1*=(-1);
        if(temp2<0)
            temp2*=(-1);
        res+=max(temp1,temp2);
    }
    return res;
}
