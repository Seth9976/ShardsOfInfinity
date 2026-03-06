// 函数名称: __unwind_handler4
// 虚拟地址: 0x51f280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__unwind_handler4(int32_t arg1, void* arg2, void** arg3)
{
    // 第一条实际指令: if ((*(arg1 + 4) & 6) == 0)
    if ((*(arg1 + 4) & 6) == 0)
        return 1
    
    @__security_check_cookie@4(*(arg2 + 8) ^ arg2)
    *(arg2 + 0x18)
    __local_unwind4(*(arg2 + 0x14), *(arg2 + 0x10), *(arg2 + 0xc))
    *arg3 = arg2
    return 3
}
