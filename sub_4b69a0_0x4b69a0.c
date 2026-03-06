// 函数名称: sub_4b69a0
// 虚拟地址: 0x4b69a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b69a0(int32_t arg1, int32_t* arg2, void* arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_64
    int32_t* var_98 = &var_64
    int32_t* result_1
    sub_42ce10(&result_1, *(arg3 + 4), 2)
    void* edx = *var_64
    int32_t* result
    
    if (edx != 0)
        int64_t var_20_1 = *(arg3 + 8)
        int128_t xmm0_2 = *(arg3 + 0x14)
        int32_t var_18_1 = *(arg3 + 0x10)
        int128_t var_5c = (*(arg3 + 0x24)).o
        int128_t var_4c_1 = xmm0_2
        int128_t var_3c = *(arg3 + 0x14)
        void var_84
        int64_t* eax_5 = sub_49fd50(&var_84, edx + 0x20, &var_5c, &var_84)
        float xmm3_1 = *(arg3 + 0x24)
        int128_t var_30_1
        var_30_1:4.q = *eax_5
        var_30_1:0xc.d = eax_5[1].d
        float xmm0_10 = (*(edx + 0x34) f- *(edx + 0x28)) * xmm3_1
        int64_t var_20_2 = _mm_unpacklo_ps((*(edx + 0x2c) f- *(edx + 0x20)) * xmm3_1, 
            (*(edx + 0x30) f- *(edx + 0x24)) * xmm3_1)
        float var_18_2 = xmm0_10
        result = sub_4b6360(xmm0_10, arg2, &var_3c, arg5)
        int32_t* result_2 = result_1
        
        if (result_2 != 0)
            result_2[7] -= 1
        
        if (result.b != 0)
            if (arg4 == 0)
            label_4b6ace:
                result.b = 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            if (sub_4b6760(result, arg2, arg3, arg5).b != 0)
                goto label_4b6ace
    else
        result = result_1
        
        if (result != 0)
            result[7] -= 1
    
    result.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
