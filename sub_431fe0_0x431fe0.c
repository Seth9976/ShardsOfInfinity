// 函数名称: sub_431fe0
// 虚拟地址: 0x431fe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_431fe0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edx_1 = *arg2
    int32_t edx_1 = *arg2
    int32_t ebx = ((edx_1 s>> 4 | edx_1) & arg1[1]) << 2
    
    for (int32_t* i = *(ebx + *arg1); i != 0; i = i[2])
        if (edx_1 == *i)
            i[1] = *arg3
            return i
    
    int32_t* eax_5 = sub_45cfa0(0xc)
    eax_5[3] += 1
    int32_t* ecx = *eax_5
    
    if (ecx == 0)
        sub_45ce30(eax_5)
        ecx = *eax_5
    
    *eax_5 = *ecx
    *ecx = *arg2
    ecx[1] = *arg3
    ecx[2] = *(ebx + *arg1)
    int32_t eax_13 = *arg1
    *(ebx + eax_13) = ecx
    arg1[2] += 1
    return eax_13
}
