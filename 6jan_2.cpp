class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
            vector<int> v;
    
    for(int i=0,j=0,k=0;j<n||k<m;i++)
    {
        
     
       if(arr1[j]==arr1[j+1]){
           j++;
           continue;
       }
       if(arr2[k]==arr2[k+1]){
           k++;
           continue;
       }
    

       if(j==n)
       {
           v.push_back(arr2[k]);
           k++;
       }
       else if(k==m)
       {
           v.push_back(arr1[j]);
           j++;
       }
       else if(arr1[j]<arr2[k])
        {
            v.push_back(arr1[j]);
            j++;
        }
        else if(arr1[j]>arr2[k])
        {
            v.push_back(arr2[k]);
            k++;
        }
        else
        {
            v.push_back(arr1[j]);
            j++;
            k++;
        }
        

       
    }
    
    return v;
    }
    

};