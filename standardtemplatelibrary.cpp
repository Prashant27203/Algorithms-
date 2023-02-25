//STANDARD TEMPLATE LIBRARY FUNCTIONS THAT ARE ESSENTIAL FOE COMPETITIVE PROGRAMMING

//1-> CONTAINERS

//2-> ITERATORS

//3-> ALGORITHMS

                                        //1-> CONTAINERS

//1-> VECTOR

//2-> LIST

//3-> DEQUE

//4-> SET

//5-> MAP

//6-> STACK

//7-> QUEUE

//8-> PRIORITY QUEUE

//9->PAIR

//1-> VECTOR-> dynamic array WITH ADVANTAGES OF LINKED LIST AND ARRAY THAT IS DYNAMIC SIZE AND RANDOM ACCESS

//1-> DECLARATION -> vector <int> v; -> VECTOR [KEYWORD] <DATA TYPE> VARIABLE NAME ;

//2-> INSERTION -> v.push_back(5); -> INSERTS 5 AT THE END OF THE VECTOR

//3-> DELETION -> v.pop_back(); -> DELETES THE LAST ELEMENT OF THE VECTOR

//4-> SIZE -> v.size();-> RETURNS THE SIZE OF THE VECTOR

//5-> SORTING -> sort(v.begin(),v.end());-> SORTS THE VECTOR IN ASCENDING ORDER

//6-> REVERSE SORTING -> sort(v.rbegin(),v.rend());-> SORTS THE VECTOR IN DESCENDING ORDER

//7-> REVERSE -> reverse(v.begin(),v.end());-> REVERSES THE VECTOR 

//8-> SWAP -> swap(v1,v2);-> SWAPS THE TWO VECTORS THAT IS v1 BECOMES v2 AND v2 BECOMES v1

//9-> CLEAR -> v.clear(); -> DELETES ALL THE ELEMENTS OF THE VECTOR

//10-> ERASE -> v.erase(v.begin()+2);-> DELETES THE ELEMENT AT THE 2ND INDEX

//11-> INSERT -> v.insert(v.begin()+2,5);-> INSERTS 5 AT THE 2ND INDEX

//12-> FIND -> find(v.begin(),v.end(),5);-> returns the iterator to the first element equal to 5 THAT IS THE ADDRESS OF THE FIRST ELEMENT EQUAL TO 5

//13-> COUNT -> count(v.begin(),v.end(),5);-> returns the number of elements equal to 5

//14-> MAX -> *max_element(v.begin(),v.end());-> returns the maximum element of the vector

//15-> MIN -> *min_element(v.begin(),v.end());-> returns the minimum element of the vector

//16-> SUM -> accumulate(v.begin(),v.end(),0);-> returns the sum of all the elements of the vector

//17-> SORTED OR NOT -> is_sorted(v.begin(),v.end());-> returns true if the vector is sorted

//18-> UNIQUE -> v.erase(unique(v.begin(),v.end()),v.end());-> removes all the duplicate elements from the vector

//19-> BINARY SEARCH -> binary_search(v.begin(),v.end(),5);-> returns true if 5 is present in the vector

//20-> LOWER BOUND -> lower_bound(v.begin(),v.end(),5); -> returns the first element greater than or equal to 5

// CODE THAT INCLUDES ALL THE ABOVE FUNCTIONS IN C++ 

