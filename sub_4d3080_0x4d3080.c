// 函数名称: sub_4d3080
// 虚拟地址: 0x4d3080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4d3080(int32_t* arg1, int64_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_545748
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_7c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_54 = nullptr
    int32_t* var_50 = nullptr
    int32_t var_4c = 0
    int32_t var_14_1 = 0
    int32_t* i = *(data_ce24d4 + 0xc)
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[1]
        int32_t* eax_4 = sub_45cfa0(0xc)
        eax_4[3] += 1
        int32_t* ecx = *eax_4
        
        if (ecx == 0)
            sub_45ce30(eax_4)
            ecx = *eax_4
        
        *eax_4 = *ecx
        *ecx = 0
        ecx[2] = 0
        *ecx = *i_1
        ecx[2] = var_50
        
        if (var_50 == 0)
            var_54 = ecx
        else
            var_50[1] = ecx
        
        var_4c += 1
        var_50 = ecx
    
    sub_4d2f90(&var_54)
    int128_t var_44 = zx.o(0)
    var_44:0xc.b = 1
    var_44.d = &var_54
    int96_t var_34 = (zx.o(0)).12
    char var_45
    float eax_12
    int64_t xmm2_3
    
    if (sub_4b6ae0(arg1, &var_44) != 0)
        eax_12 = var_34:8.d
        xmm2_3 = var_34.q
    label_4d3255:
        var_45 = 1
        *arg2 = xmm2_3
        arg2[1].d = eax_12
    else
        float xmm5_2 = -0f f- *(data_ce24d4 + 0x68) + -0f
        float xmm3_4 = arg1[3] f* 0f f+ arg1[4] + arg1[5] f* 0f
        int32_t xmm0_4 = sub_41b760(xmm3_4)
        float xmm1_5
        float xmm2_1
        float xmm6_1
        float xmm7_1
        
        if (not(9.99999975e-06f f> xmm0_4))
            xmm2_1 = *arg1
            xmm7_1 = arg1[2]
            xmm6_1 = arg1[1]
            xmm1_5 = xmm2_1 * 0f + xmm6_1 + xmm7_1 * 0f + xmm5_2
        
        if (not(9.99999975e-06f f> xmm0_4) && not(0 f< xmm1_5 * xmm3_4))
            float xmm1_7 = (xmm1_5 / xmm3_4) ^ (data_59e5c0.o).d
            float xmm7_2 = xmm7_1 + arg1[5] f* xmm1_7
            xmm2_3 = _mm_unpacklo_ps(xmm2_1 + arg1[3] f* xmm1_7, xmm6_1 + arg1[4] f* xmm1_7)
            var_34.q = xmm2_3
            eax_12 = xmm7_2
            var_34:8.d = eax_12
            goto label_4d3255
        
        var_45 = 0
    int32_t var_14_2 = 2
    sub_429100(&var_54)
    int32_t result
    result.b = var_45
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
