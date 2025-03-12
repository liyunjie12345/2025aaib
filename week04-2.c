//week04-2.c
int maximumCount(int* nums, int numsSize) {
    int pos = 0, neg = 0; //迴圈前面都是0

    for(int i=0; i<numsSize; i++){
        if( nums[i] > 0 ) pos++; // 正數
        if( nums[i] < 0 ) neg++; // 負數
    }
    if(pos>neg) return pos;
    else return neg;
}
