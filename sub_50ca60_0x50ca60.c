// 函数名称: sub_50ca60
// 虚拟地址: 0x50ca60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_50ca60(int32_t arg1, char* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* result = arg3
    
    if (*arg4 s>= 8)
        int32_t* ebx_1 = result - 8
        
        do
            void* eax_2
            void* edi_2
            
            if (result == 0)
                edi_2 = 2
            label_50ca98:
                void* var_18_1 = edi_2 + 8
                int32_t* eax_4 = ebx_1
                
                if (result == 0)
                    eax_4 = nullptr
                
                int32_t* var_1c_1 = eax_4
                eax_2 = sub_52383b()
                
                if (eax_2 != 0)
                    if (result == 0)
                        *(eax_2 + 4) = result
                    
                    result = eax_2 + 8
                    ebx_1 = result - 8
                    *ebx_1 = edi_2
            else
                int32_t edi_1 = *ebx_1
                
                if (*(result - 4) + 1 s>= edi_1)
                    edi_2 = (edi_1 << 1) + 1
                    goto label_50ca98
            int32_t ecx = *(result - 4)
            eax_2.b = *arg2
            *arg2 u>>= 8
            *(result + ecx) = eax_2.b
            *(result - 4) += 1
            *arg4 -= 8
        while (*arg4 s>= 8)
    
    return result
}
