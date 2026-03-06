// 函数名称: sub_42e870
// 虚拟地址: 0x42e870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_42e870(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = arg5
    int32_t ebx = arg5
    int32_t esi = arg3
    int32_t var_c = esi
    char const* const var_28
    int32_t var_24
    char const* const var_20
    char* ecx
    
    if (ebx s> 0)
        int32_t* ecx_1 = arg4
        int32_t result = *ecx_1
        arg1 = zx.d(result.w)
        arg5 = result
        
        if (arg1 u< 0xc8)
            void* edi_1 = *((arg1 << 5) + esi + 0x14)
            arg1 = 1
            void* var_8_1 = edi_1
            
            if (ebx s<= 1)
                return result
            
            while (true)
                result = ecx_1[arg1]
                uint32_t ecx_2 = zx.d(result.w)
                
                if (ecx_2 u>= 0xc8)
                    break
                
                int32_t edi_2 = *(edi_1 + 8)
                void* ecx_4 = *((ecx_2 << 5) + esi + 0x14)
                int32_t temp0_1 = *(ecx_4 + 8)
                
                if (temp0_1 s> edi_2 || (temp0_1 == edi_2 && *(ecx_4 + 0x28) == 2))
                    edi_1 = ecx_4
                    arg5 = result
                    var_8_1 = edi_1
                else
                    edi_1 = var_8_1
                    result = arg5
                
                ecx_1 = arg4
                arg1 += 1
                esi = var_c
                
                if (arg1 s>= ebx)
                    return result
        
        var_20 = "CardGet"
        var_24 = 0x87
        ecx = "idNoMimic < MAX_CARDS"
        var_28 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
    else
        var_20 = "FindBest"
        var_24 = 0x3c8
        var_28 = "c:\ax2017\jams\shards\code\shardsai.cpp"
        ecx = "numCards > 0"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
