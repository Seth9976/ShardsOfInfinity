// 函数名称: sub_48c040
// 虚拟地址: 0x48c040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_48c040(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    void* result = arg2
    
    if (arg3 != 0)
        if (arg3[4] - 1 u> 0x10)
            for (int32_t* i = *arg4; i != 0; i = i[1])
                if (*i == arg3)
                    return result
            
            int32_t* eax_7 = sub_45cfa0(0xc)
            eax_7[3] += 1
            int32_t* ecx_1 = *eax_7
            
            if (ecx_1 == 0)
                sub_45ce30(eax_7)
                ecx_1 = *eax_7
            
            *eax_7 = *ecx_1
            ecx_1[2] = 0
            *ecx_1 = arg3
            ecx_1[1] = 0
            ecx_1[2] = arg4[1]
            void* eax_10 = arg4[1]
            
            if (eax_10 == 0)
                *arg4 = ecx_1
            else
                *(eax_10 + 4) = ecx_1
            
            arg4[2] += 1
            void* ebx_2 = &arg3[3]
            arg4[1] = ecx_1
            
            if (arg5 != 0)
                int32_t var_1c_1 = *ebx_2
                int32_t var_20_1 = *arg3
                sub_44e260("      def %s size %d")
            
            int32_t i_7 = 4
            int32_t i_1
            
            do
                char eax_11 = *ebx_2
                ebx_2 += 1
                result = result u>> 8 ^ *(((zx.d(eax_11) ^ zx.d(result.b)) << 2) + &data_5720f8)
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
            void* ecx_3 = &arg3[6]
            int32_t i_8 = 4
            int32_t i_2
            
            do
                char eax_14 = *ecx_3
                ecx_3 += 1
                result = result u>> 8 ^ *(((zx.d(eax_14) ^ zx.d(result.b)) << 2) + &data_5720f8)
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
            void* ecx_4 = &arg3[7]
            int32_t i_9 = 4
            int32_t i_3
            
            do
                char eax_17 = *ecx_4
                ecx_4 += 1
                result = result u>> 8 ^ *(((zx.d(eax_17) ^ zx.d(result.b)) << 2) + &data_5720f8)
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            char* ecx_5 = *arg3
            char* edx_2 = ecx_5
            uint32_t eax_19
            
            do
                eax_19.b = *edx_2
                edx_2 = &edx_2[1]
            while (eax_19.b != 0)
            
            result = sub_4950f0(eax_19, edx_2 - &edx_2[1], ecx_5, result)
            
            if (arg3[2] != 0)
                for (int32_t i_4 = 0; i_4 != 0xffffffff; )
                    int32_t ecx_8 = i_4 * 0xf
                    i_4 += 1
                    
                    if (i_4 s>= arg3[2])
                        i_4 = 0xffffffff
                    
                    int32_t* eax_22 = arg3[1] + (ecx_8 << 2)
                    result = sub_48be20(eax_22, result, eax_22, arg4, arg5)
                    
                    if (arg5 != 0)
                        void* result_1 = result
                        int32_t var_20_3 = eax_22[1]
                        int32_t var_24_1 = *arg3
                        sub_44e260("      def %s field %s %x")
        else
            char* edx = *arg3
            char* ecx = edx
            void* edi_1 = &ecx[1]
            int32_t eax_1
            
            do
                eax_1.b = *ecx
                ecx = &ecx[1]
            while (eax_1.b != 0)
            void* i_6 = ecx - edi_1
            
            if (ecx != edi_1)
                void* i_5
                
                do
                    char eax_2 = *edx
                    edx = &edx[1]
                    result = result u>> 8 ^ *(((zx.d(eax_2) ^ zx.d(result.b)) << 2) + &data_5720f8)
                    i_5 = i_6
                    i_6 -= 1
                while (i_5 != 1)
    
    return result
}
