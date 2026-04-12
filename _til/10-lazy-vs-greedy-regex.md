---
cat: tip
title: always use lazy regex instead of greedy regex
---
lazy regex looks for shortest matching substring and stops at the first matched substring. greedy regex scans the whole text and returns the longest matching string. For the word `hello`, the greedy regex `h.+l` matches `hell` but the lazy regex `h.+?l` stops after matching `hel`. Generally, lazy regex has ? in them.