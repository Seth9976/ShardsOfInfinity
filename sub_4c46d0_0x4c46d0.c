// 函数名称: sub_4c46d0
// 虚拟地址: 0x4c46d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4c46d0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t var_18 = 0
    float xmm0 = sub_4c55f0(arg1)
    void* result = nullptr
    
    while (true)
        char* eax_1 = *arg1
        float var_8_1 = xmm0
        int32_t eax_3
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax_3 = 0
        else
            eax_3 = *(sub_44f000(arg1) + 8)
        
        if (result s>= eax_3)
            break
        
        void* result_1 = sub_4c4d30(arg1, result)
        void* result_2 = result_1
        xmm0 = sub_4c55f0(arg1)
        
        if ((xmm0 - var_8_1) * 0.660000026f + var_8_1 f> arg2)
            return result
        
        result = result_1
    
    char* eax_5 = *arg1
    
    if (eax_5 != 0 && *eax_5 != 0)
        return *(sub_44f000(arg1) + 8)
    
    return 0
}
