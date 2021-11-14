int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//&arr-取的是整个数组的地址
	printf("%p\n", &arr+1);

	//int sz = sizeof(arr) / sizeof(arr[0]);
	//有两个例外
	//1.sizeof（数组名）--数组名表示整个数组，---计算的是整个数组的大小，单位为字节
	//2.&数组名，数组名代表整个数组，&数组名-取出的是整个数组的地址
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//数组名就是首元素地址
	//printf("%d\n", *arr);//解引用--打印首元素
	return 0;
}