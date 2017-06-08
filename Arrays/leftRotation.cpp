 int n , left ,temp;
    
    cin>>n>>left ;
    vector<int> arr(n+left) ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
   for (int i = 0 ; i < left ; i++){
       arr[n+i] = arr[i] ;
       
   }
    
       for(int i = left ;i<n+left ; i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    
    return 0;
