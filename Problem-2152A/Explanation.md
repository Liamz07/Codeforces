# Chứng minh quy luật bài Increase or Smash
## Ý tưởng

Gọi `k` là số lượng **giá trị khác nhau** trong mảng đích.

Ta sẽ chứng minh số thao tác nhỏ nhất là: `2k - 1`.

---
## Bước 1. Chứng minh số lần Increase tối thiểu

Mỗi lần Increase sẽ cộng cùng một số vào tất cả phần tử chưa bị Smash.

Do đó sau **mỗi lần Increase**, chỉ có thể tạo ra **một mức giá trị mới**.

Ví dụ

```text
0
↓ +2
2
↓ +3
5
↓ +4
9
```

Sau ba lần Increase ta sinh được ba mức giá trị

```
2
5
9
```

Nếu mảng cuối cùng có `k` giá trị khác nhau thì muốn sinh ra đủ `k` mức giá trị đó, bắt buộc phải có ít nhất `k` lần Increase.

Ngược lại, ta luôn có thể thực hiện đúng `k` lần Increase bằng cách cộng lần lượt các hiệu giữa hai mức liên tiếp.

Ví dụ

```
1 3 5
```

Ta thực hiện

```
+1
+2
+2
```

Từ đó suy ra: `Increase = k`.

---

## Bước 2. Chứng minh số lần Smash tối thiểu

Giả sử các giá trị khác nhau sau khi sắp xếp là

```
v1 < v2 < ... < vk
```

Sau khi tạo xong mức `v1`, ta vẫn còn phải Increase để tạo `v2`.

Nếu không Smash các phần tử đã đạt `v1` thì chúng sẽ tiếp tục tăng và không còn giữ được giá trị `v1`.

Do đó trước khi Increase tiếp, ta **bắt buộc** phải Smash toàn bộ các phần tử có giá trị `v1`.

Tương tự

- Sau khi tạo xong `v2`, phải Smash toàn bộ các phần tử có giá trị `v2`.
- ...
- Sau khi tạo xong `v(k−1)`, cũng phải Smash.

Riêng các phần tử có giá trị lớn nhất `vk` thì không cần Smash nữa vì không còn lần Increase nào phía sau.

Mỗi lần Smash có thể chọn **bao nhiêu phần tử cũng được**, nên mỗi mức giá trị chỉ cần đúng **một lần Smash**.

Do đó: `Smash = k - 1`.

---

## Bước 3. Kết luận

Tổng số thao tác là `k + k - 1` = `2k - 1`.

---

## Ví dụ

Cho mảng

```
1 2 2 3 3 3
```

Các giá trị khác nhau là

```
1
2
3
```

nên

```
k = 3
```

### Increase

```
+1
+1
+1
```

→ 3 lần.

### Smash

- Smash toàn bộ các phần tử có giá trị 1.
- Smash toàn bộ các phần tử có giá trị 2.

→ 2 lần.

Tổng số thao tác

```
3 + 2 = 5
```

đúng với công thức `2*3 - 1 = 5`.

---

## Quy luật cần nhớ

- Mỗi **giá trị khác nhau** tương ứng với **một lần Increase**.
- Mỗi **giá trị khác nhau**, trừ giá trị lớn nhất, cần **một lần Smash**.

Nếu gọi `k` là số lượng giá trị khác nhau trong mảng thì đáp án là

```cpp
answer = 2 * k - 1;
```

Trong C++, có thể đếm `k` rất đơn giản bằng `set`:

```cpp
set<int> s;

for (int i = 0; i < n; i++) {
    cin >> a[i];
    s.insert(a[i]);
}

cout << 2 * (int)s.size() - 1 << '\n';
```
