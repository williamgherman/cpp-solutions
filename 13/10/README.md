### Exercie 13.10

What happens when a `StrBlob` object is destroyed? What about a `StrBlobPtr`?

### Solution

When a `StrBlob` is destroyed, each element is deleted, but not the underlying
`vector`. Similarly, when a `StrBlobPtr` is destroyed, each element is
destroyed, but the pointers are not `delete`d.
