 #include<iostream>
 #include<string>
 using namespace std;

class TictacToe{

    public:

        char block[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

      

        string p1 ="Player 1";
        string p2 ="Player 2";



        void show(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<" | "<<block[i][j]<<" ";
                }
                cout<<" | ";
                cout<<endl;
                cout<<"___________________"<<endl;
            }
        }



        void getMove(int pos, string p){

            if(p == "Player1"){
                switch(pos){
                case 1:
                    if(block[0][0] == ' '){
                            block[0][0] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }

                case 2:
                    if(block[0][1] == ' '){
                            block[0][1] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 3:
                    if(block[0][2] == ' '){
                            block[0][2] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 4:
                    if(block[1][0] == ' '){
                            block[1][0] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 5:
                    if(block[1][1] == ' '){
                            block[1][1] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 6:
                    if(block[1][2] == ' '){
                            block[1][2] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 7:
                    if(block[2][0] == ' '){
                            block[2][0] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 8:
                    if(block[2][1] == ' '){
                            block[2][1] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                 case 9:
                    if(block[2][2] == ' '){
                            block[2][2] = 'X';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
                    }
                default:
                    cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player1");
            }
            }
            else if(p == "Player2"){
                switch(pos){
                case 1:
                    if(block[0][0] == ' '){
                            block[0][0] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }

                case 2:
                    if(block[0][1] == ' '){
                            block[0][1] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 3:
                    if(block[0][2] == ' '){
                            block[0][2] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 4:
                    if(block[1][0] == ' '){
                            block[1][0] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 5:
                    if(block[1][1] == ' '){
                            block[1][1] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 6:
                    if(block[1][2] == ' '){
                            block[1][2] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 7:
                    if(block[2][0] == ' '){
                            block[2][0] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 8:
                    if(block[2][1] == ' '){
                            block[2][1] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                 case 9:
                    if(block[2][2] == ' '){
                            block[2][2] = 'O';
                            break;
                    }
                    else{
                        cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
                    }
                default:
                    cout<<"Invalid move try again"<<endl;
                        int pos;
                        cin>>pos;
                        getMove(pos,"Player2");
            }
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

    int moves = 0;
    int pos;

    string player1 ="Player1";
    string player2 = "Player2";

    cout<<"Player 1 is X"<<endl;
    cout<<"Player 2 is O"<<endl;

    while(moves<9){
         cout<<t.p1<<" Enter your move : ";
         cin>>pos;
         t.getMove(pos, player1);
         t.show();
         moves++;
         if(t.check()){
             moves = 0;
             break;
         }
        
        

        if(moves != 9){
         cout<<t.p2<<" Enter your move : ";
         cin>>pos;
         t.getMove(pos, player2);
         t.show();
         moves++;
         if(t.check()){
             moves = 0;
             break;
         }

         
        }

         


         

    }

    if(!(t.check())){
        cout<<"Match draw"<<endl;
    }
 }

