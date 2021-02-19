 #include<iostream>
 #include<string>
 using namespace std;

class TictacToe{

    public:

        char block[3][3]={{'1','1','1'},{'1','1','1'},{'1','1','1'}};

      

        string p1 ="Player 1";
        string p2 ="Player 2";







        void getMove(int pos){
            switch(pos){
                case 1:
                    if(block[0][0] == '1'){
                            block[0][0] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }

                case 2:
                    if(block[0][1] == '1'){
                            block[0][1] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 3:
                    if(block[0][2] == '1'){
                            block[0][2] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 4:
                    if(block[1][0] == '1'){
                            block[1][0] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 5:
                    if(block[1][1] == '1'){
                            block[1][1] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 6:
                    if(block[1][2] == '1'){
                            block[1][2] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 7:
                    if(block[2][0] == '1'){
                            block[2][0] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 8:
                    if(block[2][1] == '1'){
                            block[2][1] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                 case 9:
                    if(block[2][2] == '1'){
                            block[2][2] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
                    }
                default:
                    cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos);
            }
        }

        bool check(){

            if ((block[0][0] == block[1][1] && block[1][1] == block[2][2] && block[0][0] == 'X') || (block[0][2]==block[1][1] && block[1][1]== block[2][0] && block[0][2] == 'X') ){
                cout<<"Player1 won";
                return true;
                
            }
            else if ((block[0][0] == block[1][1] && block[1][1] == block[2][2] && block[0][0] == 'O') || (block[0][2]==block[1][1] && block[1][1]== block[2][0] && block[0][2] == 'O')) {
                cout<<"Player2 won";
                return true;
            }
            else if(((block[0][0] == block[0][1] == block[0][2])=='X') || ((block[1][0] == block[1][1] == block[1][2])=='X') || ((block[2][0] == block[2][1] == block[2][2])=='X')){
                cout<<"Player 1 won";
                return true;
            }

            else if(((block[0][0] ==  block[1][0] == block[2][0]) =='X') || ((block[0][1] == block[1][1] == block[2][1])=='X') || (((block[0][2] == block[1][2] == block[2][2]) =='X'))){
                cout<<"Player 1 won";
                return true;
            }

              else if( ((block[0][0] == block[0][1] == block[0][2]) =='O') || ((block[1][0] == block[1][1] == block[1][2]) =='O') || ((block[2][0] == block[2][1] == block[2][2])=='O')){
                cout<<"Player 2 won";
                return true;
            }

            else if(((block[0][0] == block[1][0] == block[2][0]) =='O') || ((block[0][1] == block[1][1] == block[2][1]) =='O') || (((block[0][2] == block[1][2] == block[2][2]) =='O'))){
                cout<<"Player 2 won";
                return true;
            }
                

            else{
                return false;
            }
  

           
        }

 
 };


 int main(){
    
    TictacToe t;

    int moves = 9;
    int pos;

    cout<<"Player 1 is X"<<endl;
    cout<<"Player 2 is O"<<endl;

    while(moves-->0){
         cout<<t.p1<<" Enter your move : ";
         cin>>pos;
         t.getMove(pos);
         if(t.check()){
             moves = 0;
             break;
         }
        

         cout<<t.p2<<" Enter your move : ";
         cin>>pos;
         t.getMove(pos);
         if(t.check()){
             moves = 0;
             break;
         }

    }

    if(!(t.check())){
        cout<<"Match draw"<<endl;
    }
 }

