// 函数名称: sub_429090
// 虚拟地址: 0x429090
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_429090(int32_t** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax = sub_45cfa0(0xc)
    int32_t* eax = sub_45cfa0(0xc)
    eax[3] += 1
    int32_t* edx = *eax
    
    if (edx == 0)
        sub_45ce30(eax)
        edx = *eax
    
    *eax = *edx
    *edx = 0
    edx[2] = 0
    *edx = *arg2
    edx[2] = arg1[1]
    void* result = arg1[1]
    
    if (result == 0)
        arg1[2] += 1
        *arg1 = edx
        arg1[1] = edx
        return result
    
    *(result + 4) = edx
    arg1[2] += 1
    arg1[1] = edx
    return result
}
