### Exercise 15.31

Given that `s1`, `s2`, `s3` and `s4` are all `string`s, determine what objects
are created in the following expressions:

(a) `Query(s1) | Query(s2) & ~ Query(s3);`  
(b) `Query(s1) | (Query(s2) & ~ Query(s3));`  
(c) `(Query(s1) & (Query(s2)) | (Query(s3) & Query(s4)));`

### Solution

(a) and (b) will create three `WordQuery` objects and one `NotQuery`, `AndQuery`
and `OrQuery` object. (c) will create four `WordQuery` objects, two `AndQuery`
objects and one `OrQuery` object.
