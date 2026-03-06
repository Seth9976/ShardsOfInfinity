// 函数名称: sub_4ebfd0
// 虚拟地址: 0x4ebfd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* const __thiscallsub_4ebfd0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(arg1 + 4))
            void* const result = eax_1 * 0x24c + *arg1
            
            if (*(result + 0x248) == arg2)
                return result
    
    return nullptr
}