//code of all the functions of vector in c++
/*
#include <bits/stdc++.h>//header file that includes all the header files it is a user defined header file
using namespace std;
int main()
{
    vector <int> v;
//1-> v.push_back(5); -> INSERTS 5 AT THE END OF THE VECTOR
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
                  for(int i=0;i<v.size();i++)
                  {
                      cout<<v[i]<<" ";
                  }
                                    //or mentos style
                    for(auto x:v)   
                    {
                        cout<<x<<" ";
                    }
//2-> v.pop_back(); -> DELETES THE LAST ELEMENT OF THE VECTOR                    
    v.pop_back();
    for (auto x : v)
    {
        cout << x << " ";
    }
//3-> v.size();-> RETURNS THE SIZE OF THE VECTOR
    cout<<v.size()<<endl;
//4-> sort(v.begin(),v.end());-> SORTS THE VECTOR IN ASCENDING ORDER
    sort(v.begin(),v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
//5-> sort(v.rbegin(),v.rend());-> SORTS THE VECTOR IN DESCENDING ORDER
    reverse(v.begin(),v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
//6-> swap(v1,v2);-> SWAPS THE TWO VECTORS THAT IS v1 BECOMES v2 AND v2 BECOMES v1
    swap(v[0],v[1]);
    for (auto x : v)
    {
        cout << x << " ";
    }
//7-> v.clear(); -> DELETES ALL THE ELEMENTS OF THE VECTOR
    v.clear();
    cout<<v.size()<<endl;
//8-> v.erase(v.begin()+2);-> DELETES THE ELEMENT AT THE 2ND INDEX
    v.erase(v.begin()+2);
    for (auto x : v)
    {
        cout << x << " ";
    }
//9-> v.insert(v.begin()+2,5);-> INSERTS 5 AT THE 2ND INDEX
    v.insert(v.begin()+2,5);
    for (auto x : v)
    {
        cout << x << " ";
    }
//10-> find(v.begin(),v.end(),5);-> returns the iterator to the first element equal to 5 THAT IS THE ADDRESS OF THE FIRST ELEMENT EQUAL TO 5
    auto it=find(v.begin(),v.end(),5);
    cout<<*it<<endl; // behaves like a pointer

//11-> count(v.begin(),v.end(),5);-> returns the number of elements equal to 5
    cout<<count(v.begin(),v.end(),5)<<endl;

//12-> *max_element(v.begin(),v.end());-> returns the maximum element of the vector
    cout<<*max_element(v.begin(),v.end())<<endl;

//13-> *min_element(v.begin(),v.end());-> returns the minimum element of the vector
    cout<<*min_element(v.begin(),v.end())<<endl;

//14-> accumulate(v.begin(),v.end(),0);-> returns the sum of all the elements of the vector
    cout<<accumulate(v.begin(),v.end(),0)<<endl;

//15-> is_sorted(v.begin(),v.end());-> returns true if the vector is sorted
    cout<<is_sorted(v.begin(),v.end())<<endl;

//16-> v.erase(unique(v.begin(),v.end()),v.end());-> removes all the duplicate elements from the vector
    v.erase(unique(v.begin(),v.end()),v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
//17-> binary_search(v.begin(),v.end(),5);-> returns true if 5 is present in the vector
    cout<<binary_search(v.begin(),v.end(),5)<<endl;//time complexity of binary search is O(logn)

//18-> lower_bound(v.begin(),v.end(),5); -> returns the first element greater than or equal to 5
    auto it1=lower_bound(v.begin(),v.end(),5);
    cout<<*it1<<endl;

//19-> upper_bound(v.begin(),v.end(),5); -> returns the first element greater than 5
    auto it2=upper_bound(v.begin(),v.end(),5);
    cout<<*it2<<endl;

// 20-> SWAP -> swap(v1,v2);-> SWAPS THE TWO VECTORS THAT IS v1 BECOMES v2 AND v2 BECOMES v1
    vector <int> v1={1,2,3,4,5};
    vector <int> v2={6,7,8,9,10};
    swap(v1,v2);
    for (auto x : v1)
    {
        cout << x << " ";
    }
    for (auto x : v2)
    {
        cout << x << " ";
    }
    return 0;
}
*/

                                               //PAIRS 

//PAIR -> A PAIR IS A DATA STRUCTURE THAT CAN STORE TWO DIFFERENT DATA TYPES IN IT

//1-> pair<int,int> p; -> creates a pair of integers

//2-> pair<int,string> p; -> creates a pair of integer and string

//3-> pair<int,int> p(1,2); -> creates a pair of integers with the first element as 1 and the second element as 2

//PRINTING THE PAIR

//1-> cout<<p.first<<" "<<p.second<<endl; -> prints the first and the second element of the pair

//NOTE --> THE PAIRING AND THE NESTING OF THE CONTAINERS IS DISCUSSED FURTHER 


//CODE THAT INCLUDES ALL THE NECESSARY FUNCTIONS OF PAIR IN C++
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p;
    p.first = 10;
    p.second = 20;
    cout << p.first << " " << p.second << endl;
    pair<int, string> p1;
    p1.first = 10;
    p1.second = "Mango";
    cout << p1.first << " " << p1.second << endl;
    pair<int, int> p2(1, 2);
    cout << p2.first << " " << p2.second << endl;
    // make_pair
    pair<int, int> p3 = make_pair(1, 2);
    cout << p3.first << " " << p3.second << endl;
    pair<int, int> p4 = {1, 2};
    cout << p4.first << " " << p4.second << endl;                       
    pair<int, int> p5 = {1, 2};
    cout << p5.first << " " << p5.second << endl;
    //nesting of pairs with vectors 

   //vector of pairs 
