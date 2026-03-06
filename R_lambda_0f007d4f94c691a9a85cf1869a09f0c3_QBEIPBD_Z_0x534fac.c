// 函数名称: ??R<lambda_0f007d4f94c691a9a85cf1869a09f0c3>@@QBEIPBD@Z
// 虚拟地址: 0x534fac
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??R<lambda_0f007d4f94c691a9a85cf1869a09f0c3>@@QBEIPBD@Z(char* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 1
    
    if (arg1[1] == 0)
        return 2
    
    int32_t eax_1
    eax_1.b = arg1[2] != 0
    return eax_1 + 3
}
