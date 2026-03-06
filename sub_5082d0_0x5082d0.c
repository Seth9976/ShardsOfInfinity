// 函数名称: sub_5082d0
// 虚拟地址: 0x5082d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5082d0(int32_t arg1, float arg2 @ xmm1, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t eax = (&data_659a34)[arg1 * 2]
    int32_t eax = (&data_659a34)[arg1 * 2]
    int32_t var_10 = arg1
    int32_t eax_1
    eax_1.b = arg2 > 1f
    
    if (eax_1 == 0)
        eax(arg2)
        return int.d(sub_4297a0(fconvert.s(arg3 + arg3)))
    
    eax(1f / arg2)
    return int.d(sub_4297a0(fconvert.s(arg3 + arg3)))
}
