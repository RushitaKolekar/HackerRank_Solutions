int designerPdfViewer(vector<int> h, string word) {
    
    int max_height = 0;
    
    for(char c:word){
        int char_height = h[c-'a'];
        if(char_height > max_height) max_height = char_height;
    }
    
    return max_height * word.length();

}

//Time Complexity: O(n), where n is the length of the word.
//Space Complexity: O(1), since we are using a fixed-size array for heights.