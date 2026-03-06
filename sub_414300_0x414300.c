// 函数名称: sub_414300
// 虚拟地址: 0x414300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_414300(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    sub_414460(&data_5bb160, &i_1)
    
    for (void* i = i_1; i != 0xffffffff; i = i_1)
        int32_t ecx = *(i + 0x618)
        
        if (ecx != 0xffffffff)
            int32_t edx = 0
            *arg2 = 0
            
            if (ecx s> 0)
                *arg2 = 2
                edx = 2
            
            if (ecx s< *(i + 0x400) - 1)
                *arg2 = edx | 4
            
            *arg1 = i
            int32_t eax_2
            eax_2.b = 1
            return eax_2
        
        sub_414460(&data_5bb160, &i_1)
    
    void* eax
    eax.b = 0
    return eax
}
