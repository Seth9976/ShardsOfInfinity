// 函数名称: ?allocate@?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAEHI@Z
// 虚拟地址: 0x52c443
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?allocate@?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAEHI@Z(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x14) != 0)
        *(arg1 + 0x14) = 0
    
    *__errno() = 0x22
    *(arg1 + 0xc) = 0
    *(arg1 + 0x14) = 0
    return 0x22
}
