// //semi completed
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,k,l,c,d,p,count1,count2,count3,tot_nl,tot_np,slc,tot_tost,tot_drk,tot_slc,tost,nl,np;
//     cin>>n>>k>>l>>c>>d>>p>>nl>>np;

//     tot_drk = k*l;
//     tot_slc = c*d;
//     tost = nl+np;
//     count1 = count2 = count3 = tot_nl = tot_np = slc = tot_tost = 0;
//     while(tot_nl < tot_drk)
//     {
//         count1++;
//         tot_nl =tot_nl+nl;
//          if(tot_nl > tot_drk)
//         {
//             tot_nl = tot_nl-nl;
//             count1--;
//             break;
//         }
//     }
//     // cout<<"tot_np : "<<tot_np<<"    p : "<<p<<"     np : "<<np<<endl;
//     while(tot_np < p)
//     {
//         tot_np = tot_np+np;
//         count2++;
//         if(tot_np > p)
//         {
//             tot_np = tot_np-np;
//             count2--;
//             break;
//         }
//     }
//     // cout<<"after while tot_np : "<<tot_np<<endl;
//     while(slc < tot_slc)
//     {
//         count3++;
//         slc++;
//          if(slc > tot_slc)
//         {
//             slc--;
//             count2--;
//             break;
//         }
//     }
//     // cout<<"count1 : "<<count1<<"   count2 : "<<count2<<"    count3 : "<<count3<<"    n : "<<n<<endl;

//     if(count1 > count2)
//     {
//         if(count2 < count3)
//         tot_tost = count2;
//         else
//         tot_tost = count3;
//     }

//     else if(count1 < count2)
//     {
//         if(count3 < count1)
//         tot_tost = count3;
//         else
//         tot_tost = count1;
//     }
//     else
//     tot_tost = 0;

    
//     tot_tost = tot_tost/n;
//     cout<<tot_tost<<endl;
// }
// //2 3 3 5 5 10 1 3
