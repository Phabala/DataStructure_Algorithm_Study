# 이 문제를 풀기 위해서는
# 1. 트리구조를 만들 수 있어야 한다.
# 2. 누가 자식이고 누가 부모인지 판별할 수 있어야 한다.

# 2를 구분하는 방법은 tmp_circle1의 반지름이 tmp_circle1의 중심과 tmp_circle2의 중심 사이의 거리보다 크면
# tmp_circle2는 tmp_circle1의 자식이다.
# 모든 원에 대해 이렇게 하면 된다.

# 그리고 그 어떤 부모 원도 갖지 않는 원은 root_node(여백)의 자식이다.

# 구현을 한번 해보자.
# 먼저, 노드 클래스를 만들자.
# 노드는 부모, 자식, 층 수를 갖고 있다.

# 딕셔너리를 만들어서 몇층에 누가 있는지를 만들자.
# 리스트의 [0]은 부모, [1]은 자식들을 만들자.
# 아니지, 딕셔너리로 트리 구조 만들면 되지.

tree = {
    'root' : ['circle1, circle2'],
    'circle1' : ['circle3, circle4']
}
