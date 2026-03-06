// 函数名称: sub_42d700
// 虚拟地址: 0x42d700
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_42d700(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: _memset(arg3, 0, 0x30)
    _memset(arg3, 0, 0x30)
    *arg3 = *arg4
    int32_t eax_2 = *arg4 - 1
    
    if (eax_2 u> 8)
        sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsai.cpp", 0x122, 
            "ShAIAction_First")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (eax_2)
        case 0
            if (arg4[0xcd] != 0)
                goto label_42d890
            
            if (arg4[0xcf] != 0)
                arg3[1] = 1
                arg3[2] = *arg4[0xce]
                arg3[0xa] = 1
                return arg3
            
            if (arg4[0xd1] != 0)
                arg3[1] = 2
                arg3[2] = *arg4[0xd0]
                arg3[0xa] = 1
                return arg3
            
            if (arg4[0xd5] != 0)
                arg3[1] = 4
                arg3[2] = *arg4[0xd4]
                arg3[0xa] = 1
                return arg3
            
            arg3[1] = 5
            int32_t eax_12 = sub_44d1d0(arg2, arg4[1])
            __builtin_memset(&arg3[2], 0, 0x20)
            arg3[eax_12 + 2] = *(arg4[1] * 0x9c + arg2 + 0x1e6c)
            arg3[0xa] = *(arg2 + 0x2164)
            return arg3
        case 1
            arg3[1] = 8
            int32_t eax_19 = arg4[0xcf] + arg4[0xcd]
            int32_t ebx = arg4[0xcb]
            
            if (ebx s>= eax_19)
                ebx = eax_19
            
            arg3[0xa] = ebx
            int32_t edi_1 = ebx
            int32_t eax_20 = arg4[0xcf]
            int32_t esi_1 = arg4[0xcd]
            
            if (ebx s>= eax_20)
                edi_1 = eax_20
            
            int32_t ebx_1 = ebx - edi_1
            sub_51d5b0(&arg3[2], arg4[0xce], edi_1 << 2)
            
            if (ebx_1 s>= esi_1)
                ebx_1 = esi_1
            
            sub_51d5b0(&arg3[2 + edi_1], arg4[0xcc], ebx_1 << 2)
            return arg3
        case 2
            arg3[1] = 6
        label_42d890:
            arg3[2] = *arg4[0xcc]
            arg3[0xa] = 1
            return arg3
        case 3
            arg3[1] = 9
            arg3[2] = *arg4[0xcc]
            arg3[0xa] = 1
            return arg3
        case 4
            int32_t ecx_2 = 0
            arg3[1] = 9
            
            if (arg4[0xd1] != 0)
                ecx_2 = 1
                arg3[2] = *arg4[0xd0]
            
            if (arg4[0xcd] != 0)
                arg3[ecx_2 + 2] = *arg4[0xcc]
                ecx_2 += 1
            
            if (arg4[0xcf] != 0)
                arg3[ecx_2 + 2] = *arg4[0xce]
                ecx_2 += 1
            
            arg3[0xa] = ecx_2
            return arg3
        case 5
            arg3[1] = 0xb
            arg3[2] = *arg4[0xcc]
            arg3[0xa] = 1
            return arg3
        case 6
            arg3[1] = 0xa
            arg3[2] = *arg4[0xcc]
            arg3[0xa] = 1
            return arg3
        case 7
            arg3[1] = 0xc
            arg3[2] = *arg4[0xcc]
            arg3[0xa] = 1
            return arg3
        case 8
            arg3[1] = 7
            arg3[2] = *arg4[0xcc]
            arg3[0xa] = 1
            return arg3
}
