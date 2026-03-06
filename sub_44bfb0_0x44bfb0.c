// 函数名称: sub_44bfb0
// 虚拟地址: 0x44bfb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44bfb0(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax = zx.d(arg4.w)
    uint32_t eax = zx.d(arg4.w)
    
    if (eax u>= 0xc8)
        sub_44e4d0(eax, &data_5559b1, "idNoMimic < MAX_CARDS", 
            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x90, "CardGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* ecx = (eax << 5) + arg3
    void* result = *(ecx + 4)
    
    if (result == 0xa || result == 6)
        return result
    
    void* eax_2 = *(ecx + 0x14)
    int32_t eax_3
    int32_t edx_1
    
    if (*(eax_2 + 0x28) != 2)
        eax_3 = sub_4469f0(eax_2, arg4, arg3, 6, arg2)
        edx_1 = 8
    else
        eax_3 = sub_4469f0(eax_2, arg4, arg3, 0xa, arg2)
        edx_1 = 0xa
    
    return sub_445a20(eax_3, edx_1, arg3, arg2, arg4, 0, 0, 0)
}
