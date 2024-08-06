#include<stack>;
class twoStacks {
     int* arr;
       int size;
       int top1;
       int top2;
  public:

    twoStacks(int size = 100) {
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int x) {
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = x;
        }
    }

    void push2(int x) {
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = x;
        }
    }

    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    int pop2() {
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }
};
