// 函数名称: _strnlen
// 虚拟地址: 0x52e2e9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*_strnlen(void arg1 @ invalid, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t eax = data_65a2f4
    int32_t eax = data_65a2f4
    int32_t edi
    int32_t var_c = edi
    void* result
    
    if (eax s< 5)
        if (eax s< 1)
            char* ecx_4 = arg2
            void* eax_10 = arg3 + arg2
            
            if (arg2 != eax_10)
                while (*ecx_4 != 0)
                    ecx_4 = &ecx_4[1]
                    
                    if (ecx_4 == eax_10)
                        break
            
            return ecx_4 - arg2
        
        void* edx_6 = arg2 & 0xf
        int32_t edx_7 = neg.d(edx_6)
        void* edx_9 = sbb.d(edx_7, edx_7, edx_6 != 0) & (0x10 - edx_6)
        
        if (arg3 u< edx_9)
            edx_9 = arg3
        
        void* ecx_2 = edx_9 + arg2
        char* i_3 = arg2
        
        if (arg2 != ecx_2)
            while (*i_3 != 0)
                i_3 = &i_3[1]
                
                if (i_3 == ecx_2)
                    break
        
        result = i_3 - arg2
        
        if (result == edx_9)
            char* i = i_3
            void* edi_8 = ((arg3 - edx_9) & 0xfffffff0) + i_3
            
            if (i_3 != edi_8)
                do
                    if (_mm_movemask_epi8(_mm_cmpeq_epi8(*i, zx.o(0))) != 0)
                        break
                    
                    i = &i[0x10]
                while (i != edi_8)
            
            for (; i != arg3 + arg2; i = &i[1])
                if (*i == 0)
                    break
            
            return i - arg2
    else
        void* edx_1 = arg2 & 0x1f
        int32_t edx_2 = neg.d(edx_1)
        void* edx_4 = sbb.d(edx_2, edx_2, edx_1 != 0) & (0x20 - edx_1)
        
        if (arg3 u< edx_4)
            edx_4 = arg3
        
        int32_t ecx = edx_4 + arg2
        char* i_2 = arg2
        
        if (arg2 != ecx)
            while (*i_2 != 0)
                i_2 = &i_2[1]
                
                if (i_2 == ecx)
                    break
        
        result = i_2 - arg2
        
        if (result == edx_4)
            char* i_1 = i_2
            void* edi_4 = ((arg3 - edx_4) & 0xffffffe0) + i_2
            
            if (i_2 != edi_4)
                do
                    arg1 = __vpcmpeqb_ymmqq_ymmqq_memqq(arg1.32, *i_1)
                    
                    if (_mm256_movemask_epi8(arg1.32) != 0)
                        break
                    
                    i_1 = &i_1[0x20]
                while (i_1 != edi_4)
            
            for (; i_1 != arg3 + arg2; i_1 = &i_1[1])
                if (*i_1 == 0)
                    break
            
            result = i_1 - arg2
            _mm256_zeroupper()
    
    return result
}
