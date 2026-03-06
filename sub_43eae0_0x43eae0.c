// 函数名称: sub_43eae0
// 虚拟地址: 0x43eae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_43eae0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* result_1 = sub_437070(arg4)
    int32_t* result_1 = sub_437070(arg4)
    int32_t* result = sub_4450d0(&data_5bcd7c)
    int32_t* result_3 = result
    int32_t var_1c = arg2
    int32_t var_18 = 0xffffffff
    int32_t var_14 = 0xffffffff
    result_3[0xc] = arg5
    result_3[0xd] = arg6
    *result_3 = 1
    result_3[9] = arg3
    result_3[0xa] = arg3
    result_3[0xb] = arg2
    char const* const var_114_1
    int32_t var_110_1
    char const* const var_10c_1
    char* ecx_4
    
    if (arg3 + 0xb s< 0x11)
        result = result_1
        int128_t var_84
        int128_t xmm0_1
        int128_t xmm1_1
        int128_t xmm2_1
        int128_t xmm3_1
        int128_t xmm4_1
        
        if (result[3] != 7)
        label_43ebf5:
            int32_t ecx_9 = result[0x14c]
            
            if (ecx_9 == 0)
                __builtin_memcpy(&result_3[0x42], &result[0x42], 0x68)
            label_43ece0:
                int32_t var_88 = 1
                result_3[0x13f] = 0
                __builtin_memcpy(&result_3[0x28], &result_3[0x42], 0x68)
                var_84 = (arg3 + 0xb).o
                void var_f8
                __builtin_memcpy(&var_f8, &var_88, 0x68)
                int32_t var_90 = 6
                int32_t var_8c = 0
                __builtin_memcpy(&result_3[0x5c], &var_f8, 0x70)
                result_3[0x13c] = 1
                return result
            
            result = sub_46e020(result, "tbl_icon_source", ecx_9, 0)
            int32_t* result_2 = result
            
            if (result_2 != 0)
                uint32_t esi_2 = zx.d(result_2.w)
                int32_t ecx_10
                
                if (esi_2 u< data_5c99a4)
                    ecx_10 = data_5c99a0
                    result = esi_2 * 0x1008
                
                if (esi_2 u< data_5c99a4 && *(result + ecx_10 + 0x1004) == result_2)
                    int32_t eax_4 = esi_2 * 0x1008
                    xmm0_1 = *(eax_4 + ecx_10 + 0x6dc)
                    xmm1_1 = *(eax_4 + ecx_10 + 0x6ec)
                    xmm2_1 = *(eax_4 + ecx_10 + 0x6fc)
                    xmm3_1 = *(eax_4 + ecx_10 + 0x70c)
                    xmm4_1 = *(eax_4 + ecx_10 + 0x71c)
                    result = *(eax_4 + ecx_10 + 0x72c)
                label_43ec8e:
                    *(result_3 + 0x11c) = xmm0_1
                    result_3[0x42] = 0
                    *(result_3 + 0x12c) = xmm1_1
                    *(result_3 + 0x13c) = xmm2_1
                    *(result_3 + 0x14c) = xmm3_1
                    *(result_3 + 0x15c) = xmm4_1
                    result_3[0x5b] = result
                    goto label_43ece0
                
                var_10c_1 = "DataArray<struct UI2>::DataArrayGet"
                var_110_1 = 0x6d
                var_114_1 = "c:\ax2017\engine\dataarray.h"
                ecx_4 = "DataArrayTryToGet(id) != NULL"
            else
                var_10c_1 = "UI2GetTransform"
                var_110_1 = 0x3671
                var_114_1 = "c:\ax2017\engine\ui2.cpp"
                ecx_4 = "handle != UI2_NULL"
        else
            void* ecx_5 = data_65aabc
            
            if (ecx_5 != 0)
                int32_t edx = result[2]
                
                if (edx == *(ecx_5 + 0x648))
                    goto label_43ebf5
                
                if (data_5bb1e4.d == 0x1e)
                    data_5bb1e4:4
                else if (data_5bb1f0.d == 0x1e)
                    data_5bb1f0:4
                
                sub_47a240(sub_41aec0(edx) - 1)
                int128_t* eax_3 = sub_47a660(&var_84:0xc, 0)
                xmm0_1 = *eax_3
                xmm1_1 = eax_3[1]
                xmm2_1 = eax_3[2]
                xmm3_1 = eax_3[3]
                xmm4_1 = eax_3[4]
                result = eax_3[5].d
                goto label_43ec8e
            
            var_10c_1 = "GetClient"
            var_110_1 = 0x74
            var_114_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_4 = "gClient"
    else
        var_10c_1 = "ShLocSet"
        var_110_1 = 0xc7a
        var_114_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx_4 = "loc.slot >= 0"
    
    sub_44e4d0(result, &data_5559b1, ecx_4, var_114_1, var_110_1, var_10c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
