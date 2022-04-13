struct name
{
  int a,b;
};
bool cp(name x, name y)
{
  if (x.b!=y.b)
      return x.b<y.b;
}
int main()
{
  name p[i];
  sort(p+1,p+n+1,cp);
}
