#include<stdio.h>
#include<stdlib.h>
typedef struct RouteNode
{
    int ip[4];
    int subnetMask[4];
    int port;
    struct RouteNode * next;
}RouterTablelist;
void RouterTablearithmetic();
void inputRouterTable(RouterTablelist *&rt1);
void addRouterNode(RouterTablelist *rt1,int ip[],int subnetMask[],int port);
void displayRouterTable(RouterTablelist *rt1);
int findport(RouterTablelist *rt1,int dist_ip[]);
void RouterTableArithmetic()
{
    int dist_ip[4]={};
    
}

