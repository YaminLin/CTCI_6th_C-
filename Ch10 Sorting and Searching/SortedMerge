void SortedMerge(int *arr1, int size1, int *arr2, int size2)
{
	int count = size1 + size2-1;
	size1--;
	size2--;
	while(size2 >= 0)
	{
		if (size1 >= 0 && arr1[size1] > arr2[size2])
			arr1[count--] = arr1[size1--];
		else
			arr1[count--] = arr2[size2--];
	}
}
