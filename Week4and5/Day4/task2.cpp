/* 957. Prison Cells After N Days
There are 8 prison cells in a row, and each cell is either occupied or vacant.
Each day, whether the cell is occupied or vacant changes according to the following rules:
If a cell has two adjacent neighbors that are both occupied or both vacant, then the cell becomes occupied.
Otherwise, it becomes vacant.
(Note that because the prison is a row, the first and the last cells in the row can't have two adjacent neighbors.)
We describe the current state of the prison in the following way: cells[i] == 1 if the i-th cell is occupied, else cells[i] == 0.
Given the initial state of the prison, return the state of the prison after N days (and N such changes described above.)
 */


 vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int>temp(8,0);
        vector<vector<int>>v;
        while(N--){
            for(int i=1;i<7;i++){
                temp[i]=cells[i-1]==cells[i+1];
            }
            if(v.size()!=0 and v.front()==temp){
                return v[N%v.size()];
            }
            v.push_back(temp);
            cells=temp;
        }
        return cells;
    }