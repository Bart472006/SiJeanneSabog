/*
//Create a C++ program that allows the user to enter 10 integers and display these integers from the last entered to the first entered integer using array.

#include<iostream>
using namespace std;
int main()
{
int a[10];
int ctr;
for(ctr=0;ctr<=9;ctr++)
{
    cout<<"Enter any Number= ";
    cin>>a[ctr];
}
cout<<"OUTPUT IN REVERSE ORDER"<<endl;
for(ctr=9;ctr>=0;ctr--)
    cout<<a[ctr]<<endl;
return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main()
{
    int bt[10];
    int rem[10];
    int wt[10];
    int tat[10];
    int n;
    int tq;
    int i;
    int time = 0;
    int count = 0;
    float wtavg = 0;
    float tatavg = 0;

    cout << "Enter number of processes: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cout << "Enter Burst Time for P" << i << ": ";
        cin >> bt[i];
        rem[i] = bt[i];
        wt[i] = 0;
    }
    cout << "Enter Time Quantum: ";
    cin >> tq;
    for(i = 0; count < n; i++)
    {
        if(i == n)
            i = 0;

        if(rem[i] > 0)
        {
            if(rem[i] > tq)
            {
                rem[i] = rem[i] - tq;
                time = time + tq;
            }
            else
            {
                time = time + rem[i];
                wt[i] = time - bt[i];
                rem[i] = 0;
                count++;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }
    cout << "\nPROCESS\tBT\tWT\tTAT";
    for(i = 0; i < n; i++)
    {
        cout << "\nP" << i << "\t" << bt[i]
             << "\t" << wt[i]
             << "\t" << tat[i];
    }
    cout << "\n\nAverage Waiting Time = " << wtavg / n;
    cout << "\nAverage Turnaround Time = " << tatavg / n;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() 
{
    int bt[10], wt[10], tat[10], pr[10], at[10];
    int finished[10] = {0};
    int n, i, j, time = 0, done;
    float wtavg = 0, tatavg = 0;

    cout << "Number of processes: ";
    cin >> n;
    for(i = 0; i < n; i++) 
    {
        cout << "Burst time for P" << i << ": ";
        cin >> bt[i];
        cout << "Arrival time for P" << i << ": ";
        cin >> at[i];
        cout << "Priority for P" << i << " (higher = more important): ";
        cin >> pr[i];
        wt[i] = 0;
        tat[i] = 0;
    }
    for(done = 0; done < n; done++) 
    {
        int highest = -1;
        // hi-prio
        for(i = 0; i < n; i++) {
            if(finished[i] == 0 && at[i] <= time) {
                if(highest == -1 || pr[i] > pr[highest]) {
                    highest = i;
                }
            }
        }
        if(highest == -1) {
            time = time + 1;
            done = done - 1;
        } else {
            wt[highest] = time - at[highest];
            time = time + bt[highest];
            tat[highest] = wt[highest] + bt[highest];
            finished[highest] = 1;
        }
    }
    for(i = 0; i < n; i++) 
    {
        wtavg += wt[i];
        tatavg += tat[i];
    }
    cout << "\nProcess\tBT\tAT\tPR\tWT\tTAT\n";
    for(i = 0; i < n; i++) 
    {
        cout << "P" << i << "\t" << bt[i] << "\t" << at[i] << "\t" << pr[i] 
             << "\t" << wt[i] << "\t" << tat[i] << "\n";
    }
    cout << "\nAverage Waiting Time = " << wtavg / n;
    cout << "\nAverage Turnaround Time = " << tatavg / n;
    return 0;
}

