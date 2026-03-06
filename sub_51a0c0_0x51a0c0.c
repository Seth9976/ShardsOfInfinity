// 函数名称: sub_51a0c0
// 虚拟地址: 0x51a0c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_51a0c0(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_51a040(arg1, "#?RADIANCE\n")
    int32_t result = sub_51a040(arg1, "#?RADIANCE\n")
    int32_t ecx = *(arg1 + 0xb4)
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    *(arg1 + 0xac) = ecx
    
    if (result == 0)
        result = sub_51a040(arg1, "#?RGBE\n")
        *(arg1 + 0xa8) = *(arg1 + 0xb0)
        *(arg1 + 0xac) = *(arg1 + 0xb4)
    
    return result
}
