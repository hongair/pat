#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
struct Node {
	int ads, data, next;
}node[100000];
int main() {
	int n, k, str, start;
	map<int, Node> m;
	cin >> start >> n >> k;
	for (int i = 0; i < n; i++) {
		scanf("%d", &str);         //����������
		scanf("%d %d", &m[str].data, &m[str].next);
	}
	for (int i = 0; i < n; i++) {
		node[i] = { start,m[start].data ,0 };    //ͨ��mapֱ������start������˳��ת��node��������
		start = m[start].next;
		if (start == -1)     //��start����ֵΪ-1��ʱ������ͽ����ˣ�����n��ֵ�����Ե�6
			n = i + 1;
		if ((i + 1) % k == 0)
			reverse(node + i + 1 - k, node + i + 1);   //��ת
	}
	for (int i = 0; i < n; i++) {   //���
		printf("%05d %d ", node[i].ads, node[i].data);
		if (i != n - 1)
			printf("%05d\n", node[i + 1].ads);
		else
			printf("-1");  //���һ�����nextΪ-1
	}
	return 0;
}
