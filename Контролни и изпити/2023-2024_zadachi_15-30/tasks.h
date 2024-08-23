#pragma once
int myStrLen(const char* str)
{
	if (!str)
		return 0;
	int len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return len;
}

long findSeq(const char* arr, char S)
{
	if (!arr)
		return 0;
	int len = myStrLen(arr);

	int maxCounter = 0;
	int counter = 0;
	for (int i = 0; i <= len; i++)
	{
		if (arr[i] == S)
		{
			counter++;
		}
		else
		{
			if (counter > maxCounter)
			{
				maxCounter = counter;
			}
			counter = 0;
		}
	}
	return maxCounter;
}

bool searchWord(const char* const* grid, size_t M, size_t N, const char* word, size_t x, size_t y, int index, bool** visited) {

	if (index == strlen(word)) {
		return true;
	}

	if (x < 0 || x >= M || y < 0 || y >= N || grid[x][y] != word[index] || visited[x][y]) {
		return false;
	}

	visited[x][y] = true;

	if (searchWord(grid, M, N, word, x + 1, y, index + 1, visited) ||
		searchWord(grid, M, N, word, x - 1, y, index + 1, visited) ||
		searchWord(grid, M, N, word, x, y + 1, index + 1, visited) ||
		searchWord(grid, M, N, word, x, y - 1, index + 1, visited)) {
		return true;
	}

	visited[x][y] = false;
	return false;
}

bool findWord(const char* const* grid, size_t M, size_t N, const char* word) {
	if (!grid || !word || M == 0 || N == 0) {
		return false;
	}

	bool** visited = new bool* [M];
	for (size_t i = 0; i < M; i++) {
		visited[i] = new bool[N];
		for (size_t j = 0; j < N; j++) {
			visited[i][j] = false;
		}
	}

	for (size_t i = 0; i < M; i++) {
		for (size_t j = 0; j < N; j++) {
			if (searchWord(grid, M, N, word, i, j, 0, visited)) {

				for (size_t i = 0; i < M; i++) {
					delete[] visited[i];
				}
				delete[] visited;
				return true;
			}
		}
	}

	for (size_t i = 0; i < M; i++) {
		delete[] visited[i];
	}
	delete[] visited;
	return false;
}

int* findSets(const int arr[], size_t N) {
	if (N == 0 || N > 32) return nullptr;

	size_t totalSubsets = (1 << N) - 1;

	size_t totalElements = 0;
	for (size_t i = 1; i <= totalSubsets; ++i) {
		for (size_t j = 0; j < N; ++j) {
			if (i & (1 << j)) {
				totalElements++;
			}
		}
		totalElements++;
	}

	totalElements += 2;

	int* result = new int[totalElements];
	size_t index = 0;

	for (size_t i = 1; i <= totalSubsets; ++i) {
		for (size_t j = 0; j < N; ++j) {
			if (i & (1 << j)) {
				result[index++] = arr[j];
			}
		}
		result[index++] = 0;
	}

	result[index++] = 0;
	result[index] = 0;

	return result;
}
