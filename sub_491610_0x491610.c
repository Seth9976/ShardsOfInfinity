// 函数名称: sub_491610
// 虚拟地址: 0x491610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_491610(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    char* eax = *(arg1 + 4)
    char* const ecx = &data_5559b1
    int32_t edx
    int32_t var_8 = edx
    
    if (eax != 0)
        ecx = eax
    
    int32_t result
    result.b = sub_4529c0(eax, edx, ecx, ecx, &data_5828f8) == 1
    return result
}
