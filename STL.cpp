void explainPair(){
    pair<int, int> p={1,3};


}
void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>> vec;
    v.push_back({1,2}); // define by curly brackets that it is a pair 
    v.emplace_back(1,2); //automatically assumes as a pair 
    vector<int>v(5,100);
    vector<int>v(5);
    
    vector<int>::iterator it = v.begin();//points to the memory adress not the actual value 
    it++; // shifts to the next memory 
    cout << *(it) << " "; //* gives the actual element at the adress 
    vector<int>::iterator it = v.rbegin();//reverse begin points to the last memory adress, if we do it++ , then it moves to left just like reversing 
    cout << v.back() << " "; // gives the last elements of the vector 
    for(vector<int>::iterator it = v.begin(); it !=v.end();it++){
        cout << *(it) << " ";
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout << *(it) << " ";
    }
    for(auto it : v){
        cout << it << " ";
    }
    v.erase(v.begin()+1); //erases the element at 2nd pos
    v.erase(v.begin()+2,v.begin()+4);//erases element from 2nd to 3rd position (start,end(excluded))
    vector<int>v(2,100);
    v.insert(v.begin(),300); //at the first position, 300 is inserted 
    v.insert(v.begin()+1,2,10);// at 2nd and 3rd pos, 10 is inserted at both pos
    v.size();// gets the number of elements in the vector 
    v.pop_back();//removes the last element of the vector 
    v1.swap(v2); //swaps values with each other 
    v.empty(); //gives boolean value if the vector is emoty or not 
    v.clear(); //clears the vector


}
void explainList(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();{2,4};
    //insert function takes more complexity
}
void explainStack(){
    //LIFO(last input, first output)
    stack<int>st;
    st.push(1);// {1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.emplace(5); //{5,3,2,1} emplace and push are the same 
    st.top(); //prints the number at the top of stack
    st.size();
    st.empty();
    stack<int>st1,st2;
    st1.swap(st2);
}
void explainQueue(){
    //FIFO(first input, first output)
    queue<int>q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    //*
    q.back() +=5 ;//adds 5 to 4 becomes 9
    q.front() //prints the first element of the queue
}
void explainPQ(){
    priority_queue<int>pq;
    //it stores numbers in a vector in descinding order
    //where the maximum number is at the top (maximum heap)
    //top(),emplace(),pop() are used 
     
    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq;
    //then if you push(),emplace() then numbers will be in the ascending order
    //with the minimum at the top
}
void explainSet(){
    set<int>st;
    //SORTED,UNIQUE
    auto it1 = st.find(3);
    auto it2 = st.find(6);
    st.erase(it1,it2);
    auto it =st.lowerbound(2)
    //sets take logarithmic time complexity 

}
void explainMultiSet(){
    multiset<int>ms;
    //SORTED,NOT UNIQUE,HOLDS DUPLICATE VALUES 
    ms.erase(1); // erases all the occurences of 1 in the set 
    ms.erase(ms.find(1)); // only single element erases as erases adress
    ms.erase(ms.find(1),ms.find(1)+2);// erases 1st,2nd,3rd occurence .erase(start,end)

}
void explainUSet(){
    unordered_set<int>st;
    //UNSORTED,UNIQUE

}
void explainMap(){//like dictionary 
    map<int,int>mp;//key=int,value=int
    map<int, pair<int,int>> mp; //key=int,value=pair
    mp[1]=2;// key 1 with value 2
    mp.emplace({3,1});//key 3 with value 1
    mp.insert({2,4});
    mp[{2,3}]=10; // a key pair with value 10 
    for(auto it : mp){
        cout << it.first<< " " << it.second<<endl;
    } //it.first is the key, it.second is the value 
    auto it =mp.find(3); //access the pair {3,1}
    cout << *(it).second //gives the actual value 
}
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }else if(p1.second ==p2.second){
        if(p1.first>p2.first) return true;
    }
    return false;
}
bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second > p2.second) return false; // swaps internally 
    // they are same 
    if(p1.first >p2.first) return true;
    return false;
    }
}
void Explainsort(){
    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    sort(a,a+n,greater<int>); //sort by descending using greater 
    sort(a,a+n, comp); // my way 

    int num =7;
    int cnt = __builtin_popcount();

    long long num = 1000000000000;
    int cnt = __builtinpopcountll();
    
    int maxi = *max_element(a,a+n);
    int mini = *min_element(a,a+n);
}
