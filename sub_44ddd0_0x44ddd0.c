// 函数名称: sub_44ddd0
// 虚拟地址: 0x44ddd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_44ddd0(int32_t* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    
    while (true)
        void* result_1
        
        if (result != 0)
            result_1 = *arg1
            result += 0x38
        else
            result = *arg1
            result_1 = result
        
        void* edx_3 = result_1 + arg1[1] * 0x38
        
        if (result u>= edx_3)
            break
        
        while (true)
            int32_t ecx_1 = *(result + 0x34)
            
            if ((ecx_1 & 0xffff0000) != 0)
                int32_t edx_4 = arg1[3]
                arg1[3] = zx.d(ecx_1.w)
                *(result + 0x34) = edx_4
                arg1[4] -= 1
                break
            
            result += 0x38
            
            if (result u>= edx_3)
                goto label_44de13
    
    label_44de13:
    arg1[3] = 0
    arg1[1] = 0
    return result
}
