// 函数名称: sub_48bcd0
// 虚拟地址: 0x48bcd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_48bcd0(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: void* eax = arg3
    void* eax = arg3
    void* var_10 = eax
    void* esi = arg2
    
    if (eax == 0)
        return eax
    
    int32_t i_1 = 0
    
    if (*(eax + 8) s> 0)
        int32_t ecx = 0
        int32_t var_c_1 = 0
        int32_t i
        
        do
            int32_t* ebx_2 = *(eax + 4) + ecx
            
            if (arg5 != 0)
                int32_t var_20_1 = *ebx_2
                int32_t var_24_1 = ebx_2[1]
                sub_44e260("              table %s pos %d")
            
            int32_t* ecx_1 = ebx_2
            int32_t j_6 = 4
            int32_t j
            
            do
                char eax_1 = *ecx_1
                ecx_1 += 1
                esi = esi u>> 8 ^ *(((zx.d(eax_1) ^ zx.d(esi.b)) << 2) + &data_5720f8)
                j = j_6
                j_6 -= 1
            while (j != 1)
            char* edx = ebx_2[1]
            char* ecx_2 = edx
            void* edi_1 = &ecx_2[1]
            uint32_t eax_3
            
            do
                eax_3.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (eax_3.b != 0)
            
            void* j_4 = ecx_2 - edi_1
            
            if (ecx_2 != edi_1)
                void* j_1
                
                do
                    char eax_4 = *edx
                    edx = &edx[1]
                    eax_3 = zx.d(eax_4) ^ zx.d(esi.b)
                    esi = esi u>> 8 ^ *((eax_3 << 2) + &data_5720f8)
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
            
            void* edi_2 = &ebx_2[8]
            esi = sub_48c040(eax_3, esi, ebx_2[3], arg4, arg5)
            int32_t j_5 = 4
            int32_t j_2
            
            do
                char eax_7 = *edi_2
                edi_2 += 1
                esi = esi u>> 8 ^ *(((zx.d(eax_7) ^ zx.d(esi.b)) << 2) + &data_5720f8)
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
            void* ecx_4 = &ebx_2[0xa]
            int32_t j_7 = 4
            int32_t j_3
            
            do
                char eax_10 = *ecx_4
                ecx_4 += 1
                esi = esi u>> 8 ^ *(((zx.d(eax_10) ^ zx.d(esi.b)) << 2) + &data_5720f8)
                j_3 = j_7
                j_7 -= 1
            while (j_3 != 1)
            char eax_13 = (ebx_2[0xa]).b
            
            if ((eax_13 & 3) != 0)
                esi = sub_48bc60(ebx_2[7], esi)
            else if ((eax_13 & 0x20) != 0)
                ebx_2[7]
                esi = sub_48bcd0(arg4, arg5.d)
            
            i = i_1 + 1
            ecx = var_c_1 + 0x3c
            i_1 = i
            eax = var_10
            var_c_1 = ecx
        while (i s< *(var_10 + 8))
    
    return esi
}
