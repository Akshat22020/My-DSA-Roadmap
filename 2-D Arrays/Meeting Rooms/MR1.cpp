/* Given an array of meeting time interval objects consisting of start and end times [[start_1,end_1],[start_2,end_2],...] (start_i < end_i), determine if a person could add all meetings to their schedule without any conflicts.

Note: (0,8),(8,10) is not considered a conflict at 8

Example 1:

Input: intervals = [(0,30),(5,10),(15,20)]

Output: false
Explanation:

(0,30) and (5,10) will conflict
(0,30) and (15,20) will conflict
Example 2:

Input: intervals = [(5,8),(9,15)]

Output: true
Constraints:

0 <= intervals.length <= 500
0 <= intervals[i].start < intervals[i].end <= 1,000,000
[11:43 am, 11/02/2026] +91 81269 00157: Given two arrays start[] and end[] such that start[i] is the starting time of ith meeting and end[i] is the ending time of ith meeting. Return the minimum number of rooms required to attend all meetings.

Note: A person can also attend a meeting if it's starting time is same as the previous meeting's ending time.

Examples:

Input: start[] = [1, 10, 7], end[] = [4, 15, 10]
Output: 1
Explanation: Since all the meetings are held at different times, it is possible to attend all the meetings in a single room.
Input: start[] = [2, 9, 6], end[] = [4, 12, 10]
Output: 2
Explanation: 1st and 2nd meetings at one room but for 3rd meeting one another room required.
Constraints:
1 ≤ start.size() = end.size() ≤ 105
0 ≤ start[i] < end[i] ≤ 106*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>start;
    start.push_back(1);
    start.push_back(10);
    start.push_back(7);
    vector<int>end;
    end.push_back(4);
    end.push_back(15);
    end.push_back(10);
    
    int n=start.size();
    int m=end.size();
    for(int i=0;i<n;i++){
        cout<<start[i]<<" ";
    }
    cout<<endl;
    int count;
    bool flag=false;

    for(int i=0;i<n;i++){
        if(end[i]<start[i+1]){
                flag=false;
                break;
            }
            else if(end[i]>start[i+1]){
                count++;
                flag=true;
            }
    }
    return count;
}