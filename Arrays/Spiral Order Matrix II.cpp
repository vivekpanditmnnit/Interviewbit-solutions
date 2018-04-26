vector<vector<int> > Solution::generateMatrix(int A) {
    vector<int> row;
    vector<vector<int> > res;

    int a[A][A];
    int t,b,l,r,dir=0,i;
    t=0; b=A-1; l=0; r=A-1;
    int num=1;
    while(t<=b && l<=r){
        if(dir==0){
            for(i=l;i<=r;i++){
                a[t][i]=num;
                num++;
            }
            t++;
        }
        else if(dir==1){
            for(i=t;i<=b;i++){
                a[i][r]=num;
                num++;
            }
            r--;
        }
        else if(dir==2){
            for(i=r;i>=l;i--){
                a[b][i]=num;
                num++;
            }
            b--;
        }
        else if(dir==3){
            for(i=b;i>=t;i--){
                a[i][l]=num;
                num++;
            }
            l++;
        }
        dir = (dir+1)%4;
    }

    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            row.push_back(a[i][j]);
        }
        res.push_back(row);
        row.clear();
    }

    return res;
}
