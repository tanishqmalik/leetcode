    int ans_size= ans.size();

    float ans_size_half = ans_size/2;

    

    if(ans_size%2!=0){
        int median1= (ans_size+1)/2;
        cout<<median1<<endl;
    }
    else{
        double median= (ans_size_half+ (ans_size_half+1))/2;
        cout<<median<<endl;
    }
