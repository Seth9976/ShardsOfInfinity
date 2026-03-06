// 函数名称: sub_437760
// 虚拟地址: 0x437760
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_437760(int32_t arg1, int32_t arg2, char arg3, char arg4)
{
    // 第一条实际指令: void var_a8
    void var_a8
    void* eax_1 = __security_cookie ^ &var_a8
    void* var_14 = eax_1
    
    if (arg3 != 0)
        int32_t* eax_9 = data_5c2e30
        
        if (*eax_9 == 0xa)
            eax_9 = sub_439080()
        
        data_5bcd58 = 0
        @__security_check_cookie@4(var_14 ^ &var_a8)
        return eax_9
    
    char const* const var_bc_1
    int32_t var_b8_1
    char const* const var_b4_1
    char* ecx_3
    int128_t var_90
    void var_74
    
    if (arg4 == arg3)
        int32_t edi_1 = 0
        
        if (data_5bcd58 s<= 0)
        label_437913:
            sub_481e00(data_dfcf14, &var_74)
            sub_4820b0(&var_74)
            void var_44
            sub_481e00(data_dfcf3c, &var_44)
            int32_t eax_8 = sub_4820b0(&var_44)
            data_5bb240 = 0x3eb
            data_5bcd60 = 0xffffffff
            data_5bcd64 = 0xffffffff
            @__security_check_cookie@4(var_14 ^ &var_a8)
            return eax_8
        
        while (true)
            int32_t ecx_11 = *((edi_1 << 2) + &data_5bcd44)
            
            if (ecx_11 == 0)
                var_b4_1 = "DataArray<struct ShGfx>::DataArrayGet"
                var_b8_1 = 0x6c
                ecx_3 = "id != DATAID_NULL"
            else
                uint32_t edx_2 = zx.d(ecx_11.w)
                
                if (edx_2 u< data_5bcd80)
                    eax_1 = edx_2 * 0x568 + data_5bcd7c
                    
                    if (*(eax_1 + 0x564) == ecx_11)
                        void* esi_3 = edx_2 * 0x568 + data_5bcd7c
                        void var_a0
                        int32_t* eax_7 =
                            sub_437260(&var_a0, *(esi_3 + 0x1c), 3, &var_a0, edi_1, data_5bcd58)
                        var_90 = *eax_7
                        eax_1 = sub_432710(eax_7, &var_90, esi_3 + 0xa0, 6, 0)
                        edi_1 += 1
                        
                        if (edi_1 s>= data_5bcd58)
                            goto label_437913
                        
                        continue
                
                var_b4_1 = "DataArray<struct ShGfx>::DataArrayGet"
                var_b8_1 = 0x6d
                ecx_3 = "DataArrayTryToGet(id) != NULL"
            
            var_bc_1 = "c:\ax2017\engine\dataarray.h"
            break
    else
        sub_41a000(0)
        int32_t* eax_2 = sub_437070(arg2)
        var_90 = data_59e690
        eax_2[3] = 5
        sub_432670(eax_2, &var_90, &eax_2[0x28], 7, 0)
        eax_1 = sub_4333a0(eax_2)
        
        if (eax_1.b != 0)
            sub_432830(eax_1, 0x7d0, &eax_2[0x28], 0)
            sub_481e00(data_dfcf58, &var_74)
            sub_4820b0(&var_74)
            eax_1 = data_65aabc
            data_5bb240 = 0x3ec
            
            if (eax_1 != 0)
                int32_t ecx_7 = *eax_1
                int32_t eax_3 = *(eax_1 + 4)
                data_5bcd60 = ecx_7 + 0x1388
                int32_t eax_4 = adc.d(eax_3, 0, ecx_7 u>= 0xffffec78)
                data_5bcd64 = eax_4
                @__security_check_cookie@4(var_14 ^ &var_a8)
                return eax_4
            
            var_b4_1 = "GetClient"
            var_b8_1 = 0x74
            var_bc_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_3 = "gClient"
        else
            var_b4_1 = "EliminationSequenceStart"
            var_b8_1 = 0xd37
            var_bc_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx_3 = "GfxIsVisible(gfx)"
    sub_44e4d0(eax_1, &data_5559b1, ecx_3, var_bc_1, var_b8_1, var_b4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
