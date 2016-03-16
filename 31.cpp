#include <iostream>
using std::cout;
using std::endl;

//函数: 查找子串sub在str中出现的次数 
int fun(const std::string& str, const std::string& sub)
{
int num = 0;
for (size_t i=0; (i=str.find(sub,i)) != std::string::npos; num++, i++);
return num;
}


void main()
{
std::string str("Many of my classmates have a computer, I have one too. My father bought it for me as a present when my first year in middle school. He said I can study English with computer. Most of the time, I use computer to search study materials on the internet. I also have some foreign friends on the internet, we can talk in English. Sometimes I play video game with computer after I finish my homework. My computer helps me a lot, it is a good friend to me.");
std::string sub("computer");
cout<<fun(str,sub)<<endl;

}
