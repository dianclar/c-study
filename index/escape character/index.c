#include <stdio.h>

int main() {
    printf("=== C语言常见转义字符演示 ===\n\n");

    // 1. \n : 换行 (Newline)
    printf("1. 换行符 (\\n):\n");
    printf("这是第一行\n这是第二行\n\n");

    // 2. \t : 水平制表符 (Horizontal Tab)
    printf("2. 制表符 (\\t):\n");
    printf("姓名\t年龄\t城市\n");
    printf("张三\t18\t广州\n\n");

    // 3. \\ : 反斜杠字符 (Backslash)
    printf("3. 反斜杠 (\\\\):\n");
    printf("文件路径: C:\\Users\\Admin\\Desktop\n\n");

    // 4. \" : 双引号字符 (Double Quote)
    printf("4. 双引号 (\\\"):\n");
    printf("他说: \"你好，世界！\"\n\n");

    // 5. \' : 单引号字符 (Single Quote)
    printf("5. 单引号 (\\'):\n");
    printf("字符常量: \'A\'\n\n");

    // 6. \r : 回车符 (Carriage Return)
    // 效果：光标回到当前行的开头，后面的内容会覆盖前面的内容
    printf("6. 回车符 (\\r):\n");
    printf("Hello\rWorld\n"); // 输出结果会是: World\n\n");

    // 7. \b : 退格符 (Backspace)
    // 效果：光标向前退一格，后面的内容会覆盖前一个字符
    printf("7. 退格符 (\\b):\n");
    printf("abcde\b\bXY\n"); // 输出结果会是: abcXY\n\n");

    // 8. \a : 响铃/警报 (Alert/Bell)
    // 效果：电脑可能会发出一声“滴”的提示音
    printf("8. 警报符 (\\a):\n");
    printf("注意！\a\n\n");

    // 9. \0 : 空字符 (Null Character)
    // 效果：字符串的结束标志，后面的内容不会被打印
    printf("9. 空字符 (\\0):\n");
    printf("Hello\0World\n"); // 只会输出 Hello\n\n");

    return 0;
}