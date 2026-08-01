# Chứng minh công thức tổng số trận

Gọi:

- `W` là số trận diễn ra ở nhánh thắng (Winners' Group).
- `L` là số trận diễn ra ở nhánh thua (Losers' Group).

Tổng số trận của giải đấu là `W + L + 1`.

Trong đó `+1` là trận chung kết giữa đội vô địch nhánh thắng và đội vô địch nhánh thua.

---

## Bước 1: Số trận ở nhánh thắng

Ban đầu có `n` đội ở nhánh thắng.

Mỗi trận ở nhánh thắng:

- 1 đội thắng và ở lại nhánh thắng.
- 1 đội thua và rơi xuống nhánh thua ở vòng kế tiếp.

Như vậy, **mỗi trận làm giảm đúng 1 đội trong nhánh thắng**.

Để từ `n` đội còn lại đúng `1` đội ở nhánh thắng thì cần giảm `n - 1` đội.

Suy ra: `W = n - 1`.

---

## Bước 2: Số trận ở nhánh thua

Trước trận chung kết, nhánh thua chỉ còn đúng `1` đội.

Do đó đã có `n - 2` đội bị loại khỏi giải.

Mỗi trận ở nhánh thua loại đúng **1 đội**, nên `L = n - 2`.

---

## Bước 3: Trận chung kết

Sau khi hai nhánh đều chỉ còn một đội, hai đội này thi đấu một trận để xác định nhà vô địch.

Do đó có thêm `1` trận.

---

## Kết luận

Tổng số trận là `(n - 1) + (n - 2) + 1 = 2n - 2`.

Hay `2n - 2` là tổng số trận của giải đấu.

---

## Tại sao bye không ảnh hưởng?

Nếu một nhánh có số đội lẻ thì sẽ có một đội được **bye** (không phải thi đấu).

Đội được bye:

- không thắng,
- không thua,
- không rời khỏi nhánh hiện tại.

Vì vậy bye **không làm thay đổi**:

- số đội phải rời khỏi nhánh thắng (`n - 1` đội),
- số đội phải bị loại (`n - 2` đội).

Bye chỉ làm thay đổi số trận ở **một vòng cụ thể**, nhưng **không làm thay đổi tổng số trận của cả giải**.

Do đó công thức cuối cùng vẫn là `2n - 2`.
