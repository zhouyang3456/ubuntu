import cv2
img = cv2.imread('/home/zhou/Pictures/R-C.jpg', 1)
cv2.imshow("Nagasawa Masami", img)  
cv2.waitKey(0)
cv2.destroyAllWindows()  
#python的cv2.imshow第一个参数（即窗口名）为中文会乱码，至今未找到有效解决方案