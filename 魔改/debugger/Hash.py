def Hash(s: str) -> int:
    """
    实现完美哈希函数
    :param s: 输入字符串
    :return: 哈希值
    """
    # 预定义的映射表（与C++代码中的asso_values完全一致）
    asso_values = [
        65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
        65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
        65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
        65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
        65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
        65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 33, 0,  24, 18, 17,
        0,  31, 65, 15, 33, 65, 0,  25, 24, 14, 1,  65, 0,  10, 3,  36, 4,
        23, 26, 13, 1,  65, 65, 65, 65, 65, 65
    ]
    
    # 检查输入有效性（模拟C++的DCHECK）
    if len(s) < 2:
        raise ValueError("输入字符串长度至少为2个字符")
    
    char0 = ord(s[0])
    char1 = ord(s[1]) + 1
    
    print(f"char0: {char0}, char1: {char1}")
    
    if char0 >= 129:
        raise ValueError(f"第一个字符ASCII值({char0})必须小于129")
    if char1 >= 129:
        raise ValueError(f"第二个字符ASCII值+1({char1})必须小于129")
    
    # 计算哈希值
    return len(s) + asso_values[char1] + asso_values[char0]

# 测试示例
if __name__ == "__main__":
    test_str = "nndebugger"
    hash_val = Hash(test_str)
    print(f"字符串 '{test_str}' 的哈希值: {hash_val}")