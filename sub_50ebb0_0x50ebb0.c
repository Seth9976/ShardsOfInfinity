// 函数名称: sub_50ebb0
// 虚拟地址: 0x50ebb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_50ebb0(void* arg1)
{
    // 第一条实际指令: void* eax_1 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
    void* eax_1 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
    *(arg1 + 0xa8) = arg1 + 0x28
    
    if (eax_1 != 0)
        void* result = eax_1 + 0x28 + arg1
        *(arg1 + 0xac) = result
        return result
    
    *(arg1 + 0x20) = eax_1
    *(arg1 + 0xac) = arg1 + 0x29
    *(arg1 + 0x28) = 0
    return arg1 + 0x28
}
