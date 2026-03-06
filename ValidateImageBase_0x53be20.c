// 函数名称: __ValidateImageBase
// 虚拟地址: 0x53be20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__ValidateImageBase(int16_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0x5a4d)
    if (*arg1 == 0x5a4d)
        void* eax_2 = *(arg1 + 0x3c) + arg1
        
        if (*eax_2 == 0x4550 && *(eax_2 + 0x18) == 0x10b)
            return 1
    
    return 0
}
