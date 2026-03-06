// 函数名称: sub_4e90f0
// 虚拟地址: 0x4e90f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e90f0(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    uint32_t result = arg2
    
    if (result != 0)
        uint32_t edx_1 = zx.d(result.w)
        
        if (edx_1 u< *(arg1 + 0x3c))
            void* ebx_2 = edx_1 * 0x24c + *(arg1 + 0x38)
            
            if (*(ebx_2 + 0x248) == result)
                int32_t* ecx = *(ebx_2 + 0x200)
                
                if (ecx != 0)
                    (*(*ecx + 8))(ecx)
                
                int32_t* ecx_1 = *(ebx_2 + 0x1fc)
                
                if (ecx_1 != 0)
                    (*(*ecx_1 + 8))(ecx_1)
                
                int32_t* ecx_2 = *(ebx_2 + 0x1f4)
                
                if (ecx_2 != 0)
                    (*(*ecx_2 + 8))(ecx_2)
                
                int32_t* ecx_3 = *(ebx_2 + 0x1f8)
                
                if (ecx_3 != 0)
                    (*(*ecx_3 + 8))(ecx_3)
                
                void* esi_1 = ebx_2 + 0x34
                int32_t i_1 = 8
                int32_t i
                
                do
                    int32_t* ecx_4 = *esi_1
                    
                    if (ecx_4 != 0)
                        (*(*ecx_4 + 8))(ecx_4)
                    
                    esi_1 += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                result = zx.d(*(ebx_2 + 0x248))
                int32_t ecx_5 = *(arg1 + 0x44)
                *(arg1 + 0x44) = result
                *(ebx_2 + 0x248) = ecx_5
                *(arg1 + 0x48) -= 1
    
    return result
}
