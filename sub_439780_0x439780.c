// 函数名称: sub_439780
// 虚拟地址: 0x439780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_439780()
{
    // 第一条实际指令: void var_48
    void var_48
    void* eax_1 = __security_cookie ^ &var_48
    void* var_14 = eax_1
    void* ecx = data_65aabc
    char const* const var_5c
    int32_t var_58
    char const* const var_54
    char* ecx_1
    
    if (ecx == 0)
    label_4397a0:
        var_54 = "GetClient"
        var_58 = 0x74
        var_5c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    label_439956:
        sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_5c, var_58, var_54)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    eax_1 = sub_433c60(*(ecx + 0x648))
    void* esi_1 = eax_1
    int128_t var_40
    void* result
    
    if (*(esi_1 + 0x1c) + *(esi_1 + 4) s<= 0)
        __builtin_memset(&var_40, 0, 0x14)
    label_439927:
        result = sub_438f20(&var_40)
        @__security_check_cookie@4(var_14 ^ &var_48)
        return result
    
    void* ecx_5 = data_5c2e2c
    
    if (ecx_5 != 0)
        eax_1 = sub_438a40(ecx_5, &data_5bcca0)
        
        if (eax_1 s< 2)
            bool cond:0_1 = data_5bcca0 != 0
            __builtin_memset(&var_40, 0, 0x14)
            
            if (not(cond:0_1))
                var_40.d = *(esi_1 + 0x1c) + *(esi_1 + 4)
            
            if (data_5bcca1 == 0)
                var_40:4.d = *(esi_1 + 0x1c) + *(esi_1 + 4)
            
            if (data_5bcca2 == 0)
                var_40:8.d = *(esi_1 + 0x1c) + *(esi_1 + 4)
            
            if (data_5bcca3 == 0)
                var_40:0xc.d = *(esi_1 + 0x1c) + *(esi_1 + 4)
            
            if (data_5bcca4 == 0)
                int32_t var_30_1 = *(esi_1 + 0x1c) + *(esi_1 + 4)
            
            goto label_439927
        
        void* ecx_6 = data_65aabc
        data_5bb240 = 0x3ea
        data_5bcc88 = 1
        
        if (ecx_6 == 0)
            goto label_4397a0
        
        void* eax_2 = sub_433c60(*(ecx_6 + 0x648))
        void* eax_3 = sub_41ad20()
        void* ecx_8 = data_5c2e2c
        eax_1 = *(eax_3 + 0xec)
        __builtin_memset(&data_5bcc8c, 0, 0x14)
        int32_t edi_2 = *(eax_2 + 0x1c) + *(eax_2 + 4)
        
        if (ecx_8 != 0)
            int32_t esi_3 = sub_438a40(ecx_8, &data_5bcca0)
            int32_t ecx_9 = 0
            result = eax_1 - 1
            void* result_1 = result
            
            if (result s<= 0)
                @__security_check_cookie@4(var_14 ^ &var_48)
                return result
            
            do
                if ((&data_5bcca0)[ecx_9] == 0)
                    int32_t temp0_1 = divs.dp.d(sx.q(edi_2), esi_3)
                    edi_2 -= temp0_1
                    *((ecx_9 << 2) + &data_5bcc8c) = temp0_1
                    result = result_1
                    esi_3 -= 1
                
                ecx_9 += 1
            while (ecx_9 s< result)
            
            @__security_check_cookie@4(var_14 ^ &var_48)
            return result
    
    var_54 = "ShGameGet"
    var_58 = 0x26fe
    ecx_1 = "gShardsClient.g"
    var_5c = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    goto label_439956
}
