// 函数名称: sub_448e60
// 虚拟地址: 0x448e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_448e60(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void* eax_1 = sub_445b50(arg3, arg2)
    void* eax_1 = sub_445b50(arg3, arg2)
    int32_t* eax_2 = sub_447380(arg3, arg5)
    uint32_t ecx_2 = zx.d((*eax_2).b)
    uint32_t esi
    
    if (ecx_2 == 0xf)
        esi = 2
    else
        if (ecx_2 != 0x15)
            sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x75d, 
                "PowerRefGetOngoingType")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        esi = ecx_2 - 0x14
    
    if (arg6 == 1)
        int32_t edx_1 = *(eax_1 + 0x94)
        int32_t ecx_3 = 0
        
        if (edx_1 s> 0)
            void* result = eax_1 + 0x54
            
            do
                if (*result == esi)
                    return result
                
                ecx_3 += 1
                result += 0x14
            while (ecx_3 s< edx_1)
    
    int32_t ecx_4 = *(eax_1 + 0x94)
    void* edx_2 = eax_1 + ecx_4 * 0x14
    *(eax_1 + 0x94) = ecx_4 + 1
    *(edx_2 + 0x48) = arg4
    *(edx_2 + 0x44) = arg2
    *(edx_2 + 0x4c) = *arg5
    int32_t eax_8 = arg5[1]
    *(edx_2 + 0x50) = eax_8
    *(edx_2 + 0x54) = esi
    return sub_445a20(eax_8, 0x18, arg3, arg2, arg4, esi, 0, 0)
}
