# LED Control Project

## Mô Tả Dự Án
Dự án này cho phép điều khiển hai LED bằng một nút bấm sử dụng thư viện OneButton. 

### Tính Năng
- **Single Click**: Bật/tắt LED hiện tại (LED1 hoặc LED2).
- **Double Click**: Chuyển đổi giữa LED1 và LED2.
- **Long Press**: Nhấp nháy LED đang được điều khiển với tần suất 200ms.

### Phần Cứng
- LED1: Kết nối với GPIO D2
- LED2: Kết nối với GPIO D3
- Nút bấm: Kết nối với GPIO D4

### Hướng Dẫn Sử Dụng
1. Nhấn một lần để bật/tắt LED đang điều khiển.
2. Nhấn đúp để chuyển đổi giữa hai LED.
3. Giữ nút để nhấp nháy LED đang điều khiển.
