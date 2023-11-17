/*
Given a string, compute recursively (no loops) the number of lowercase 'x' chars in the string.

countX("xxhixx") → 4
countX("xhixhix") → 3
countX("hi") → 0
*/

public int countX(String str) {
  return countX(str, 0);
}

public int countX(String str, int index) {
  if (str.length() == index) {
    return 0;
  }
  if (str.charAt(index) == 'x') {
    return 1 + countX(str, index+1);
  }
  else {
    return countX(str, index+1);
  }
}