vector<pair<int , int > > v;
v.push_back({1,2});
v.push_back({2,3});
v.push_back({3,4});
v.push_back({4,5});
v.push_back({5,6});
//MENTOS STRATEGY
for(auto x:v)
{
    cout<<x.first<<" "<<x.second<<endl;
}
}
*/

                                      //MAPS
//MAPS ARE USED TO STORE THE DATA IN THE FORM OF KEY VALUE PAIRS

// use trees for implementation internally [red black trees]
/*A red-black tree is a binary search tree which has the following red-black properties: Every node is either red or black. Every leaf (NULL) is black. If a node is red, then both its children are black.*/

//1-> map<int,int> m; -> creates a map of integers [SYNTAX TO CREATE A MAP]

//2-> m[1]=2; -> inserts the key value pair (1,2) in the map where in the first element is the key and the second element is the value

//3-> m[2]=3; -> inserts the key value pair (2,3) 

//4-> all the essential functionalities of the map are discussed in the code below

//CODE THAT INCLUDES ALL THE NECESSARY FUNCTIONS OF MAPS IN C++
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;

    m[1] = 2;
    m[2] = 3;
    m[3] = 4;
    m[4] = 5;
    m[5] = 6;
    m[6] = 7;

    //1-> m.size(); -> returns the size of the map
    cout << m.size() << endl;
    //2-> m.empty(); -> returns true if the map is empty
    cout << m.empty() << endl;
    //3-> m.erase(1); -> erases the key value pair with the key 1
    m.erase(1);
    //4-> m.clear(); -> clears the map
    m.clear();
    //5-> m.count(1); -> returns 1 if the key 1 is present in the map
    cout << m.count(1) << endl;
    //6-> m.find(1); -> returns the iterator to the key 1 if it is present in the map
    auto it = m.find(1);
    cout << it->first << " " << it->second << endl;
    //7-> m.insert({1,2}); -> inserts the key value pair (1,2) in the map
    m.insert({1, 2});
    //8-> m[1]=2; -> inserts the key value pair (1,2) in the map
    m[1] = 2;
    //9-> m[2]=3; -> inserts the key value pair (2,3) in the map
    m[2] = 3;
    //10-> m[3]=4; -> inserts the key value pair (3,4) in the map
    // taking input from the user in map
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m[x] = y;
    }*/
    //GIVEN N STRINGS , PRINT UNIQUE STRINGS IN LEXICO GRAPHICAL ORDER WITH THIER FREQUENCY 
   /* int n;
    cin >> n;
    map<string, int> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
*/

//unordered map -> it is a map that stores the data in the form of key value pairs but it does not store the data in the sorted order

//average time complexity of major functions is o(1) [insertion, deletion, search]

// it stores the data in the form of hash table

// all the functionalities are same as in case of the unoredered map just the difference is that it does not store the data in the sorted order

//lets see all the functionalities of the unordered map through a code 

//CODE THAT INCLUDES ALL THE NECESSARY FUNCTIONS OF UNORDERED MAPS IN C++

    /*
  #include <bits/stdc++.h>
  using namespace std;
  int main()
  {

      unordered_map<int, int> m;

      m[1] = 2;
      m[2] = 3;
      m[3] = 4;
      m[4] = 5;
      m[5] = 6;
      m[6] = 7;

      //1-> m.size(); -> returns the size of the map
      cout << m.size() << endl;
      //2-> m.empty(); -> returns true if the map is empty
      cout << m.empty() << endl;
      //3-> m.erase(1); -> erases the key value pair with the key 1
      m.erase(1);
      //4-> m.clear(); -> clears the map
      m.clear();
      //5-> m.count(1); -> returns 1 if the key 1 is present in the map
      cout << m.count(1) << endl;
      //6-> m.find(1); -> returns the iterator to the key 1 if it is present in the map
      auto it = m.find(1);
      cout << it->first << " " << it->second << endl;
      //7-> m.insert({1,2}); -> inserts the key value pair (1,2) in the map
      m.insert({1, 2});
      //8-> m[1]=2; -> inserts the key value pair (1,2) in the map
      m[1] = 2;
      //9-> m[2]=3; -> inserts the key value pair (2,3) in the map
      m[2] = 3;
      //10-> m[3]=4; -> inserts the key value pair (3,4) in the map
      // taking input from the user in map
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
          int x, y;
          cin >> x >> y;
          m[x] = y;
      }*/
    // GIVEN N STRINGS , PRINT UNIQUE STRINGS IN LEXICO GRAPHICAL ORDER WITH THIER FREQUENCY
    /*
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    int n;
    cin >> n;
    unordered_map<string, int> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
  }

  Note - same is the case of nesting in every aspect of the map and the unordered map
  */
 /*MULTIMAPS
 MULTIPLE TIMES THE VALUE ARE STORED IN THE MAP
 REST OF ALL THE FUNCTIONALITIES ARE SAME AS IN CASE OF THE MAPS
 
 THESE DATA STRUCTURE ARE USUALLY AVOIDED BECAUSE THEY ARE NOT EFFICIENT
 */
                                    
                                    //SETS

