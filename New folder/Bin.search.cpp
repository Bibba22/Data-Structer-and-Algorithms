#include <iostream>

using namespace std;

int main()
{
	int count, i, arr[30], num, first, last, middle;
	cout<<"Berapa banyak elemen yang diiginkan ? :" ;
	     cin>>count;
	
	for (i=0; i<count; i++)
	{
		cout<<"Masukan angka"<<(i+1)<<": ";
		        cin>>arr[i];
	}
	cout<<"Masukan angka yang ingin anda cari:";
	     cin>>num;
	first =0;
	last= count-1;
	middle=(first+last)/2;
	while (first<= last)
	{
		if(arr[middle] < num)
		{
		 first = middle +1;
			
		}
		else if(arr[middle] == num)
		{
		 cout<<num<<"ditemukan dalam array pada lokasi ke " <<middle+1<<"/n";
		      break;
		    }
		    else {
			      last = middle -1;	  
	    	}
		    middle = (first + last)/2;
	    }
	    if(first > last)
	{
		cout<<num<<"tidak ditemukan dalam array";
	}
	return 0;
	
}
