// 函数名称: sub_4379e0
// 虚拟地址: 0x4379e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4379e0()
{
    // 第一条实际指令: void var_3c
    void var_3c
    int32_t eax_1 = __security_cookie ^ &var_3c
    int32_t* result = data_65aabc
    char const* const var_54
    int32_t var_50
    char const* const var_4c
    char* ecx
    
    if (result == 0)
        var_4c = "GetClient"
        var_50 = 0x74
        var_54 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    label_437beb:
        sub_44e4d0(result, &data_5559b1, ecx, var_54, var_50, var_4c)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    int32_t ecx_1 = data_5bcd64
    
    if (ecx_1 s>= 0)
        int32_t edx_1 = data_5bcd60
        
        if (ecx_1 s> 0 || edx_1 != 0)
            int32_t temp1_1 = result[1]
            
            if (temp1_1 s>= ecx_1 && (temp1_1 s> ecx_1 || *result u> edx_1))
                sub_481e00(data_dfced0, &var_3c)
                sub_4820b0(&var_3c)
                result = sub_41a000(data_dfc94c)
                int32_t edi_1 = 0
                
                if (data_5bcd58 s> 0)
                    while (true)
                        int32_t ecx_5 = *((edi_1 << 2) + &data_5bcd44)
                        
                        if (ecx_5 == 0)
                            var_4c = "DataArray<struct ShGfx>::DataArrayGet"
                            var_50 = 0x6c
                            ecx = "id != DATAID_NULL"
                        else
                            uint32_t edx_3 = zx.d(ecx_5.w)
                            
                            if (edx_3 u< data_5bcd80)
                                int32_t ebx_1 = data_5bcd7c
                                result = edx_3 * 0x568
                                
                                if (*(result + ebx_1 + 0x564) == ecx_5)
                                    void* esi_2 = edx_3 * 0x568 + ebx_1
                                    result = *(esi_2 + 0x1c)
                                    
                                    if (result s< 0)
                                        var_4c = "PGUIGet"
                                        var_50 = 0x512
                                        var_54 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                                        ecx = "who >= 0"
                                        goto label_437beb
                                    
                                    if (result s>= 5)
                                        var_4c = "PGUIGet"
                                        var_50 = 0x513
                                        var_54 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                                        ecx = "(int)who < (int)MAX_PLAYERS"
                                        goto label_437beb
                                    
                                    *(result * 0x4c + 0x5bcb51) = 1
                                    sub_45e9a0(esi_2 + 0x530)
                                    result = zx.d(*(esi_2 + 0x564))
                                    edi_1 += 1
                                    int32_t ecx_7 = data_5bcd88
                                    data_5bcd88 = result
                                    *(esi_2 + 0x564) = ecx_7
                                    data_5bcd8c -= 1
                                    
                                    if (edi_1 s>= data_5bcd58)
                                        break
                                    
                                    continue
                            
                            var_4c = "DataArray<struct ShGfx>::DataArrayGet"
                            var_50 = 0x6d
                            ecx = "DataArrayTryToGet(id) != NULL"
                        
                        var_54 = "c:\ax2017\engine\dataarray.h"
                        goto label_437beb
                
                data_5bcd58 = 0
                data_5bcd60.q = 0
                sub_45e9a0(&data_5bb250:4)
                int64_t xmm0_1 = data_5bb244
                data_5bb258 = data_5bb24c
                int32_t eax_4 = data_5bb25c
                data_5bb24c = eax_4
                data_5bb25c = eax_4 + 1
                result = data_5c2e30
                data_5bb250 = xmm0_1
                data_5bb244:4 = 0
                data_5bb244.d = 0
                data_5bb240 = 0
                
                if (*result == 0xa)
                    result = sub_439080()
    
    @__security_check_cookie@4(eax_1 ^ &var_3c)
    return result
}
