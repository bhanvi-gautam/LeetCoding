class Solution {
public:
    //using hashmaps
  int romanToInt(string str) {
       	map<char,int> m;
        m.insert({'I',1});
       	m.insert({'V',5});
	m.insert({'X',10});
	m.insert({'L',50});
	m.insert({'C',100});
	m.insert({'D',500});
	m.insert({'M',1000});
	int result=0;

        for(int i=0;i<str.length();i++){
	    if(m[str[i]]<m[str[i+1]]){
		result=result+m[str[i+1]]-m[str[i]];
		i++;
	    }
	    else
	    result=result+m[str[i]];
	}
      return result;
   }
};

