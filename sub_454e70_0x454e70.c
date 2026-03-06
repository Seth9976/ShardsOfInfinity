// 函数名称: sub_454e70
// 虚拟地址: 0x454e70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_454e70(int32_t arg1, int64_t* arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm3_1 = *arg3 f+ arg3[0x15]
    float xmm2_1 = arg3[0x16] f+ arg3[1]
    float xmm1_1 = arg3[0x17] f+ arg3[2]
    uint32_t eax_2 = data_dff644
    int64_t* edi = arg2
    int64_t* var_3c = edi
    bool cond:0 = 1f f> *(arg4 + 0xc)
    uint32_t edx_1 = data_dfd4c4
    int128_t var_38 = data_59e2a0
    
    if (cond:0)
        eax_2 = data_dff64c
    
    int128_t var_28
    __builtin_memcpy(&var_28, 
        "\x02\x00\x06\x00\x00\x00\x04\x00\x01\x00\x05\x00\x03\x00\x07\x00\x00\x00\x04\x00\x01\x00\x05\x00\x"
    "03\x00\x07\x00\x02\x00\x06\x00", 
        0x20)
    float xmm1_2 = xmm1_1 * 0.5f
    sub_454d50(xmm1_2, edx_1, 6, _mm_unpacklo_ps(xmm3_1 * 0.5f, xmm2_1 * 0.5f), xmm1_2, eax_2)
    int32_t eax_4 = data_cdb38c
    int32_t i = 0
    data_cdb38c = eax_4 + 6
    void* esi = eax_4 * 0xa0 + 0x7db3a4
    uint32_t result
    
    do
        int32_t edx_2 = edi[1].d
        int64_t xmm5_1 = *edi
        int32_t j = 0
        int32_t var_44_1 = edx_2
        
        do
            int32_t eax_8 = sx.d(*(&var_38 + ((j + (i << 2)) << 1))) * 3
            *(esi - 0x18) = *(arg3 + (eax_8 << 2))
            *(esi - 0x10) = arg3[eax_8 + 2]
            *(esi - 0xc) = xmm5_1
            *(esi - 4) = edx_2
            int64_t var_70
            var_70.o = *arg4
            int32_t eax_10 = sub_45c850(var_70)
            j += 1
            *(esi + 4) = 0
            result = zx.d((eax_10 u>> 0x10).b)
            *(esi + 8) = 0x3f000000
            *esi = (((((eax_10 u>> 0x18 << 8) + zx.d(eax_10.b)) << 8) + zx.d((eax_10 u>> 8).b)) << 8)
                + result
            edx_2 = var_44_1
            *(esi + 0xc) = 0x3f000000
            esi += 0x28
        while (j s< 4)
        
        i += 1
        edi = var_3c + 0xc
        var_3c = edi
    while (i s< 6)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
