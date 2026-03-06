// 函数名称: sub_4f1ab0
// 虚拟地址: 0x4f1ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4f1ab0(int32_t** arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t* eax = sub_45cfa0(0x48)
    int32_t* eax = sub_45cfa0(0x48)
    eax[3] += 1
    int32_t* esi = *eax
    
    if (esi == 0)
        sub_45ce30(eax)
        esi = *eax
    
    *eax = *esi
    _memset(esi, 0, 0x48)
    *esi = *arg2
    *(esi + 0x10) = arg2[1]
    *(esi + 0x20) = arg2[2]
    *(esi + 0x30) = arg2[3]
    esi[0x11] = arg1[1]
    void* result = arg1[1]
    
    if (result == 0)
        arg1[2] += 1
        *arg1 = esi
        arg1[1] = esi
        return result
    
    *(result + 0x40) = esi
    arg1[2] += 1
    arg1[1] = esi
    return result
}
