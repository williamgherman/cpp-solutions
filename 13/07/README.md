### Exercise 13.07

What happens when we assign one `StrBlob` to another? What about `StrBlobPtr`s?

### Solution

When a `StrBlob` is copy-assigned, the `shared_ptr` will be copied and not the
`vector`, and the count will increase. This will similarly happen with the
`StrBlobPtr`: its elements will be individually copied, and not the underlying
`vector`.
