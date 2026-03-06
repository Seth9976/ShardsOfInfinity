// 函数名称: sub_5133b0
// 虚拟地址: 0x5133b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5133b0(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_24 = ebx
    int32_t result
    int32_t ecx
    int32_t edx
    int32_t ebx_1
    result, ebx_1, ecx, edx = __cpuid(1, 0)
    *(arg1 + 0x480c) = sub_510030
    *(arg1 + 0x4810) = sub_513070
    *(arg1 + 0x4814) = sub_512db0
    int32_t result_1 = result
    int32_t var_10 = ebx_1
    int32_t var_c = ecx
    
    if ((edx & 0x4000000) != 0)
        *(arg1 + 0x480c) = sub_510590
        *(arg1 + 0x4810) = sub_513180
        *(arg1 + 0x4814) = sub_512e60
    
    return result
}
