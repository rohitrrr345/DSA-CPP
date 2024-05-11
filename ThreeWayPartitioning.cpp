   vector<int> result;
        vector<int> lessA, betAB, greaterB;

        for (int num : array) {
            if (num < a)
                lessA.push_back(num);
            else if (num >= a && num <= b)
                betAB.push_back(num);
            else
                greaterB.push_back(num);
    }
    
    for(int i=0;i<lessA.size();i++){
        result.push_back(lessA[i]);
    }
     for(int i=0;i<betAB.size();i++){
        result.push_back(betAB[i]);
    }
    for(int i=0;i<greaterB.size();i++){
        result.push_back(greaterB[i]);
    }
       
       for(int i=0;i<result.size();i++){
        array[i]=result[i];
    }
    