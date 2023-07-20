// Const SC && TC -> O(1)
// Concept :: 3999 = 3000+900+90+9
//                    mmm+cm+ xc+ix

class Solution {
public:
    string intToRoman(int num) {

        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thns[] = {"","M","MM","MMM"};

        return thns[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[(num%10)];
        

        
    }
};
