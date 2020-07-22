/*1276. Number of Burgers with No Waste of Ingredients
Given two integers tomatoSlices and cheeseSlices. The ingredients of different burgers are as follows:
Jumbo Burger: 4 tomato slices and 1 cheese slice.
Small Burger: 2 Tomato slices and 1 cheese slice.
Return [total_jumbo, total_small] so that the number of remaining tomatoSlices equal to 0 and the number of remaining cheeseSlices equal to 0. If it is not possible to make the remaining tomatoSlices and cheeseSlices equal to 0 return [].*/


vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(cheeseSlices>tomatoSlices or
           tomatoSlices>cheeseSlices*4 or
           tomatoSlices<cheeseSlices*2)return {};
        if(tomatoSlices==cheeseSlices*2) {
            return {0,cheeseSlices};
        }
        if(tomatoSlices==cheeseSlices*4) {
           return {cheeseSlices,0};
        }
        int bb = (tomatoSlices/2)-cheeseSlices;
        int sb = cheeseSlices-bb;
        if(sb+bb!=cheeseSlices or 4*bb+2*sb!=tomatoSlices)return{};
        return {bb,sb};
        
    }