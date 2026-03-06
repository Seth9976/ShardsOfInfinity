// 函数名称: sub_429850
// 虚拟地址: 0x429850
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_429850(int32_t arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_1 = arg4
    *(arg2 + 0xf0) = *(arg3 + 0xe8)
    *(arg2 + 0x100) = *(arg3 + 0xf8)
    *(arg2 + 0x108) = *(arg3 + 0x100)
    *(arg2 + 0xec) = 0
    
    if (i_1 s> 0)
        void* edx = arg3 + 8
        int32_t i
        
        do
            if (*(edx + 0x14) != 0)
                void* ecx = *(arg2 + 0xec) * 0x2c
                *(ecx + arg2 + 0x10) = *edx
                void* ecx_1 = ecx + arg2
                *(ecx_1 + 0x20) = *(edx + 0x10)
                *(ecx_1 + 0x30) = *(edx + 0x20)
                *(ecx_1 + 0x38) = *(edx + 0x28)
                *(arg2 + 0xec) += 1
            
            edx += 0x2c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t esi = arg5
    
    if (esi == 0xffffffff)
        esi = sub_452ac0()
    
    int32_t ecx_3 = *(arg2 + 0xf8) - 1
    int32_t var_20 = esi
    int128_t var_1c
    __builtin_memcpy(&var_1c, 
        "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00", 0x14)
    
    if (ecx_3 u> 4)
        int32_t eax_5 = *(arg2 + 0xec)
        int32_t var_30_1 = eax_5
        sub_452cb0(eax_5, &var_1c, ecx_3, eax_5)
    
    void* result = *(arg2 + 0xec)
    int32_t ecx_4 = 0
    *(arg2 + 0xf0) = esi
    
    if (result s> 0)
        void* edx_2 = arg2 + 0x2c
        
        do
            edx_2 += 0x2c
            *(edx_2 - 0x2c) = *(&var_1c + (ecx_4 << 2))
            ecx_4 += 1
            result = *(arg2 + 0xec)
        while (ecx_4 s< result)
    
    int32_t ebx = 0
    
    if (result s> 0)
        void* esi_1 = arg2 + 0x110
        
        while (true)
            char const* const var_38
            int32_t var_34_2
            char const* const var_30_2
            char* ecx_7
            
            if (*esi_1 != 0)
                var_30_2 = "LocalGameInitNew"
                var_34_2 = 0x5c
                var_38 = "c:\ax2017\jams\shared\tgggame\code\gamesave.cpp"
                ecx_7 = "save.logs.logs[i].logBytes == NULL"
            else
                *(esi_1 + 4) = 0x1000
                result = sub_52a358(0x1000, 0x10)
                
                if (result == 0)
                    var_30_2 = "XMalloc"
                    var_34_2 = 0x4f
                    var_38 = "c:\ax2017\engine\xmemory.cpp"
                    ecx_7 = "pBuffer"
                else
                    *esi_1 = result
                    ebx += 1
                    *(esi_1 + 0x10) = 0
                    *(esi_1 + 0xc) = 0
                    *(esi_1 + 8) = 0
                    esi_1 += 0x14
                    
                    if (ebx s>= *(arg2 + 0xec))
                        break
                    
                    continue
            
            sub_44e4d0(result, &data_5559b1, ecx_7, var_38, var_34_2, var_30_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
