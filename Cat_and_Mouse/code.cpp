char* catAndMouse(int x, int y, int z) {
    
    int distance_A = abs(z-x);
    int distance_B = abs(z-y);
    
    if(distance_A < distance_B) return "Cat A";
    else if(distance_A > distance_B) return "Cat B";
    else return "Mouse C";


}

//Time Complexity: O(1)
//Space Complexity: O(1)