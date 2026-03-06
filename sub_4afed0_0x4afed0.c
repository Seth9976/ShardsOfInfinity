// 函数名称: sub_4afed0
// 虚拟地址: 0x4afed0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4afed0(int32_t* arg1)
{
    // 第一条实际指令: char* esi = *arg1
    char* esi = *arg1
    int32_t ebx
    ebx.b = *esi
    uint32_t result = zx.d(ebx.b)
    int32_t eax_1
    
    if (ebx.b u< 0x80)
        eax_1 = 1
    else if ((ebx.b & 0xe0) == 0xc0)
        eax_1 = 2
    else if ((ebx.b & 0xf0) != 0xe0)
        ebx.b &= 0xf8
        eax_1 = 0
        
        if (ebx.b == 0xf0)
            eax_1 = 4
    else
        eax_1 = 3
    
    if (eax_1 == 2)
        esi = &esi[1]
        *arg1 = esi
        result = ((result & 0x1f) << 6) + (sx.d(*esi) & 0x3f)
    else
        if (eax_1 == 3)
            *arg1 = &esi[1]
            int32_t edx_8 = ((result & 0xf) << 6) + (zx.d(esi[1]) & 0x3f)
            *arg1 = &esi[2]
            int32_t eax_16 = sx.d(esi[2]) & 0x3f
            *arg1 = &esi[3]
            return (edx_8 << 6) + eax_16
        
        if (eax_1 == 4)
            *arg1 = &esi[1]
            int32_t edx_2 = ((result & 7) << 6) + (zx.d(esi[1]) & 0x3f)
            *arg1 = &esi[2]
            int32_t eax_8 = zx.d(esi[2]) & 0x3f
            *arg1 = &esi[3]
            int32_t eax_11 = sx.d(esi[3]) & 0x3f
            *arg1 = &esi[4]
            return (edx_2 << 0xc) + (eax_8 << 6) + eax_11
    
    *arg1 = &esi[1]
    return result
}
