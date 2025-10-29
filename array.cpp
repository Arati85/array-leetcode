/*#include<bits/stdc++.h>
using namespace std;

int count_no(int a[],int n,int tar){
    int  count =0;
   for(int  i=0;i<n;i++){
    if(a[i]>tar) count++;
   }
   cout<<count<<" ";
   return 0;
}
int main(){
    int a[]={5,6,45,32,67,8,74,54,5,6};
    int count=0;
    int n=10;
    int tar=5;
    int h=count_no(a,n,tar);

   return 0;
}*/

// for product of elements
/*#include<bits\stdc++.h>
using namespace std;
int product_no(int a[],int n){
    int pro=1;
    for(int i=0;i<n;i++){
        pro=pro*a[i];
    }
    cout<<pro<<" ";
    return 0;
}
int main(){
    int a[]={3,4,5,6,7,8};
    int pro=1;
    int n=6;
    product_no(a,n);

   return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int seclargest(int a[],int n){
    int i=0;
    int max=INT_MIN;
    int secmax=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max){
            secmax=max;
            max=a[i];
        }
        else if(secmax!=max&& secmax<a[i]){
            secmax=a[i];
        }
    }
    cout<<secmax<<" ";
    return 0;
}
int main(){

    int a[]={3,67,45,23,69,56,34,23,12};
    int n=9;
    int h=seclargest(a,n);

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int min_ele(int a[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    cout<<min<<" ";
    return 0;
}
int main(){
    int a[]={56,34,57,89,63,23};
    int n=6;
    min_ele(a,n);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
bool dublicate_ele(int a[],int n){
    unordered_set<int>seen;
    for(int i=0;i<n;i++){
        if(seen.find (a[i])!=seen.end()){
        return true;

          }
          seen.insert(a[i]);
      }
        return false;

    }


int main (){
    int a[]={3,5,6,7,6,5,6,7};
    int n=8;
   bool h= dublicate_ele(a,n);
   cout << (h? "true" : "false") << " ";
    return 0;

}*/

// reverse the array by k
/*#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>&v,int i,int j){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

}
int main(){
    vector<int>v;

    v.push_back(8);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(16);
    v.push_back(45);
    v.push_back(83);
    v.push_back(90);
    int n=v.size();
    int k=8;
     k=k%n;

  display(v);
   reverse(v,0,n-k-1);
   reverse(v,n-k,n-1);
   reverse(v,0,n-1);
   display(v);

 return 0;


}*/

// count the no of element strictly greater than x
/*#include<bits/stdc++.h>
using namespace std;
int count_number(int a[],int n,int tar){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>tar) count++;
    }
    return count;

}
int main(){
    int a[]={5,67,45,34,86,2,97,4,5};
    int n=9;
    int tar=5;
     int h= count_number(a,n,tar);
    cout<<h<<" ";
    return 0;

}*/

// Check if the given array is sorted or not
/*#include<bits/stdc++.h>
using namespace std;
bool sorted_ornot(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
        return true;

}
int main(){
    int a[]={ 4,5,6,7,8,9,89,90};
    int n=sizeof (a)/sizeof(a[0]);
    bool h=sorted_ornot(a,n);
    if(h)
    cout<<"true";
    else
        cout<<"false"<<" ";

    return 0;

}*/

// sort the array by
/* #include<bits/stdc++.h>
using namespace std;
void sort_arr(vector<int>&v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    vector<int>v;

    v.push_back(0);
    v.push_back(1);
     v.push_back(0);
     v.push_back(0);
     v.push_back(1);
     v.push_back(1);
     v.push_back(1);
     v.push_back(0);
     v.push_back(1);
     v.push_back(0);
    sort_arr  (v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
return 0;

} */

// by using two pointer sort array zero an ones
/* #include<bits/stdc++.h>
using namespace std;
void sort_arr(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
   while(i<j) {
          if (v[i] == 0)
                i++;
            else if (v[i]==1)
                j--;
            else if (v[i] == 1 && v[j] == 0)
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                i++;
                j--;
            
        }
    }
}
    int main()
    {
        vector<int> v;

        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        sort_arr(v);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        return 0;
    } */




   /* Find the difference between the sum of elements at even indices to the sum of elements at odd
indices. */

/* #include<bits/stdc++.h>
using  namespace std;
int difference_ofsum(int a[],int n){
    int oddsum=0;
    int evensum=0;
    int difference=0;
    for(int i=0;i<n;i++){
        if(i%2==0)   {
             evensum=evensum+a[i];
             }
        else{
            oddsum=oddsum+a[i];
        }
    }
    difference=(evensum-oddsum);
    cout<<difference<<" ";
    return 0;

}
int main(){
    int a[]={ 2,3,4,5,6,7,8,9,7,6};
    int n=10;
    int h=difference_ofsum(a,n);
  
    return 0;
} */


/* Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10. */

/* #include<bits/stdc++.h>
using namespace std;
void change_array(int a[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]=a[i]+10;
        }
        else{
            a[i]=a[i]*2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={3,4,5,6,7,8,9};
    int n=7;
    change_array(a,n);
    return 0;
}
 */




/* Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique. */
/* #include<bits/stdc++.h>
using namespace std;
int unique_ele(vector<int>&v){
    int n=v.size();
     int uniqueno=0;
     for(int i=0;i<n;i++){
        uniqueno=uniqueno^v[i];
     }
     return uniqueno;
}
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(5);
    v.push_back(4);
    v.push_back(4);
    v.push_back(8);
    v.push_back(8);
    v.push_back(3);
    v.push_back(3);
    v.push_back(2);
   
   int h= unique_ele(v);
 cout <<h<<" ";
   return 0;    
}
 */

//If an array arr contains n elements, then check if the given array is a palindrome or not .

/* #include<bits/stdc++.h>
using namespace std;
 void check_palindrome(vector<int>&v){
    int n=v.size();
    bool flag=true;
    for(int i=0; int j=n-1;i<j , i++,j--){
        if(v[i]!=v[j]){
           flag=false;
            break;
        }
       
    }
        if( flag){
            cout<<"array is palndrom"<<" ";
        }
        else{
            cout<<" not palindrom"<<" ";
        }
    }

 
 int main(){
    vector<int>v={1,2,3,4,3,2,7,1};
    check_palindrome(v);
    return 0;
 }
 */


//wave matrix
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"enter no if rows";
    cin>>m;
    int n;
    cout<<"enter no of coloumn";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];       
             }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
} */
/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
 */
//Write a program to print the elements wave form

/*#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int m;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> a(n, vector<int>(m));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // Optionally, you can add code here to display the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < n; ++i) {
        if(i%2==0)
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        else { 
            for(int j=m-1;j>=0;--j)
       {
           cout << a[i][j] << " ";
           
       }
            
        }
        cout << endl;
    }

    return 0;
}
 */
//Write a program to print the elements of both the diagonals in a square matrix.
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"entr no of row  :";
    cin>>m;
    int n;
    cout<<"enter no coloumn";
    cin>>n;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((i==j) || i+j==(m-1))
            cout<<a[i][j]<<" ";
        
        else
            cout<<" "<<" ";
    
        }    
        cout<<endl;
    }
    
}
 */



//pascal triangle
/*  #include<bits/stdc++.h>
using namespace std;
int main(){
    int m=7;  //this size is given already
    vector<vector<int>>v(m);
    for(int i=1;i<=m;i++){//one d vector push krna hai to ye loop lga hai
        vector<int>a(i);
        v.push_back(a);
    }
    //for generating the pascal
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}  
 */
/* #include<bits/stdc++.h>
using namespace std;

int main() {
    int m = 5;  // this size is given already
    vector<vector<int>> v(m);

    // Initialize the Pascal triangle
    for(int i = 0; i < m; i++) {
        v[i].resize(i + 1);
        v[i][0] = v[i][i] = 1;
        for(int j = 1; j < i; j++) {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }

    // Print the Pascal triangle
    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
 */


/* Given a sorted array arr[] (with unique elements) and an integer k,
 find the index (0-based) of the largest element in arr[] that is less than or equal to k. 
 This element is called the "floor" of k. If such an element does not exist, return -1.


 */
/* #include <bits/stdc++.h>
using namespace std;

int floor_value(vector<int>& v, int k) {
    int n = v.size();
    int max = INT_MIN;
    int idx = -1;
    int i = 0;

    while (i < n) {
        if (v[i] <= k && v[i] > max) {
            max = v[i];
            idx = i;
        }
        i++;
    }

    return idx;
}

int main() {
    vector<int> v = {1, 2, 8, 10, 11, 12, 19};
    int k = 5;
    int h = floor_value(v, k);
    cout << h << " ";
    return 0;
} */



//Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].
/* #include<bits/stdc++.h>
using namespace std;
vector<int>floorCeil_value(int x, vector<int> &arr) {
       int n=arr.size();
    int max=INT_MIN;
    int min=INT_MAX;
    // FOR FLOOR VALUUE
    for(int i=0;i<n;i++){
        if(arr[i]<=x&&arr[i]>max){
            max=arr[i];
        }
    }
    if(max==INT_MIN){
        max=-1;
    }
    
    //for ceil value
    for(int i=0;i<n;i++){
        if(arr[i]>=x&&arr[i]<min){
            min=arr[i];
        }

    }
    if(min==INT_MAX){
        min=-1;
    }
    return {max,min};
    }
   

int main() {
    vector<int> arr= {5, 6, 8, 9, 6, 5, 5, 6};
    int x = 7;
    vector<int> h = floorCeil_value(x,arr);
    cout << h[0]<<" "<<h[1] ;
    return 0;

}
 */