//SETS -> it is a data structure that stores the data in the sorted order   

//SETS ARE OF TWO TYPES

//1-> SETS

//2-> MULTISETS

// IF ALL THE VALUES ARE REMOVED FROM THE MAP THEN IT IS SET LIKE A SET IN MATHEMATICS 


//COLLECTIONS OF SOME WELL DEFINED OBJECTS

//NORMAL SETS

//UNOREDERED SETS 

//MULTI SETS

//ALL THE DATA IS STORED IN THE SORTED ORDER

//TIME COMPLEXITY OF MAJOR SET FUNCTIONS IS O(LOGN)

//ACCESS OF ELEMENTS IS IN O(LOGN)

//DECLARATION OF SETS 
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //time complexity of major set function is o(logn)
    set<int> s;//declarations of set

    s.insert(1);//inserts the element 1 in the set

    s.insert(2);
    
    //set<set< int> > s1;//declaration of set of sets
    
    //elements are stored in the sorted order 
    
    //1-> s.size(); -> returns the size of the set
    
    cout << s.size() << endl;
    
    //2-> s.empty(); -> returns true if the set is empty
    
    cout << s.empty() << endl;
    
    //3-> s.erase(1); -> erases the element 1 from the set
    
    s.erase(1);
    
    //4-> s.clear(); -> clears the set
    
    s.clear();
    
    //5-> s.count(1); -> returns 1 if the element 1 is present in the set
    
    cout << s.count(1) << endl;
    
    //6-> s.find(1); -> returns the iterator to the element 1 if it is present in the set
    
    auto it = s.find(1);
    
    // if not found then it returns the iterator to the end of the set
    
    cout << *it << endl;
/*
//mentos style 
for(auto x:s)
{
    cout<<x<<" ";
}
conventional method 

for(auto it=s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";
}
}
*/

//GIVEN N STRINGS PRINT THE UNIQUE STRINGS IN LEXICOGRAPHICAL ORDER
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    int n;
    cout<<"Enter the Number of strings to be inserted in the set"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}*/
/*
//unordered Sets 
declaration=unordered_set<int> s;

//all the functionalities are same as in case of the set
just the difference is that it does not store the data in the sorted order
they are not implemented using red black trees
they are implemented using hash tables

*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_set<int> s;

cout<<"Enter the number of elements to be inserted in the set"<<endl;

int n;

cin>>n;

for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    s.insert(x);
}
int q=0;
cout<<"Enter the number of queries to be performed"<<endl;
cin>>q;
while(q--)
{
    int x;
    cin>>x;
    if(s.find(x)!=s.end())
    {
        cout<<"Element is present in the set"<<endl;
    }
    else
    {
        cout<<"Element is not present in the set"<<endl;
    }
}
return 0;
}
//complex data structures could not be utilised in case of the unordered sets
*/

//MULTI SETS
//MULTIPLE TIMES THE VALUE ARE STORED IN THE SET
//REST OF ALL THE FUNCTIONALITIES ARE SAME AS IN CASE OF THE SETS
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    //important functions
    auto it = s.find(1);//-> returns the iterator to the first occurence of the element 1
s.erase(it);//-> erases the first occurence of the element 1
for(auto x:s)
{
    cout<<x<<" ";
}
s.erase(1);//-> erases all the occurences of the element 1
// could be utilised as an alternatives to priority queues
//all operations are performed in o(logn) time
return 0;
}
*/

//STACKS & QUEUES
/*
STACKS- STACKS ARE THE DATA STRUCTURES THAT STORE THE DATA IN THE LIFO ORDER
 TOP POINTER 
    PUSH
    POP

QUEUES - QUEUES ARE THE DATA STRUCTURES THAT STORE THE DATA IN THE FIFO ORDER

FRONT POINTER
    PUSH
    POP
REAR POINTER 
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}

*/
// The balanced paranthesis problem [important ]
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++)//traverse the string
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')//if the current character is an opening bracket
        {
            st.push(s[i]);//push it into the stack
        }
        else if(s[i]==')')//if the current character is a closing bracket 
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                cout<<"Not Balanced"<<endl;
                return 0;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                cout<<"Not Balanced"<<endl;
                return 0;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                cout<<"Not Balanced"<<endl;
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}





