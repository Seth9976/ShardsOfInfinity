// 函数名称: sub_4d80d0
// 虚拟地址: 0x4d80d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4d80d0(void* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    (*__glewGenBuffers)(1, &var_8)
    void* ecx = data_ce26e8
    void* eax_1 = var_8
    
    if (*(ecx + 0x4090) != eax_1)
        *(ecx + 0x4090) = eax_1
        (*__glewBindBuffer)(0x8892, eax_1)
        void* eax_3 = data_ce19c4
        *(eax_3 + 0x10) += 1
    
    ebx.b = arg5
    void* var_20_2 = ((zx.d(ebx.b) ^ 1) << 2) + 0x88e0
    int32_t var_24 = arg2
    uint32_t var_28 = arg3
    (*__glewBufferData)(0x8892)
    uint32_t (* eax_8)[0x4] = sub_4dd470(arg1 + 0x4240)
    *eax_8 = var_8
    (*eax_8)[2] = arg3
    (*eax_8)[3].b = ebx.b
    (*eax_8)[1] = 0
    (*eax_8)[0x37] = arg4
    return (*eax_8)[0x52]
}
