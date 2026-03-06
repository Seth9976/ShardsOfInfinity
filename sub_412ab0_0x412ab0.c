// 函数名称: sub_412ab0
// 虚拟地址: 0x412ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_412ab0(int32_t* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    
    while (true)
        void* result_1
        
        if (result != 0)
            result_1 = *arg1
            result += 0x1d0
        else
            result = *arg1
            result_1 = result
        
        void* edx_1 = result_1 + arg1[1] * 0x1d0
        
        if (result u>= edx_1)
            break
        
        while (true)
            int32_t ecx_1 = *(result + 0x1c8)
            
            if ((ecx_1 & 0xffff0000) != 0)
                int32_t edx_2 = arg1[3]
                arg1[3] = zx.d(ecx_1.w)
                *(result + 0x1c8) = edx_2
                arg1[4] -= 1
                break
            
            result += 0x1d0
            
            if (result u>= edx_1)
                goto label_412af7
    
    label_412af7:
    arg1[3] = 0
    arg1[1] = 0
    return result
}