*/
 
 // INBUILT SORTING ALGORITHMS IN C++

//SORTING ALGORITHMS + COMPARATOR FUNCTION

// SORTING ALGORITHMS OF STL INCLUDE  

//INTRO SORT-> IT IS A HYBRID SORTING ALGORITHM THAT USES QUICK SORT , HEAP SORT AND INSERTION SORT

//IT IS A COMBINATION OF THREE SORTING ALGORITHMS

//AS THE DEPTH INCREASES OF THE RECURSION TREE THE ALGORITHM SWITCHES TO THE HEAP SORT  AND SO ON 

/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements to be inserted in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);//-> sorts the array in the ascending order
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    //SORT IN REVESRE ORDER
    sort(a,a+n,greater<int>());//-> sorts the array in the descending order
}
*/
//COMPARTOR FUNCTION IN C++


//COMPARATOR FUNCTION IS A FUNCTION THAT IS USED TO COMPARE TWO ELEMENTS OF THE ARRAY

//PRIMARILY UTILIISED FOR CUSTOMISED SORTING

//THE COMPARATOR FUNCTION IS PASSED AS AN ARGUMENT TO THE SORT FUNCTION

//WE MANIPULATE THE SWAPPING OF THE ELEMENTS IN THE COMPARATOR FUNCTION

 // SO BY COMPARATOR WE ABSTRACT THIS FUNCTIONALITY AND PASS IT AS AN ARGUMENT TO THE SORT FUNCTION
 /*
 #include<bits/stdc++.h>
    using namespace std;
    bool compare(int a,int b)
    {
        return a<b;
    }
    int main()
    {
        int n;
        cout<<"Enter the number of elements to be inserted in the array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the elements of the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,compare);//-> sorts the array in the descending order
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        //by this method we can manipulate the sorting of a data structure according to us 
    } 
    swap ka logic hum apne according manipulte kar skte h 
   baaki descending m kbhi bhi krna ho toh greater<int>() pass kr skte h
    */

   /*
   searching related in built functions in c++

    they return the iterator to the element if found else they return the iterator to the end of the array

   upper_bound and lower_bound

upper_bound returns the iterator to the first element that is greater than the given element
   
lower_bound returns the iterator to the first element that is greater than or equal to the given element

condition is that the array should be sorted
 then they take o(logn) time

if the data structure is not sorted then it takes o(n) time
// code for upper_bound and lower_bound and their difference
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements to be inserted in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int key;
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    auto it=lower_bound(a,a+n,key);
    auto it1=upper_bound(a,a+n,key);
    cout<<it-a<<" "<<it1-a<<endl;
    cout<<it1-it<<endl;
    return 0;
}

IN CASE OF MAPS AND SETS TREE TRAVERSAL ALGORITHMS ARE UTILISED BUT IN CASE OF VECTOR AND ARRAYS BINARY SEARCH IS USED

   */

  //INBULIT ALGORITHMS IN C++

//MINIMUM & MAXIMUM ELEMENT IN A VECTOR
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements to be inserted in the array"<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    auto it=min_element(v.begin(),v.end());
    auto it1=max_element(v.begin(),v.end());
    int sum =accumulate(v.begin(),v.end());
    int count =count(v.begin(),v.end(),5);
    auto it5=  find(v.begin(),v.end(),5);
    // if found return s the iterator to the element else returns the iterator to the end of the array
    reverse(v.begin(),v.end());//->reverse the strings 
    cout<<*it<<endl;
    return 0;
}
*/

//ghanta use nhi hoti 

//LAMBDA FUNCTIONS IN C++
//all_of => returns true if all the elements satisfy the condition
//any_of => returns true if any of the elements satisfy the condition
//none_of => returns true if none of the elements satisfy the condition

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    //lambda function is a function that is defined without a name
  // cout<<( [](int x,int y){return x+y;}(5,6));//=> this is a lambda function
vector<int> v={2,1,5};
cout << all_of(v.begin(), v.end(), [](int x)
               { return x > 0; });
cout<<endl;
cout << any_of(v.begin(), v.end(), [](int x)
               { return x > 0; });
cout<<endl;
cout << none_of(v.begin(), v.end(), [](int x)
               { return x < 0; });
}
*/