# POSIPROD
## Cbo một dãy số nguyên A1, A2, . . . , AN . Bạn có thể thực hiện phép biến đổi sau với số lần tùy ý (có thể không thực hiện lần nào):
## • Chọn một vị trí i từ 1 đến N, và đảo dấu Ai (tức là thay thể Ai bởi −Ai) Hãy cho biết số phép biến đổi ít nhất cần thực hiện, để dãy thu được thỏa mãn tính chất sau:
## • Tích của hai phần tử bất kì trong dãy đều là số nguyên dương (nói cách khác, với mỗi cặp (i, j) thỏa 1 ≤ i < j ≤ N, ta có Ai ∗ Aj > 0).
### Dữ liệu
#### • Dòng đầu tiên gồm số nguyên N (2 ≤ N ≤ 100) - số phần tử của dãy A.
#### • Dòng thứ hai gồm N số nguyên A1, A2, . . . , AN (−1000 ≤ Ai ≤ 1000) - mô tả dãy A.
### Kết quả
#### • In ra một số nguyên duy nhất là số phép biến đổi ít nhất cần thực hiện. Trong trường hợp không có cách biến đổi, hãy in ra -1.
### Ví dụ
|Sample Input|Sample Output|
|------------|-------------|
|5           |2            |
|10 -20 -30 40 50|         |
|4           |0            |
|9 7 2 3     |             |
|3           |-1           |
|0 0 0       |             |
