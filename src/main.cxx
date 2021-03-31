#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<vector>
#include <locale>
#include <codecvt>
#include "../inc/QuickSorting.h"
using namespace std;
using namespace QuickSorting;
int main(int argv, char *argc[]){

    //Question: 2
    cout << "Question 2: " << endl;
    wstring ques2 = L"人易科技:上 機 測 驗 - 演算法";
    wstring_convert<codecvt_utf8<wchar_t>> utf8; 
    string s = utf8.to_bytes(ques2);
    //cout << s << endl;
    //cout << s[12] << endl;
    for(int i = 0; i < s.length();i++){
        if(s[i] == ':'){
            s[i] = (s[i]+65248);
        }
    }
    cout << s << endl;
    //Question: 3
    cout << "Question 3: " << endl;
    int array3[10] = {0,1,2,3,4,5,6,7,8,9};
    int odd3 = 0;
    int even3 = 0;
    int array3size = sizeof(array3)/sizeof(array3[0]);
    int subarray = array3size/2;
    int *even3array;
    int *odd3array;
    
    if(array3size % 2 == 0){
        even3array = new int[subarray]{0};
        odd3array = new int[subarray]{0};
        //memset(even3array,0,subarray*sizeof(int));
        //memset(odd3array,0,subarray*sizeof(int));
    }else{
        even3array = new int[subarray]{0};
        odd3array = new int[subarray + 1]{0};
        //memset(even3array,0,subarray*sizeof(int));
        //memset(odd3array,0,(subarray+1)*sizeof(int));
    }
    /*for(int i = 0; i < (sizeof(odd3array)/sizeof(odd3array[0]));i++){
        cout << odd3array[i] << endl;
    }*/
    for(int i = 0; i < array3size; i++){
        if(array3[i] % 2 == 0){
            even3 += array3[i];
            even3array[(int)floor(i/2)] = array3[i];
        }else{
            odd3 += array3[i];
            odd3array[(int)floor(i/2)] = array3[i];
        }
    }
    cout << "3-1 Answer: 奇數值: " << odd3 << ",偶數值: " << even3 << endl;
    //cout << "3-2 Answer: 奇數值陣列[0]: " << odd3array[0] << ",偶數值陣列[0]: " << even3array[0] << endl;
    cout << "3-2 奇數值陣列: ";
    if(array3size % 2 == 0){
        for(int i = 0; i < subarray;i++){
            cout << odd3array[i] << " ";
        }
    }else{
        for(int i = 0; i < (subarray+1);i++){
            cout << odd3array[i] << " ";
        }
    }
    
    cout <<endl;
    cout << "3-2 偶數值陣列: ";
    for(int i = 0; i < subarray;i++){
        cout << even3array[i] << " ";
    }
    cout << endl;
    delete []even3array;
    delete []odd3array;
    //Question 4
    cout << "Question 4: " << endl;
    int arrSorting[] = {77,5,5,22,13,55,97,4,796,1,0,9};
    int arrsize = (sizeof(arrSorting)/sizeof(arrSorting[0]));
    cout << "Sorting origin: " << endl;
    PrintArray(arrSorting,arrsize);
    QuickSort(arrSorting,0,arrsize-1);
    cout << "Sorting after: " << endl;
    PrintArray(arrSorting,arrsize);

    //Question 5
    cout << "Question 5: " << endl;
    int a[] = {77,5,5,22,13,55,97,4,796,1,0,9};
    int b[] = {0,1,2,3,4,5,6,7,8,9};
    int size_a = sizeof(a)/sizeof(a[0]);
    int size_b = sizeof(b)/sizeof(b[0]);
    vector<int>areal;
    vector<int>breal;
    areal.push_back(a[0]);
    breal.push_back(b[0]);
    for(int i = 1; i < size_a; i++){
        if(a[i] != a[i-1]){
            areal.push_back(a[i]);
        }
    }

    for(int i =  1; i < size_b; i++){
        if(b[i] != b[i-1]){
            breal.push_back(b[i]);
        }
    }
    cout << endl;
    
    vector<int> c;
    vector<int> d;
    vector<int> e;
    vector<int> tmp;
    
    
    
    for(int i = 0; i < areal.size(); i++){
        for(int j = 0; j < breal.size();j++){
            if(areal[i] == breal[j]){
                c.push_back(areal[i]);
                break;
            }else if(areal[i] !=breal[j]){
                if(j == breal.size()-1){
                    d.push_back(areal[i]);
                }
                continue;
            }
            
        }    
    }

    for(int i = 0; i < breal.size(); i++){
        for(int j = 0; j < areal.size();j++){
            if(breal[i] == areal[j]){
                break;
            }
            else if(breal[i] != areal[j]){
                if(j == areal.size()-1){
                    tmp.push_back(b[i]);
                }
                continue;
            }
        }
    }
    cout << "交集: ";
    for(int i = 0; i < c.size();i++){
        cout << c[i] << " ";
    }
    cout << endl;
    cout << "差集: ";
    for(int i = 0; i < d.size();i++){
        cout << d[i] << " ";
    }

    cout <<  endl;
    cout << "補差集: ";
    for(int i = 0; i < tmp.size();i++){
        cout << tmp[i] << " ";
    }
    cout << endl;
    cout << "聯集: ";
    for(int i = 0; i < c.size();i++){
        e.push_back(c[i]);
    }
    for(int i = 0; i < d.size();i++){
        e.push_back(d[i]);
    }
    for(int i = 0; i < tmp.size();i++){
        e.push_back(tmp[i]);
    }
    for(int i = 0; i < e.size();i++){
        cout << e[i] << " ";
    }
    cout << endl;
    
    
}