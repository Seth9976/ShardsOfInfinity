// 函数名称: sub_45cd70
// 虚拟地址: 0x45cd70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_45cd70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    void* result
    char const* const ecx
    
    if (arg1 s<= 0)
        char const* const var_4 = "XMalloc"
        var_8 = 0x3b
        ecx = "size > 0"
    else if (arg1 s< 0x77359400)
        result = sub_52a358(arg1, 0x10)
        
        if (result != 0)
            return result
        
        char const* const var_4_2 = "XMalloc"
        var_8 = 0x4f
        ecx = "pBuffer"
    else
        char const* const var_4_1 = "XMalloc"
        var_8 = 0x3c
        ecx = "size < 2000000000"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\xmemory.cpp", var_8, "XMalloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
