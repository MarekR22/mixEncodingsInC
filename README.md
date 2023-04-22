Try load UTF-8 file when program uses diffren locale.

Use instaruction from:

[fopen, _wfopen | Microsoft Learn](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/fopen-wfopen?view=msvc-170#unicode-support)

> ## Unicode support
> 
> **`fopen`** supports Unicode file streams. To open a Unicode file, pass a `ccs=encoding` flag that specifies the desired encoding to **`fopen`**, as follows.
> 
> `FILE *fp = fopen("newfile.txt", "rt+, ccs=UTF-8");`
> 
> Allowed values for **`ccs`** encoding are `UNICODE`, **`UTF-8`**, and **`UTF-16LE`**.

but carash is observed.

Issue was started here:
* https://4programmers.net/Forum/C_i_C++/367879-problem_z_wczytaniem_polskich_znakow_z_pliku_tekstowego_jezyk_c?p=1906323#id1906323
