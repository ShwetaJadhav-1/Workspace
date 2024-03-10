import multiprocessing

def main():
    print("Number of cores are : ",multiprocessing.cpu_count()) # 8 : Logical count

if __name__ == "__main__":
    main()