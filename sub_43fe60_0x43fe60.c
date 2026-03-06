// 函数名称: sub_43fe60
// 虚拟地址: 0x43fe60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_43fe60(char* arg1, int32_t arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: char const* const var_2c
    char const* const var_2c
    int32_t var_28
    char const* const var_24
    char* ecx
    
    if (arg2 != 0)
        uint32_t ecx_1 = zx.d(arg2.w)
        int32_t edx
        
        if (ecx_1 u< data_5bcd80)
            edx = data_5bcd7c
            arg1 = ecx_1 * 0x568
        
        if (ecx_1 u>= data_5bcd80 || *(arg1 + edx + 0x564) != arg2)
            var_24 = "DataArray<struct ShGfx>::DataArrayGet"
            var_28 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_2c = "c:\ax2017\engine\dataarray.h"
        else
            int32_t* esi_2 = ecx_1 * 0x568 + edx
            void var_10
            sub_481020(arg3, &var_10)
            arg1 = arg4
            int32_t edx_2
            
            switch (arg1)
                case nullptr
                    arg1 = data_65ac30
                    
                    if (arg1 != 0)
                        arg1 = *(arg1 + 0x20)
                        
                        if (arg1 == 0 || arg1 != 1)
                            *(esi_2 + 0x518) = *(esi_2 + 0x10c)
                            return sub_43f2e0(arg1, &var_10, esi_2, 1, 0)
                        
                        arg1 = data_5c2e30
                        
                        if (*arg1 == 9)
                            return sub_43f2e0(arg1, &var_10, esi_2, 1, 0)
                        
                        edx_2 = esi_2[0x159]
                        int32_t* ecx_3 = data_65aabc
                        
                        if (data_5c2ea0 != edx_2)
                        label_43ff71:
                            data_5c2ea0 = edx_2
                            
                            if (ecx_3 != 0)
                                data_5c2ea8 = *ecx_3
                                int32_t eax_2 = ecx_3[1]
                                data_5c2eac = eax_2
                                return eax_2
                        else if (ecx_3 != 0)
                            int32_t edi_1 = data_5c2ea8
                            arg1 = adc.d(data_5c2eac, 0, edi_1 u>= 0xfffffe0c)
                            int32_t temp1_1 = ecx_3[1]
                            
                            if (arg1 s< temp1_1 || (arg1 s<= temp1_1 && edi_1 + 0x1f4 u<= *ecx_3))
                                goto label_43ff71
                            
                            edx_2.b = 0
                            return sub_4329f0(esi_2, edx_2.b)
                        
                        var_24 = "GetClient"
                        var_28 = 0x74
                        var_2c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                        ecx = "gClient"
                    else
                        var_24 = "GetLocalSettings"
                        var_28 = 0x23d
                        var_2c = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                        ecx = "gGameSettings.localSettings"
                case 1
                    if (*esi_2 == 0)
                        edx_2.b = 0
                        return sub_4329f0(esi_2, edx_2.b)
                    
                    var_24 = "ShGfxInspect"
                    var_28 = 0x1e2
                    var_2c = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx = "Halt"
                case 3, 4
                    int32_t var_24_1 = arg2
                    return sub_44e260("swipe %d")
                case 5
                    var_24 = "ShardGfxHitAction"
                    var_28 = 0x1c7b
                    var_2c = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx = "Halt"
                default
                    return arg1
    else
        var_24 = "DataArray<struct ShGfx>::DataArrayGet"
        var_28 = 0x6c
        ecx = "id != DATAID_NULL"
        var_2c = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, var_2c, var_28, var_24)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
