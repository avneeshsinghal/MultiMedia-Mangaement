#include<graphics.h>
#include<string.h>
#include<alloc.h>
#include<conio.h>
#include<stdio.h>
typedef struct song
{
  char s_name[40];
  int length,nop;
  struct song *next;
  struct song *next1;
}s;
typedef struct details
{
  char name[10];
  s *start;
  s *end;
  struct details *down;
}d;
typedef struct playlist
{
  char q;
  d *begin;
  d *final;
}pl;
typedef struct artist
{
  char artist1[10];
  char artist2[10];
  s *start1;
  s *end1;
  struct artist *under;
}art;
typedef struct genre
{
  char gen[10];
  d *start3;
  d *end3;
  art *start2;
  art *end2;
  struct genre *left;
}gr;
typedef struct mn
{
  char c;
  gr *beg;
  gr *last;
}m;
typedef struct forfile
{
  char sname[10];
  char na[10];
  char ar[10];
  char ar1[10];
  char ge[10];
  int len,n;
}ff;
m *top;
gr *temp,*temp1;
art *temp3,*temp4;
d *temp5,*temp6;
s *temp7,*temp8;
pl *top1;
void mainscreen()
{
  int gd=DETECT,gm,d,i;
  int x,r=50;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  d=getmaxy()/2;
  setcolor(12);
  for(i=d;i>150;i--)
    circle(getmaxx()/2,d,i);
  setcolor(8);
  for(;i>80;i--)
    circle(getmaxx()/2,d,i);
  setcolor(11);
  for(;i>0;i--)
    circle(getmaxx()/2,d,i);
  setcolor(4);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  outtextxy(getmaxx()/10,getmaxy()/3,"The Music Station");
  setcolor(0);
  circle(getmaxx()/2,getmaxy()/2,r);
  for(x=1;x!=600&&!kbhit();x++)
    {
      int n=95,t=10;
      if(kbhit!=0)
	{
	  setcolor(10);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r+200);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r+200);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r+200);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r+200);
	  delay(25);
	  setcolor(0);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,1+x,t+x,r+200);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,2*n+1+x,2*n+t+x,r+200);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,3*n+1+x,3*n+t+x,r+200);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r+50);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r+150);
	  arc(getmaxx()/2,getmaxy()/2,4*n+1+x,4*n+t+x,r+200);
	}
    }
}
void cre_mn()
{
  top=(m *)malloc(sizeof(m));
  top->c='S';
  top->beg=NULL;
  top->last=NULL;
  printf("HEADER NODE CREATED");
}
void cre_gr(char *a)
{
  temp=(gr *)malloc(sizeof(gr));
  strcpy(temp->gen,a);
  temp->start2=NULL;
  temp->end2=NULL;
  temp->left=NULL;
  temp->start3=NULL;
  temp->start3=NULL;
  if(top->beg==NULL)
    {
      top->beg=temp;
      top->last=temp;
    }
  else
    {
      top->last->left=temp;
      top->last=temp;
    }
  if(temp!=NULL)
    printf("GENRE NODE CREATED\n");
}
void cre_art(char *a,char *b,char *c)
{
  for(temp4=top->beg->start2;temp4!=NULL;temp4=temp4->under)
    if(strcmpi(b,temp4->artist1)==0&&strcmpi(c,temp4->artist2)==0)
      goto y;
  temp3=(art *)malloc(sizeof(art));
  strcpy(temp3->artist1,b);
  strcpy(temp3->artist2,c);
  temp3->start1=NULL;
  temp3->end1=NULL;
  temp3->under=NULL;
  for(temp=top->beg;temp!=NULL;temp=temp->left)
     {
       if(strcmpi(a,temp->gen)==0)
	 {
	   if(temp->start2==NULL)
	     {
	       temp->start2=temp3;
	       temp->end2=temp3;
	     }
	   else
	     {
	       temp->end2->under=temp3;
	       temp->end2=temp3;
	     }
	   printf("CREATED\n");
	   break;
	 }
     }
  y:
}
void cre_d(char *a,char *e)
{
  for(temp6=top->beg->start3;temp6!=NULL;temp6=temp6->down)
     if(strcmpi(e,temp6->name)==0)
       goto x;
  temp5=(d *)malloc(sizeof(d));
  strcpy(temp5->name,e);
  temp5->start=NULL;
  temp5->end=NULL;
  temp5->down=NULL;
  for(temp=top->beg;temp!=NULL;temp=temp->left)
     {
       if(strcmpi(a,temp->gen)==0)
	 {
	   if(temp->start3==NULL)
	     {
	       temp->start3=temp5;
	       temp->end3=temp5;
	     }
	   else
	     {
	       temp->end3->down=temp5;
	       temp->end3=temp5;
	     }
	   printf("CREATED1\n");
	   break;
	 }
     }
  x:
}
void cre_pl()
{
  top1=(pl *)malloc(sizeof(pl));
  top1->q='P';
  top1->begin=NULL;
  top1->final=NULL;
}
/*void cre_pl2()
{
  char y[10],z[10];
  printf("ENTER THE NAME OF THE SONG TO BE ADDED TO THE PLAYLIST\n");
  gets(y);
  printf("ENTER THE NAME OF THE PLAYLIST TO WHICH SONG NEED TO BE ADDED\n");
  gets(z);
  for(temp6=top1->begin;temp6!=NULL;temp6=temp6->down)
    if(strcmpi(temp6->name,z)==0)
      break;
  if(temp6==NULL)
    {
      temp6=(d *)malloc(sizeof(d));
      strcpy(temp6->name,z);
      temp6->start=NULL;
      temp6->end=NULL;
      if(top1->begin==NULL)
	{
	  top1->begin=temp6;
	  top1->final=temp6;
	}
      else
	{
	  top1->final->down=temp6;
	  top1->final=temp6;
	}
    }
  temp8=(s *)malloc(sizeof(s));
  for(temp=top->beg;temp!=NULL;temp=temp->left)
    for(temp3=temp->start2;temp3!=NULL;temp3=temp3->under)
      for(temp5=temp3->start1;temp5!=NULL;temp5=temp5->down)
	for(temp7=temp5->start;temp7!=NULL;temp7=temp7->next)
	  if(strcmpi(y,temp7->s_name)==0)
	    {
	      temp7->nop++;
	      temp8=temp7;
	      if(temp6->start==NULL)
		{
		  temp6->start=temp8;
		  temp6->end=temp8;
		}
	      else
		{
		  temp6->end->next=temp8;
		  temp6->end=temp8;
		}
	    }
}*/
void cre_sn(ff *g,int l)
{
  int i=0,j=0,k=0;
  if(l<0)
    return;
  for(temp8=top->beg->start3->start;temp8!=NULL&&k==0;temp8=temp8->next)
    if(strcmpi(g->sname,temp8->s_name)==0)
       ++k;
  for(temp8=top->beg->start2->start1;temp8!=NULL&&j==0;temp8=temp8->next1)
    if(strcmpi(g->sname,temp8->s_name)==0)
       ++j;
  temp7=(s *)malloc(sizeof(s));
  strcpy(temp7->s_name,g->sname);
  temp7->length=g->len;
  temp7->nop=g->n;
  temp7->next=NULL;
  temp7->next1=NULL;
  for(temp=top->beg;temp!=NULL&&i==0;temp=temp->left)
     {
       if(strcmpi(g->ge,temp->gen)==0)
	 {
	   for(temp3=temp->start2;temp3!=NULL&&j==0;temp3=temp3->under)
	     if(strcmpi(g->ar,temp3->artist1)==0&&strcmpi(g->ar1,temp3->artist2)==0)
	       {
		 if(temp3->start1==NULL)
		   {
		     temp3->start1=temp7;
		     temp3->end1=temp7;
		   }
		 else
		   {
		     temp3->end1->next1=temp7;
		     temp3->end1=temp7;
		   }
		 ++j;
	       }
	   for(temp5=temp->start3;temp5!=NULL&&k==0;temp5=temp5->down)
	     if(strcmpi(g->na,temp5->name)==0)
	       {
		 if(temp5->start==NULL)
		   {
		     temp5->start=temp7;
		     temp5->end=temp7;
		   }
		 else
		   {
		     temp5->end->next=temp7;
		     temp5->end=temp7;
		   }
		 printf("SONG ADDED\n");
		 ++k;
	       }
	   ++i;
	 }
     }
  if(temp==NULL&&i==0)
    {
      cre_gr(g->ge);
      cre_art(g->ge,g->ar,g->ar1);
      cre_d(g->ge,g->na);
      cre_sn(g,--l);
    }
  else
    {
      if(temp3==NULL&&j==0)
	{
	  cre_art(g->ge,g->ar,g->ar1);
	}
      if(temp5==NULL&&k==0)
	{
	  cre_d(g->ge,g->na);
	}
      cre_sn(g,--l);
    }
}
void disp()
{
  for(temp=top->beg;temp!=NULL;temp=temp->left)
    {
      printf("GENRE-%s\n",temp->gen);
      for(temp5=temp->start3;temp5!=NULL;temp5=temp5->down)
	 {
	   printf("MOVIE/ALBUM\t%s\n",temp5->name);
	   printf("SONGNAME\tLENGTH\n");
	   for(temp7=temp5->start;temp7!=NULL;temp7=temp7->next)
	      printf("%s\t\t%d\n",temp7->s_name,temp7->length);
	 }
    }
}
void del_s()
{
  char c[10];
  printf("ENTER SONG NAME TO BE DELETED");
  fflush(stdin);
  gets(c);
  for(temp=top->beg,temp1=top->beg;temp!=NULL;temp=temp->left)
    {
      for(temp3=temp4=temp->start2;temp3!=NULL;temp3=temp3->under)
	{
	  for(temp7=temp3->start1,temp8=temp3->start1;temp7!=NULL;temp7=temp7->next1)
	    {
	      if(strcmpi(c,temp7->s_name)==0)
		{
		  if(temp7->next1==NULL)
		    temp3->start1=NULL;
		  else
		    temp8->next1=temp7->next1;
		}
	      temp8=temp7;
	    }
	  if(temp3->start1==NULL)
	    {
	      if(temp3->under==NULL)
		temp->start2=NULL;
	      else
		temp4->under=temp3->under;
	    }
	  temp4=temp3;
	}
      for(temp5=temp6=temp->start3;temp5!=NULL;temp5=temp5->down)
	{
	  for(temp7=temp8=temp5->start;temp7!=NULL;temp7=temp7->next)
	    {
	      if(strcmpi(c,temp7->s_name)==0)
		{
		  if(temp7->next==NULL)
		    temp5->start=NULL;
		  else
		    temp8->next=temp7->next;
		}
	      temp8=temp7;
	    }
	  if(temp5->start==NULL)
	    {
	      if(temp5->down==NULL)
		temp->start3=NULL;
	      else
		temp6->down=temp5->down;
	    }
	  temp6=temp5;
	}
      if(temp->start3==NULL&&temp->start2==NULL)
	{
	  if(temp->left==NULL)
	    top->beg=temp->left;
	  else
	    temp1->left=temp->left;
	}
      temp1=temp;
    }
}
ff* entry()
{
  ff *f;
  printf("ENTER THE GENRE OF THE SONG");
  fflush(stdin);
  gets(f->ge);
  printf("ENTER THE ARTISTS NAME");
  fflush(stdin);
  gets(f->ar);
  fflush(stdin);
  gets(f->ar1);
  printf("ENTER THE MOVIE\ALBUM NAME");
  fflush(stdin);
  gets(f->na);
  printf("ENTER THE SONG NAME AND LENGTH");
  fflush(stdin);
  gets(f->sname);
  fflush(stdin);
  scanf("%d",&f->len);
  f->n=0;
  return f;
}
void write()
{
  FILE *fp;
  ff f;
  fp=fopen("SONGS.bin","w");
  for(temp=top->beg;temp!=NULL;temp=temp->left)
  for(temp5=temp->start3;temp5!=NULL;temp5=temp5->down)
  for(temp7=temp5->start;temp7!=NULL;temp7=temp7->next)
    {
      strcpy(f.ge,temp->gen);
      for(temp3=temp->start2;temp3!=NULL;temp3=temp3->under)
	{
	  for(temp8=temp3->start1;temp8!=NULL;temp8=temp8->next1)
	    if(strcmpi(temp8->s_name,temp7->s_name)==0)
	      {
		strcpy(f.ar,temp3->artist1);
		strcpy(f.ar1,temp3->artist2);
	      }
	}
       strcpy(f.na,temp5->name);
       strcpy(f.sname,temp7->s_name);
       f.len=temp7->length;
       f.n=temp7->nop;
       fwrite(&f,sizeof(f),1,fp);
     }
  fclose(fp);
}
void read()
{
  FILE *fp;
  ff f;
  fp=fopen("SONGS.bin","r");
  while(!feof(fp))
    {
      fread(&f,sizeof(f),1,fp);
      cre_sn(&f,1);
    }
}
void main()
{
  int i;
  ff *w;
  clrscr();
  mainscreen();
  cleardevice();
  cre_mn();
  read();
  printf("1.ENTRY\n2.DELETION\n3.DISPLAY\n4.EXIT\n");
  scanf("%d",&i);
  while(i)
    {
      switch(i)
	{
	  case 1:w=entry();
		 cre_sn(w,1);
		 break;
	  case 2:del_s();
		 break;
	  case 3:disp();
		 break;
	  case 4:write();
		 exit();
	}
      printf("1.ENTRY\n2.DELETION\n3.DISPLAY\n4.EXIT\n");
      scanf("%d",&i);
    }
  getch();
}