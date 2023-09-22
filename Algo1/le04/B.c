
// Online C compiler to run C program online
#include <stdio.h>

int binarySearch(int nums1[], int n1, int key){
    int left,right,mid;
    left=0;
    right=n1;
    while(left<right){
        mid=(left+right)/2;
        if (nums1[mid]==key){
            return mid;
        }else if (nums1[mid]>key){
            right= mid;
        }else{
            left = mid+1;
        }
        
    }
    return 0;
    
}



int main() {
    int n1, n2, nums1[100030], nums2[50000],res[100000],i,j,k,l=0,flag;
    int key,sum=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) scanf("%d",&nums1[i]);
    scanf("%d",&n2);
    /*for(i=0;i<n2;i++){
        scanf("%d",&nums2[i]);
    } 
    */
    
    for(i=0;i<n2;i++){
        scanf("%d",&key);
       if(binarySearch(nums1,n1,key)) sum++;
    } 
    
    
    //printf("hey\n");
    /*
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(nums1[i]==nums2[j]){
                flag=0;
                
                for(k=0;k<l;k++){
                    if(nums1[i]==res[k])flag==1;
                }
                
                if(flag==0){
                res[l]=nums1[i];
                l++;
                //flag=0;
                }
            }
        }
    }
    */
    //for(i=0;i<l-1;i++){
    printf("%d\n",sum);
    //}
    
    //if(l>0)printf("%d\n",res[l-1]);
    //printf("hey ");
    
    return 0;
}


