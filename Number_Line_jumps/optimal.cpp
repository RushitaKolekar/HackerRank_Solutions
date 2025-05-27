// mathematical optimization

string kangaroo(int x1,intx2,int v1,int v2){
    if(v1==v2){
        return (x1==x2) ? "YES" : "NO";
    }
    if((x2-x1)%(v1-v2)==0 && (x2-x1)/(v1-v2)>=0) return "YES";
    else return "NO";
}

// Time Complexity: O(1)
// Space Complexity: O(1)