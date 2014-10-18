#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>

using namespace std;

const int MAX_P=20;
const int MAXA=10; //����A����Դ������
const int MAXB=5;
const int MAXC=7;

typedef struct node{
int a;
int b;
int c;
int remain_a;
int remain_b;
int remain_c;
}bank;

typedef struct node1{
char name[20];
int a;
int b;
int c;
int need_a;
int need_b;
int need_c;
}process;

bank banker;
process processes[MAX_P];
int quantity;

//��ʼ������
void initial()
{
int i;

banker.a=MAXA;
banker.b=MAXB;
banker.c=MAXC;
banker.remain_a=MAXA;
banker.remain_b=MAXB;
banker.remain_c=MAXC;

for(i=0;i<MAX_P;i++){
strcpy(processes[i].name,"");
processes[i].a=0;
processes[i].b=0;
processes[i].c=0;
processes[i].need_a=0;
processes[i].need_b=0;
processes[i].need_c=0;
}

}

//�¼���ҵ
void add()
{
char name[20];
int flag=0;
int t;
int need_a,need_b,need_c;
int i;

cout<<endl;
cout<<"�¼���ҵ"<<endl;
cout<<"��������������������������������������������������������"<<endl;
cout<<"�������¼���ҵ��:";
cin>>name;

for(i=0;i<quantity;i++){
if(!strcmp(processes[i].name,name)){
flag=1;
break;
}
}

if(flag){
cout<<"����,��ҵ�Ѵ���"<<endl;
}
else{
cout<<"����ҵ����A����Դ:";
cin>>need_a;
cout<<"����ҵ����B����Դ:";
cin>>need_b;
cout<<"����ҵ����C����Դ:";
cin>>need_c;

t=1;
cout<<need_a<<banker.remain_a;
if(need_a>banker.remain_a){
cout<<"����,����A����Դ�������м���ʣA����Դ"<<endl;
t=0;
}
if(need_b>banker.remain_b){
cout<<"����,����B����Դ�������м���ʣB����Դ"<<endl;
t=0;
}
if(need_c>banker.remain_c){
cout<<"����,����C����Դ�������м���ʣC����Դ"<<endl;
t=0;
}
if(t){
strcpy(processes[quantity].name,name);
processes[quantity].need_a=need_a;
processes[quantity].need_b=need_b;
processes[quantity].need_c=need_c;

quantity++;
cout<<"�¼���ҵ�ɹ�"<<endl;
}
else{
cout<<"�¼���ҵʧ��"<<endl;
}
}
}

//Ϊ��ҵ������Դ
void bid()
{
char name[20];
int i,p;
int a,b,c;
int flag;

cout<<endl<<"Ϊ��ҵ������Դ"<<endl;
cout<<"��������������������������������������������������������"<<endl;
cout<<"Ҫ������Դ����ҵ��:";
cin>>name;

p=-1;
for(i=0;i<quantity;i++){
if(!strcmp(processes[i].name,name)){
p=i;
break;
}
}
if(p!=-1){
cout<<"����ҵҪ����A����Դ����:";
cin>>a;
cout<<"����ҵҪ����B����Դ����:";
cin>>b;
cout<<"����ҵҪ����C����Դ����:";
cin>>c;

flag=1;
if((a>banker.remain_a)||(a>processes[p].need_a-processes[p].a)){
cout<<"����,������A����Դ�������м���ʣA����Դ��ý��̻�������"<<endl;
flag=0;
}
if((b>banker.remain_b)||(b>processes[p].need_b-processes[p].b)){
cout<<"����,������B����Դ�������м���ʣB����Դ��ý��̻�������"<<endl;
flag=0;
}
if((c>banker.remain_c)||(c>processes[p].need_c-processes[p].c)){
cout<<"����,������C����Դ�������м���ʣC����Դ��ý��̻�������"<<endl;
flag=0;
}
if(flag){
banker.remain_a-=a;
banker.remain_b-=b;
banker.remain_c-=c;

processes[p].a+=a;
processes[p].b+=b;
processes[p].c+=c;

cout<<"Ϊ��ҵ������Դ�ɹ�"<<endl;
}
else{
cout<<"Ϊ��ҵ������Դʧ��"<<endl;
}
}
else{
cout<<"����ҵ������"<<endl;
}
}

//������ҵ
void finished()
{
char name[20];
int i,p;

cout<<endl<<"������ҵ"<<endl;
cout<<"��������������������������������������������������������"<<endl;
cout<<"Ҫ������ҵ��:";
cin>>name;

p=-1;
for(i=0;i<quantity;i++){
if(!strcmp(processes[i].name,name)){
p=i;
break;
}
}
if(p!=-1){
banker.remain_a+=processes[p].a;
banker.remain_b+=processes[p].b;
banker.remain_c+=processes[p].c;
for(i=p;i<quantity-1;i++){
processes[i]=processes[i+1];
}
strcpy(processes[quantity-1].name,"");
processes[quantity-1].a=0;
processes[quantity-1].b=0;
processes[quantity-1].c=0;
processes[quantity-1].need_a=0;
processes[quantity-1].need_b=0;
processes[quantity-1].need_c=0;

quantity--;

cout<<"������ҵ�ɹ�"<<endl;
}
else{
cout<<"������ҵʧ��"<<endl;
}
}

//�鿴��Դ���
void view()
{
int i;

cout<<endl<<"�鿴��Դ���"<<endl;
cout<<"��������������������������������������������������������"<<endl;
cout<<"���м���ʣ��Դ(ʣ����Դ/�ܹ���Դ)"<<endl;
cout<<"A��:"<<banker.remain_a<<"/"<<banker.a;
cout<<" B��:"<<banker.remain_b<<"/"<<banker.b;
cout<<" C��:"<<banker.remain_c<<"/"<<banker.c;

cout<<endl<<endl<<"��ҵռ�����(��ռ����Դ/������Դ)"<<endl<<endl;
if(quantity>0){
for(i=0;i<quantity;i++){
cout<<"��ҵ��:"<<processes[i].name<<endl;
cout<<"A��:"<<processes[i].a<<"/"<<processes[i].need_a;
cout<<" B��:"<<processes[i].b<<"/"<<processes[i].need_b;
cout<<" C��:"<<processes[i].c<<"/"<<processes[i].need_c;
cout<<endl;
}
}
else{
cout<<"��ǰû����ҵ"<<endl;
}
}

//��ʾ��Ȩ��Ϣ����
void version()
{
cout<<endl<<endl;

cout<<" ��������������������������������������������������"<<endl;
cout<<" ��        �� �� �� �� ��         ��"<<endl;
cout<<" �ġ�����������������������������������������������"<<endl;
cout<<" ��   (c)All Right Reserved Neo       ��"<<endl;
cout<<" ��      sony006@163.com          ��"<<endl;
cout<<" ��     version 2004 build 1122      ��"<<endl;
cout<<" ��������������������������������������������������"<<endl;
cout<<endl<<endl;
}

int main(void)
{
int chioce;
int flag=1;

initial();

version();

while(flag){
cout<<"��������������������������������������������������������"<<endl;
cout<<"1.�¼���ҵ 2.Ϊ��ҵ������Դ 3.������ҵ"<<endl;
cout<<"4.�鿴��Դ��� 0.�˳�ϵͳ"<<endl;
cout<<"��ѡ��:";
cin>>chioce;

switch(chioce){
case 1:
add();
break;
case 2:
bid();
break;
case 3:
finished();
break;
case 4:
view();
break;
case 0:
flag=0;
break;
default:
cout<<"ѡ�����"<<endl<<endl;
}
}
return 0;
}