char* resize(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
    return nullptr;
  char* out_str = new char[new_size];
  for (unsigned i = 0; i < size; i++)
  {
    out_str[i] = str[i];
  }
  delete[] str;
  return out_str;
}
