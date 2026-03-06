// 函数名称: sub_438f20
// 虚拟地址: 0x438f20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_438f20(int32_t arg1)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    int64_t var_34
    __builtin_memset(&var_34, 0, 0x20)
    int32_t var_10 = 0
    int32_t var_3c = *data_5c2e30
    int32_t var_38 = 5
    int32_t edi = 0
    void* result = *(sub_41ad20() + 0xec)
    void* result_1 = result
    void* ebx = result - 1
    void* esi_1
    
    if (ebx s<= 0)
        esi_1 = data_65aabc
    else
        do
            result = sub_41ad20()
            esi_1 = data_65aabc
            int32_t edx_1 = *(result + 0xec)
            
            if (esi_1 == 0)
                goto label_439059
            
            int32_t eax_7 = *(esi_1 + 0x648) + 1 + edi
            int32_t ecx_1 = eax_7 - edx_1
            
            if (eax_7 s< edx_1)
                ecx_1 = eax_7
            
            result = *(arg1 + (edi << 2))
            edi += 1
            *(&var_34 + (ecx_1 << 2)) = result
        while (edi s< ebx)
    
    if (esi_1 != 0)
        int32_t esi_2 = *(esi_1 + 0x648)
        *(&var_34 + (esi_2 << 2)) = 0
        void* eax_9 = sub_41ad20()
        sub_436b50(eax_9, esi_2, eax_9, &var_3c)
        result = sub_443fc0()
        
        if (result == 0)
            @__security_check_cookie@4(eax_1 ^ &var_44)
            return result
        
        result = sub_443fc0()
        
        if (*(result + 0x14) != 0xb)
            @__security_check_cookie@4(eax_1 ^ &var_44)
            return result
        
        result = data_65aabc
        
        if (result != 0)
            if (*(result + 0x434) != 0)
                result = sub_443fc0()
                
                if (*(result + 0x14) == 0xb)
                    result = sub_443dc0()
            
            @__security_check_cookie@4(eax_1 ^ &var_44)
            return result
    
    label_439059:
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
