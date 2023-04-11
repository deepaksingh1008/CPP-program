#include<iostream>
#define  max 20
using namespace std;
int main()
{
    int bt[max],wt[max],tat[max],pr[max],n,i,j,temp,c[max];
    float avtat=0.0,avwt=0.0;
    cout<<"enter the number of process:";
    cin>>n;
    cout<<"enter the process"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    cout<<"enter the burst time"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>bt[i];
    }
    cout<<endl<<"enter the priority"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>pr[i];
    }
    //sorting according to priority
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(pr[j]>pr[j+1])
            {
                temp=pr[j];
                pr[j]=pr[j+1];
                pr[j+1]=temp;

                temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;

                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    cout<<endl<<"process\t priority\t burst time\t waiting time\t turnaround time"<<endl;
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]+=bt[j];
        }
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<c[i]<<"\t\t"<<pr[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
    avwt=avwt/n;
    avtat=avtat/n;
    cout<<"average waiting time = "<<avwt<<endl;
    cout<<"average turnaround time = "<<avtat<<endl;
  return  0;
}
