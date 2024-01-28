        }
            odd[0] = 1;
        else even[0] = 1;
        for(int i = 1; i<n; ++i) {
            ans += 1;
            int curr = arr[i];
            if(arr[i]%2) {
                odd[i] = even[i-1] + 1;// +1 for the odd number separately being a 
subarray and even[i-1] for the curr number taken with the prev odd sum subarray
[
