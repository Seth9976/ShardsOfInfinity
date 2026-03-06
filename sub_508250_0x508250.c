// 函数名称: sub_508250
// 虚拟地址: 0x508250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_508250(int32_t arg1, float arg2 @ xmm1, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t eax = (&data_659a34)[arg1 * 2]
    int32_t eax = (&data_659a34)[arg1 * 2]
    int32_t var_10 = arg1
    int32_t eax_1
    eax_1.b = arg2 > 1f
    
    if (eax_1 == 0)
        eax(arg2, arg2, eax)
        return int.d(sub_4297a0(fconvert.s((arg3 + arg3) / fconvert.t(arg2))))
    
    eax(1f / arg2, arg2, eax)
    return int.d(sub_4297a0(fconvert.s(arg3 + arg3)))
}
