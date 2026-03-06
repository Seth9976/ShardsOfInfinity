// 函数名称: sub_4aefe0
// 虚拟地址: 0x4aefe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4aefe0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x1c) == 0)
    if (*(arg1 + 0x1c) == 0)
        return 
    
    uint32_t eax_1 = zx.d(*(arg1 + 0x40))
    uint32_t ebx_1 = zx.d(*(arg1 + 0x41))
    uint32_t edi_1 = zx.d(*(arg1 + 0x42))
    int32_t var_2c_1 = 0
    int32_t var_20_1 = 0
    int32_t eax_2
    int32_t edx
    edx:eax_2 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x34)) * eax_1 + 0x80)
    int32_t var_34_1 = 0
    int32_t var_1c_1 = 0
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x35)) * ebx_1 + 0x80)
    uint32_t esi_1 = zx.d(*(arg1 + 0x43))
    uint8_t var_f_1 = (edx_2 u>> 7).b
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x36)) * edi_1 + 0x80)
    uint8_t var_e_1 = (edx_4 u>> 7).b
    int32_t eax_6
    int32_t edx_6
    edx_6:eax_6 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x37)) * esi_1 + 0x80)
    uint8_t var_d_1 = (edx_6 u>> 7).b
    int32_t eax_8
    int32_t edx_8
    edx_8:eax_8 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x38)) * eax_1 + 0x80)
    uint32_t var_c_1
    var_c_1.b = (edx_8 u>> 7).b
    int32_t eax_10
    int32_t edx_10
    edx_10:eax_10 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x39)) * ebx_1 + 0x80)
    float xmm0_2 = *(arg1 + 0x20) f+ *(arg1 + 0xc)
    int32_t xmm1_1 = *(arg1 + 0x28)
    int32_t var_38 = xmm1_1
    int32_t var_28_1 = xmm1_1
    var_c_1:1.b = (edx_10 u>> 7).b
    float var_30_1 = xmm0_2
    int32_t eax_11
    int32_t edx_12
    edx_12:eax_11 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x3a)) * edi_1 + 0x80)
    char* const esi_2 = &data_5559b1
    var_c_1:2.b = (edx_12 u>> 7).b
    int32_t eax_12
    int32_t edx_14
    edx_14:eax_12 = mulu.dp.d(0x80808081, zx.d(*(arg1 + 0x3b)) * esi_1 + 0x80)
    var_c_1:3.b = (edx_14 u>> 7).b
    char* eax_14 = *arg2
    
    if (eax_14 != 0)
        esi_2 = eax_14
    
    int32_t var_18_1 = 0x3f800000
    float var_24_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x30))) f+ *(arg1 + 0x24)
    void var_5c
    void* var_74_1 = &var_5c
    sub_4aded0(sub_412bf0(&var_38, arg1 + 0x4c, &var_5c, &var_38), &var_5c, esi_2, *(arg1 + 0x2c), 
        (edx u>> 7).b.d, var_c_1, 1)
}
