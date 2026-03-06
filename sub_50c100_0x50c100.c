// 函数名称: sub_50c100
// 虚拟地址: 0x50c100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50c100(void* arg1, long double arg2 @ st0, long double arg3 @ st1, long double arg4 @ st2)
{
    // 第一条实际指令: void* var_20 = arg1
    void* var_20 = arg1
    float xmm1 = *(arg1 + 0x38)
    int32_t eax_1 = (&data_659a34)[*(arg1 + 0x50) * 2]
    int32_t eax_2
    eax_2.b = xmm1 > 1f
    long double x87_r0
    
    if (eax_2 == 0)
        eax_1(xmm1)
        x87_r0 = arg2 * fconvert.t(2f) / fconvert.t(xmm1)
    else
        eax_1(1f / xmm1)
        x87_r0 = arg2 * fconvert.t(2f)
    
    float xmm0_3 = sub_4297a0(fconvert.s(x87_r0))
    float xmm2 = *(arg1 + 0x3c)
    int32_t ecx_1 = (&data_659a34)[*(arg1 + 0x54) * 2]
    int32_t var_20_3 = ecx_1
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(int.d(xmm0_3))
    int32_t eax_6
    eax_6.b = xmm2 > 1f
    long double x87_r1
    
    if (eax_6 == 0)
        ecx_1(xmm2)
        x87_r1 = arg3 * fconvert.t(2f) / fconvert.t(xmm2)
    else
        ecx_1(1f / xmm2)
        x87_r1 = arg3 * fconvert.t(2f)
    
    int32_t ecx_2
    float xmm0_6
    ecx_2, xmm0_6 = sub_4297a0(fconvert.s(x87_r1))
    float xmm1_1 = *(arg1 + 0x38)
    int32_t edi = *(arg1 + 4)
    int32_t eax_8
    eax_8.b = xmm1_1 > 1f
    int32_t ecx_3
    
    if (eax_8 == 0)
        int32_t var_20_6 = ecx_2
        (&data_659a34)[*(arg1 + 0x50) * 2](xmm1_1)
        int32_t eax_12
        int32_t edx_1
        edx_1:eax_12 = sx.q(int.d(sub_4297a0(fconvert.s(arg4 * fconvert.t(2f) / fconvert.t(xmm1_1)))))
        ecx_3 = edi + ((eax_12 - edx_1) s>> 1 << 1)
    else
        ecx_3 = *(arg1 + 0x14)
    
    float xmm1_2 = *(arg1 + 0x3c)
    int32_t edi_1 = *(arg1 + 8)
    *(arg1 + 0x98) = ecx_3
    float var_c_4 = xmm1_2
    int32_t eax_15
    eax_15.b = xmm1_2 > 1f
    int32_t eax_16
    
    if (eax_15 == 0)
        int32_t var_20_8 = ecx_3
        (&data_659a34)[*(arg1 + 0x54) * 2](xmm1_2)
        unimplemented  {fmul st0, dword [0x59da60]}
        unimplemented  {fdiv st0, dword [ebp-0x8]}
        float var_c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
        unimplemented  {fstp dword [ebp-0x8], st0}
        float xmm0_10 = sub_4297a0(var_c_5)
        ecx_3 = *(arg1 + 0x98)
        int32_t eax_20
        int32_t edx_2
        edx_2:eax_20 = sx.q(int.d(xmm0_10))
        eax_16 = edi_1 + ((eax_20 - edx_2) s>> 1 << 1)
    else
        eax_16 = *(arg1 + 0x18)
    
    float xmm1_3 = *(arg1 + 0x38)
    *(arg1 + 0x9c) = eax_16
    *(arg1 + 0xa4) = int.d(xmm0_6) + 1
    *(arg1 + 0xbc) = ecx_3 << 3
    int32_t var_20_10 = ecx_3
    int32_t eax_28
    eax_28.b = xmm1_3 > 1f
    float var_20_11
    
    if (eax_28 == 0)
        var_20_11 = xmm1_3
    else
        var_20_11 = 1f / xmm1_3
    
    (&data_659a34)[*(arg1 + 0x50) * 2](var_20_11)
    unimplemented  {fmul st0, dword [0x59da60]}
    float var_8_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
    unimplemented  {fstp dword [ebp-0x4], st0}
    int32_t ecx_4
    float xmm0_13
    ecx_4, xmm0_13 = sub_4297a0(var_8_6)
    float xmm1_4 = *(arg1 + 0x3c)
    int32_t var_20_12 = ecx_4
    *(arg1 + 0xc0) = (int.d(xmm0_13) * *(arg1 + 0x98)) << 2
    *(arg1 + 0xc4) = *(arg1 + 0x9c) << 3
    int32_t eax_36
    eax_36.b = xmm1_4 > 1f
    float var_20_13
    
    if (eax_36 == 0)
        var_20_13 = xmm1_4
    else
        var_20_13 = 1f / xmm1_4
    
    (&data_659a34)[*(arg1 + 0x54) * 2](var_20_13)
    unimplemented  {fmul st0, dword [0x59da60]}
    float var_8_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
    unimplemented  {fstp dword [ebp-0x4], st0}
    float xmm0_16 = sub_4297a0(var_8_8)
    int32_t ecx_5 = *(arg1 + 0x40)
    int32_t ebx_2 = *(arg1 + 4) + ((eax_4 - edx) s>> 1 << 1)
    int32_t edx_5 = (ecx_5 * *(arg1 + 0x14)) << 2
    *(arg1 + 0xd0) = edx_5
    *(arg1 + 0xd8) = edx_5
    float xmm0_17 = *(arg1 + 0x3c)
    int32_t edi_4 = (int.d(xmm0_16) * *(arg1 + 0x9c)) << 2
    int32_t ebx_4 = (ebx_2 * ecx_5) << 2
    int32_t ecx_7 = ecx_5 * *(arg1 + 0x14) * *(arg1 + 0xa4)
    *(arg1 + 0xc8) = edi_4
    *(arg1 + 0xcc) = ebx_4
    int32_t ecx_8 = ecx_7 << 2
    *(arg1 + 0xd4) = ecx_8
    int32_t eax_38
    eax_38.b = xmm0_17 > 1f
    
    if (eax_38 == 0)
        *(arg1 + 0xd8) = 0
    else
        *(arg1 + 0xd0) = 0
    
    return *(arg1 + 0xbc) + *(arg1 + 0xc4) + *(arg1 + 0xc0) + ecx_8 + edx_5 + ebx_4 + edi_4
}
