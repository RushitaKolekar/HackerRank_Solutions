//simulation way

string kangaroo(int x1,intx2,int v1,int v2){
    if(v1==v2){
        return (x1==x2) ? "YES" : "NO";
    }

    
    while(true){
        if(x1==x2) return "YES";
        if((v1>v2 && x1>x2) || (v1<v2 && x1<x2)) return "NO";
        
        x1+=v1;
        x2+=v2;
    }
}

// Time Complexity: O(n) where n is the number of jumps until they meet or one of them goes past the other
// Space Complexity: O(1) since we are using a constant amount of space