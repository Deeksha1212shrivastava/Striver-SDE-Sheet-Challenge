//https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems

void sort012(int *arr, int n)
{
   //   Write your code here
    int l=0;
    int h=n-1;
    int i=0;
    while(i<=h){
        if(arr[i]==0){
            swap(arr[i++],arr[l++]);
        }
         else if(arr[i]==1){
             i++;
         }
            else{
                swap(arr[i],arr[h--]);
        }
    }
}