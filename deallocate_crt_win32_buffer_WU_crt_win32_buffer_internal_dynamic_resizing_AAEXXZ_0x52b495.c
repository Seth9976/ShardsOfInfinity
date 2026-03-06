// 函数名称: ?_deallocate@?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@AAEXXZ
// 虚拟地址: 0x52b495
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcall?_deallocate@?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@AAEXXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x14) != 0)
        __free_base(*(arg1 + 8))
        *(arg1 + 0x14) = 0
}