//search in rotated sorted array
/* #include<bits/stdc++.h>
using namespace std;
int search_target(vector<int>v,int k){
    int n=v.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid]==k){
            return mid;
        }
        if(v[start]<=v[mid]){
            if(v[start]<=k && k<=v[mid]){
                end=mid-1;

            }
            else{
                start=mid+1;
            }
        }
        else{
            if(v[mid]<=k && k<=v[end] ){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return -1;
}
int main(){
    vector<int>v={4,5,6,7,0,1,2};
    int k=0;
    int h=search_target(v,k);
    cout<<h<<" ";
    return 0;
} */


/* Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array. */
/* #include<bits/stdc++.h>
using namespace std;
int majorityele(vector<int>nums){
    int n=nums.size();
    unordered_map<int ,int>map;
    for(int i=0;i<n;i++){
        map[nums[i]]++;
    }
    for(auto it:map){
        if(it.second>(n/2)){
          return it .first;
        }

    }
    return -1;
}

int main(){
    vector<int>nums={2,2,1,1,1,2,2};
    int h=majorityele(nums);
     cout<<h<<" ";
     return 0;

}
 */


//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
/* #include<bits/stdc++.h>
using namespace std;
vector<int>majorityele(vector<int>nums){
    int n=nums.size();
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[nums[i]]++;
    }
    vector<int>r;
    for(auto it:map){
        if(it.second>(n/3)){
          r.push_back(it.first);
        }
       
    }
     return r;
   
}
int main(){
    vector<int>nums={3,2,3};
  vector < int> h=majorityele(nums);
  for(int i=0;i<h.size();i++){
     cout<<h[i]<<" "; 
  }   
   
  return 0;
}

 */
//first and last occurence
/* #include<bits/stdc++.h>
using namespace std;
int binary_flsearch(vector<int>v,int tar){
    int n=v.size();
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(v[mid]==tar){
            ans=mid;
           right=mid-1;//first occurence ke liye hmesha left side hi check krenge , last occurence ke liye right sise left=mid+1
        }
        else if(v[mid]<tar){
            left=mid+1;
        }  
        else{
            right=mid-1;
           
    }
    }
    return ans;
}

int main(){
    vector<int>v={1,2,2,2,2,3,3,4};
    int tar=4;
    int h=binary_flsearch(v,tar);
    if(h!=-1){
        cout<<h<<" ";
    }
    else{
        cout<<" not found";
    }
   
    return 0;
} */



//maximum subarray
/* #include<bits/stdc++.h>
using namespace std;
int maxsubarray(vector<int>v){
    int n=v.size();
   int maxcurrent=v[0];
    int maxsub=v[0];
    for(int j=0;j<n;j++){
        maxcurrent=max(v[j],maxcurrent+v[j]);
        maxsub=max(maxsub,maxcurrent);
       
    }
    return maxsub;
}
int main (){
    vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
    int h=maxsubarray(v);
    cout<<h<<" ";
    return 0;
}
 */


//stock buy and sell
// har din ko sell price mana hai.

/* #include<bits/stdc++.h>
using namespace std;
int buysell(vector<int>nums,int n){
    int bestbuy=nums[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        if(nums[i]>bestbuy){
       maxprofit=max(maxprofit,nums[i]-bestbuy);
    }
    bestbuy=min(bestbuy,nums[i]);
    }
    return maxprofit;
}

int main(){
    vector<int>nums={7,6,4,3,1};
    int n=nums.size();
    int h=buysell(nums,n);
    cout<<h<<" ";
    return 0;
}
 */

/*#include<bits/stdc++.h>
using namespace std;
int pivot(vector<int>a,int lb,int ub){
    
    int sum1=0;
    int sum2=0;
    int left=lb;
    int right=ub;
    int mid=(left+right)/2;
    for(int i=0;i<=mid;i++){
        sum1=sum1+a[i];
    }
    for(int i=a.size()-1;i>mid+1;i--){
        sum2=sum2+a[i];
    }
    if(sum1==sum2)
    return mid+1;

return -1;    
}

int main(){
    vector<int>a={1,7,3,6,5,6};
    int lb = 0;
    int ub = a.size() - 1;
    int n=6;
    int h=pivot(a,lb,ub);
    cout<<h<<" ";
    return 0;
}*/

//Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<bits/stdc++.h>
using namespace std;
int countones(vector<int>arr){
    int n=arr.size();
    int noons=1;
    int count= 0;
    for(int i=0;i<n;i++){
        if(noons==arr[i]){
            count++;
        }
        return count;

    }

}
int main() {
    vector<int> vec = {0, 0, 1, 1, 1};
    int count = countones(vec);
    cout << "The number of ones is: " << count << endl;
    return 0;
}