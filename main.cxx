#include<iostream>
#include<vector>
#include<string>

#include<math.h>
using namespace std;
int main(int argv, char *argc[]){
    /*string ques2 = "人易科技:上 機 測 驗 - 演算法";
    for(int i = 0; i < ques2.size(); i++){
        cout << ques2[i];
    }
    cout << endl;*/

    //Question: 3
    int array3[10] = {0,1,2,3,4,5,6,7,8,9};
    int odd3 = 0;
    int even3 = 0;
    int array3size = sizeof(array3)/sizeof(array3[0]);
    int *even3array;
    int *odd3array;
    if(array3size % 2 == 0){
        even3array = new int[array3size/2];
        odd3array = new int[array3size/2];
    }else{
        even3array = new int[array3size/2];
        odd3array = new int[array3size/2 + 1];
    }
    for(int i = 0; i < array3size; i++){
        if(array3[i] % 2 == 0){
            even3 += array3[i];
            even3array[i/2] = array3[i];
        }else{
            odd3 += array3[i];
            odd3array[(int)floor(i/2)] = array3[i];
        }
    }
    
    cout << "3-1 Answer: 奇數值: " << odd3 << ",偶數值: " << even3 << endl;
    cout << "3-2 Answer: 奇數值陣列[0]: " << odd3array[0] << ",偶數值陣列[0]: " << even3array[0] << endl;
}