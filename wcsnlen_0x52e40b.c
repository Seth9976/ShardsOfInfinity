// 函数名称: _wcsnlen
// 虚拟地址: 0x52e40b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_wcsnlen(void arg1 @ invalid, int16_t* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t eax = data_65a2f4
    int32_t eax = data_65a2f4
    int32_t edi
    int32_t var_c = edi
    void* ecx_1
    int16_t* ecx
    int32_t result
    int16_t* esi
    
    if (eax s>= 5)
        ecx = arg2
        
        if ((ecx.b & 1) == 0)
            void* edx_2 = ecx & 0x1f
            int32_t edx_3 = neg.d(edx_2)
            uint32_t edx_6 = (sbb.d(edx_3, edx_3, edx_2 != 0) & (0x20 - edx_2)) u>> 1
            
            if (arg3 u< edx_6)
                edx_6 = arg3
            
            void* edi_1 = &ecx[edx_6]
            
            if (arg2 != edi_1)
                while (*ecx != 0)
                    ecx = &ecx[1]
                    
                    if (ecx == edi_1)
                        break
            
            result = (ecx - arg2) s>> 1
            
            if (result == edx_6)
                int16_t* i
                
                for (i = &arg2[result]; i != &arg2[((arg3 - edx_6) & 0xffffffe0) + result]; 
                        i = &i[0x10])
                    arg1 = __vpcmpeqw_ymmqq_ymmqq_memqq(arg1.32, *i)
                    
                    if (_mm256_movemask_epi8(arg1.32) != 0)
                        break
                
                void* ecx_4 = &arg2[arg3]
                
                if (i != ecx_4)
                    while (*i != 0)
                        i = &i[1]
                        
                        if (i == ecx_4)
                            break
                
                result = (i - arg2) s>> 1
                _mm256_zeroupper()
            
            return result
        
        esi = ecx
        void* edx = &ecx[arg3]
        
        if (esi != edx)
            while (*ecx != 0)
                ecx = &ecx[1]
                
                if (ecx == edx)
                    break
        
        ecx_1 = ecx - esi
    else if (eax s< 1)
        int16_t* ecx_10 = arg2
        void* esi_2 = &arg2[arg3]
        
        if (arg2 != esi_2)
            while (*ecx_10 != 0)
                ecx_10 = &ecx_10[1]
                
                if (ecx_10 == esi_2)
                    break
        
        ecx_1 = ecx_10 - arg2
    else
        ecx = arg2
        
        if ((ecx.b & 1) == 0)
            void* edx_9 = ecx & 0xf
            int32_t edx_10 = neg.d(edx_9)
            uint32_t edx_13 = (sbb.d(edx_10, edx_10, edx_9 != 0) & (0x10 - edx_9)) u>> 1
            
            if (arg3 u< edx_13)
                edx_13 = arg3
            
            void* edi_2 = &ecx[edx_13]
            
            if (arg2 != edi_2)
                while (*ecx != 0)
                    ecx = &ecx[1]
                    
                    if (ecx == edi_2)
                        break
            
            result = (ecx - arg2) s>> 1
            
            if (result != edx_13)
                return result
            
            void* i_1
            
            for (i_1 = &arg2[result]; i_1 != &arg2[((arg3 - edx_13) & 0xfffffff0) + result]; 
                    i_1 += 0x10)
                if (_mm_movemask_epi8(_mm_cmpeq_epi16(*i_1, zx.o(0))) != 0)
                    break
            
            void* ecx_9 = &arg2[arg3]
            
            if (i_1 != ecx_9)
                while (*i_1 != 0)
                    i_1 += 2
                    
                    if (i_1 == ecx_9)
                        break
            
            ecx_1 = i_1 - arg2
        else
            esi = ecx
            void* edx_7 = &ecx[arg3]
            
            if (esi != edx_7)
                while (*ecx != 0)
                    ecx = &ecx[1]
                    
                    if (ecx == edx_7)
                        break
            
            ecx_1 = ecx - esi
    return ecx_1 s>> 1
}
