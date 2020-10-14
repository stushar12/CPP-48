#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int p;
    cin>>p;
    while(p--)
    {
        int n;
        cin>>n;
        int arrival[n];
        int dept[n];
        int total[n+n];
        vector<int>a;
        vector<int>d;
        for(int i=0;i<n;i++)
        {
            cin>>arrival[i];
            a.push_back(arrival[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>dept[i];
            d.push_back(dept[i]);
        }
        sort(arrival,arrival+n);
        sort(dept,dept+n);
         int i=0,j=0,k=0;
         int guests_in = 0, max_guests = 0, time = arrival[0];
        while (i < n && j < n)
{
	if (arrival[i] <= dept[j])
	{
		guests_in++;

		// Update max_guests if needed
		if (guests_in > max_guests)
		{
			max_guests = guests_in;
			time = arrival[i];
		}
		i++; //increment index of arrival array
	}
	else // If event is exit, decrement count
	{ // of guests.
		guests_in--;
		j++;
	}
}
        
        cout<<max_guests<<" "<<time<<endl;
    }
}