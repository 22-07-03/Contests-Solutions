class Solution {
public:
int height(int red,int blue){
       int row = 0; bool turn = true; int val =1;
        while(1){
             if(turn){
                if(red>=val){  red = red-val; turn=!turn; val++;row++;}
                     else{ break;}
             }
             else if(!turn) {
                if(blue>=val){blue = blue-val; turn=!turn;val++; row++;}
                else {break;}
             }
             
        }
            return row;
}
    int maxHeightOfTriangle(int red, int blue) {
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int  row_red = height(red,blue);
      int row_blue = height(blue,red);
        return max(row_blue,row_red);
    }
};
