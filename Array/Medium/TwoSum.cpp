string read(int n, vector<int> book, int target)
{
   sort(book.begin(), book.end());

    int s=0, e=n-1;

    while(s<e){
        if(book[s] + book[e] == target){
            return "YES";
        }
        if(book[s] + book[e] < target ){
            s++;
        }
        else {
            e--;
        }
    }

    return "NO";

}

// https://www.codingninjas.com/studio/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&count=25&page=2&search=&sort_entity=order&sort_order=ASC