
int findMax(const int a[],const int &length){
    int temp = a[0];
    for(int i=1;i<length;++i){
        if(temp<a[i])
            temp = a[i];
    }
    return temp;
}