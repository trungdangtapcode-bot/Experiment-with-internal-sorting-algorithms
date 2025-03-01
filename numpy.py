import pandas as pd
import numpy as np
import time

#file_path = 'Test1.txt'
#file_path = 'Test2.txt'
#file_path = 'Test3.txt'
#file_path = 'Test4.txt'
#file_path = 'Test5.txt'
#file_path = 'Test6.txt'
#file_path = 'Test7.txt'
#file_path = 'Test8.txt'
#file_path = 'Test9.txt'
#file_path = 'Test10.txt'


start_time = time.time()

df_from_file = pd.read_csv(file_path, header=None, sep=r'\s+', on_bad_lines='skip')

arr_from_file = df_from_file.to_numpy()

sorted_arr = np.sort(arr_from_file, axis=None)  

end_time = time.time()

execution_time = end_time - start_time
print(f"Thời gian chạy chương trình: {execution_time} giây")
