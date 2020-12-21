void strcats(char* to, const char* from)
{
  while (*to != '\0')
  {
    to++;
  }
  while (*from != '\0')
  {
    *to = *from;
    from++;
    to++;
  }
  *to = *from;
}
