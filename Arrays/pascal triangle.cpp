vector<vector<int> > Solution::generate(int A) {
    int row = A;
    vector<vector<int> > vec(row);
    if(A==0)
        return vec;

    for (int i = 0; i < row; i++) {
		int col;
		col = i+1;
		vec[i] = vector<int>(col);
		for (int j = 0; j < col; j++){
		    if(j==0 || j==col-1)
		        vec[i][j]=1;
		    else {
		        vec[i][j]=(vec[i-1][j-1]+vec[i-1][j]);
		    }
		}
	}
	return vec;
}
