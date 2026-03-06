// 函数名称: ___acrt_fenv_get_status
// 虚拟地址: 0x53aa2d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall___acrt_fenv_get_status(int32_t arg1, int32_t arg2 @ mxcsr)
{
    // 第一条实际指令: int16_t var_8 = arg1.w
    int16_t var_8 = arg1.w
    int32_t var_c = arg1
    int32_t edi
    int32_t var_14 = edi
    var_8 = 0
    bool c0
    bool c1
    bool c2
    bool c3
    int32_t ecx_1 = (zx.d((c0 ? 1 : 0) << 8) | zx.d((c1 ? 1 : 0) << 9) | zx.d((c2 ? 1 : 0) << 0xa)
        | zx.d((c3 ? 1 : 0) << 0xe)) & 0x3f
    int32_t esi_7 = (ecx_1 u>> 1 & 1) << 5 | (ecx_1 u>> 2 & 1) << 3 | (ecx_1 u>> 3 & 1) << 2
        | ((ecx_1 u>> 4 & 1) * 2) | (ecx_1 & 1) << 4
    int32_t esi_8 = esi_7 | zx.d((ecx_1 u>> 5).b)
    int32_t edx
    
    if (data_65a2f4 s>= 1)
        edx = arg2 & 0x3f
    else
        edx = 0
    
    int32_t ecx_10 = (edx u>> 1 & 1) << 5 | (edx u>> 2 & 1) << 3 | (edx u>> 3 & 1) << 2
        | ((edx u>> 4 & 1) * 2) | (edx u>> 5 & 1)
    int32_t ecx_11 = ecx_10 | (zx.d(edx.b) & 1) << 4
    return (ecx_11 << 8 | esi_8) << 0x10 | ecx_11 | esi_8
}
