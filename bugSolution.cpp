std::vector<int> vec = {1, 2, 3, 4, 5};

// Solution 1: Using a reverse iterator
for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
  vec.erase((it).base() -1);
}

// Solution 2: Using a while loop and iterator
for (auto it = vec.begin(); it != vec.end(); ) {
  if (/*some condition*/){
    it = vec.erase(it);
  } else {
    ++it;
  }
}

//Solution 3: Create a new vector
std::vector<int> newVec;
for (int x : vec){
  if (/*some condition*/){
    newVec.push_back(x);
  }
}
vec = newVec;

//After any of these solutions, vec will be empty as intended.