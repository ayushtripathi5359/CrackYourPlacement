class Solution{
  public:
  
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int petrolSum = 0;
       int totalDistance = 0;
       for(int i = 0 ; i < n ; i++){
           petrolSum+=(p[i].petrol);
           totalDistance+=(p[i].distance);
       }
       if(totalDistance > petrolSum) return -1;
       int total = 0;
       int result = 0;
       for(int i = 0 ; i < n ; i++){
           total+=(p[i].petrol - p[i].distance);
           if(total<0){
               total = 0;
               result = i+1;
           }
       }
       return result;
    }
};
