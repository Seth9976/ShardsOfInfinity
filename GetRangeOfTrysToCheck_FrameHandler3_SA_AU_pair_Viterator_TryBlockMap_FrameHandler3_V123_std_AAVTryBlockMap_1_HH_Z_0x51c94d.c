// 函数名称: ?GetRangeOfTrysToCheck@__FrameHandler3@@SA?AU?$pair@Viterator@TryBlockMap@__FrameHandler3@@V123@@std@@AAVTryBlockMap@1@HH@Z
// 虚拟地址: 0x51c94d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t**?GetRangeOfTrysToCheck@__FrameHandler3@@SA?AU?$pair@Viterator@TryBlockMap@__FrameHandler3@@V123@@std@@AAVTryBlockMap@1@HH@Z(int32_t** arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t* ebx = arg2
    void* eax = *ebx
    int32_t edi = *(eax + 0xc)
    int32_t ecx_2 = edi
    int32_t var_8_1 = ecx_2
    int32_t edx = ecx_2
    
    if (arg4 s>= 0)
        int32_t eax_2 = ecx_2 * 0x14 + *(eax + 0x10) + 8
        int32_t i = arg4
        
        do
            if (ecx_2 == 0xffffffff)
                goto label_51c9c9
            
            eax_2 -= 0x14
            ecx_2 -= 1
            ebx = arg2
            
            if (*(eax_2 - 4) s< arg3)
                ebx = arg2
                
                if (arg3 s<= *eax_2 || ecx_2 == 0xffffffff)
                label_51c9a2:
                    edx = var_8_1
                    i -= 1
                    var_8_1 = ecx_2
            else if (ecx_2 == 0xffffffff)
                goto label_51c9a2
        while (i s>= 0)
    
    if (edx u> edi || ecx_2 + 1 u> edx)
    label_51c9c9:
        sub_52f140()
        noreturn
    
    *arg1 = ebx
    arg1[2] = ebx
    arg1[1] = ecx_2 + 1
    arg1[3] = edx
    return arg1
}
