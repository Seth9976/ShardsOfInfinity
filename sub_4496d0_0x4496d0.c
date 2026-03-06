// 函数名称: sub_4496d0
// 虚拟地址: 0x4496d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4496d0(int32_t arg1, uint32_t arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    void* edx = arg3
    int32_t ecx = arg4
    uint32_t result = zx.d(ecx.w)
    int32_t edi = 0
    void* var_34 = edx
    int32_t ebx = 0
    uint32_t result_1 = result
    int32_t var_40
    int32_t var_18[0x4]
    int32_t edi_1
    
    while (true)
        var_40 = ecx
        int32_t var_3c_1 = edi
        
        if (result u>= 0xc8)
            sub_44e4d0(result, &data_5559b1, "idNoMimic < MAX_CARDS", 
                "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x90, "CardGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t* eax_5 = *((result << 5) + edx + 0x14) + 0x34 + ebx
        result = *eax_5
        
        if (result != 0)
            if ((result & 0xa0000000) == 0)
                void var_30
                int32_t eax_7 = sub_448960(&var_40, arg2, var_34, &var_40, &var_30, 0)
                
                if ((*eax_5 & 0x40000000) == 0)
                    var_18[esi] = edi
                    esi += 1
                else if (eax_7 == 0)
                label_44975f:
                    esi = 0
                    var_18[esi] = edi
                    esi += 1
                else if (eax_7 == 1 && arg5 == 0)
                    goto label_44975f
                
                ecx = arg4
                edx = var_34
            
            result = result_1
            ebx += 0xc
            edi += 1
            
            if (ebx s< 0x30)
                continue
        
        edi_1 = 0
        break
    
    if (esi s> 0)
        do
            int32_t var_3c_2 = var_18[edi_1]
            var_40 = ecx
            result = sub_4495f0(&var_40, arg2, var_34, &var_40)
            ecx = arg4
            edi_1 += 1
        while (edi_1 s< esi)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
