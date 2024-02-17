        }
        int i = 0, j = n-1;
        while(i<j) {
            for(int k = 0; k<n; ++k) {
                swap(matrix[k][i], matrix[k][j]);
            }
            i++;
            j--;
        }
    }
        return;
};
[
