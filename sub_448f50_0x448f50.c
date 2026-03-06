// 函数名称: sub_448f50
// 虚拟地址: 0x448f50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_448f50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result
    void* result
    
    if (*(arg1 + 0x18) == 0 && ((arg2 & 0x4000) == 0 || *(*(arg1 + 0x10) + 0xc) == 3)
            && ((arg2 & 0x2000) == 0 || *(*(arg1 + 0x10) + 0xc) == 1)
            && ((arg2 & 0x8000) == 0 || *(*(arg1 + 0x10) + 0xc) == 2)
            && ((arg2 & 0x1000) == 0 || *(*(arg1 + 0x10) + 0xc) == 4)
            && ((arg2 & 0x20000) == 0 || *(*(arg1 + 0x10) + 0x28) == 2))
        if ((arg2 & 0x40000) != 0)
            result = *(*(arg1 + 0x10) + 0x28)
        
        if (((arg2 & 0x40000) == 0 || result == 0 || result == 1)
                && ((arg2 & 0x10000) == 0 || *(*(arg1 + 0x10) + 0x28) == 1))
            result.b = 1
            return result
    
    result.b = 0
    return result
}
