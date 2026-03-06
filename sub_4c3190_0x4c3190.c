// 函数名称: sub_4c3190
// 虚拟地址: 0x4c3190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4c3190(float* arg1, float* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    
    if (esi[0x12] == 0)
        return 
    
    uint32_t eax = sub_4c2b80(arg1, arg2)
    
    if (eax.b == 0)
        sub_4c2d30(eax, arg1, arg1, arg3, esi)
}
