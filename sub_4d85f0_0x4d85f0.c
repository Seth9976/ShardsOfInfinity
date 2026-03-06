// 函数名称: sub_4d85f0
// 虚拟地址: 0x4d85f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* const __thiscallsub_4d85f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_2 = zx.d(arg2.w)
        
        if (eax_2 u< *(arg1 + 0x4244))
            void* const result = eax_2 * 0x14c + *(arg1 + 0x4240)
            
            if (*(result + 0x148) != arg2)
                result = nullptr
            
            result.b = result != 0
            return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
