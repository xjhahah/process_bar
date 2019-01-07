#include <iostream>
#include <unistd.h>

using namespace std;


int main()
{
  pid_t id=fork();
  if(id<0)
  {
    cout<<"fork false!"<<endl;
    return 1;
  }
  else if(id==0)
  {
    cout<<"This is child,pid is "<<getpid()<<" id is "<<id<<endl;
    sleep(3);
  }
  else     //parent
  {
    cout<<"This is parent,pid is "<<getppid()<<" id is "<< id<<endl;  //查看父进程ID用getppid()
    sleep(1);
  }
  return 0;
}
