// 函数名称: sub_493ab0
// 虚拟地址: 0x493ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_493ab0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    uint32_t* esi_1 = *arg2 + arg1
    int32_t* var_8_1 = arg2
    void* ecx = arg2[3]
    uint32_t eax_1
    bool cond:0_1
    
    switch (*(ecx + 0x10) - 1)
        case 0, 1, 2, 3, 9, 0xd, 0xf
            void* ecx_1 = &arg2[9]
            int32_t edx = arg2[0xd]
            int32_t i_3 = edx - 4
            
            if (edx u>= 4)
                int32_t i_1
                
                do
                    if (*esi_1 != *ecx_1)
                        goto label_493afd
                    
                    esi_1 = &esi_1[1]
                    ecx_1 += 4
                    i_1 = i_3
                    i_3 -= 4
                while (i_1 u>= 4)
            
            if (i_3 == 0xfffffffc)
                eax_1.b = 1
                return eax_1
            
        label_493afd:
            eax_1.b = *esi_1
            
            if (eax_1.b != *ecx_1)
                eax_1.b = 0
                return eax_1
            
            if (i_3 == 0xfffffffd)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(esi_1 + 1)
            
            if (eax_1.b != *(ecx_1 + 1))
                eax_1.b = 0
                return eax_1
            
            if (i_3 == 0xfffffffe)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(esi_1 + 2)
            
            if (eax_1.b != *(ecx_1 + 2))
                eax_1.b = 0
                return eax_1
            
            if (i_3 == 0xffffffff)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(esi_1 + 3)
            cond:0_1 = eax_1.b != *(ecx_1 + 3)
        case 4, 5, 8, 0xb, 0x10
            eax_1.b = 0
            return eax_1
        case 7
            eax_1 = *esi_1
            
            if (eax_1 == 0)
                eax_1.b = 1
                return eax_1
            
            char* ecx_4 = arg2[9]
            
            while (true)
                arg2.b = *eax_1
                char temp3_1 = *ecx_4
                bool c_1 = arg2.b u< temp3_1
                
                if (arg2.b == temp3_1)
                    if (arg2.b == 0)
                        cond:0_1 = false
                        break
                    
                    arg2.b = *(eax_1 + 1)
                    char temp5_1 = ecx_4[1]
                    c_1 = arg2.b u< temp5_1
                    
                    if (arg2.b == temp5_1)
                        eax_1 += 2
                        ecx_4 = &ecx_4[2]
                        
                        if (arg2.b != 0)
                            continue
                        
                        cond:0_1 = false
                        break
                
                cond:0_1 = (sbb.d(eax_1, eax_1, c_1) | 1) != 0
                break
        case 0xe
            int32_t eax_2 = sub_48ad00(var_8_1[9], arg2[8])
            eax_2.b = *esi_1 == eax_2
            return eax_2
        default
            void* edi_1 = arg2[9]
            
            if (esi_1 == edi_1)
                eax_1.b = 1
                return eax_1
            
            if (edi_1 == 0)
                if (*(ecx + 8) == edi_1)
                    eax_1.b = 1
                    return eax_1
                
                int32_t ebx_1 = 0
                
                while (true)
                    void* edi_2 = arg2[3]
                    ebx_1 += 1
                    *(edi_2 + 4)
                    
                    if (ebx_1 s>= *(edi_2 + 8))
                        ebx_1 = 0xffffffff
                    
                    if (sub_493ab0().b == 0)
                        break
                    
                    arg2 = var_8_1
                    
                    if (ebx_1 == 0xffffffff)
                        eax_1.b = 1
                        return eax_1
                
                eax_1.b = 0
                return eax_1
            
            eax_1 = sub_48acc0(ecx)
            int32_t i_2 = eax_1 - 4
            
            if (eax_1 u>= 4)
                int32_t i
                
                do
                    if (*esi_1 != *edi_1)
                        goto label_493c01
                    
                    esi_1 = &esi_1[1]
                    edi_1 += 4
                    i = i_2
                    i_2 -= 4
                while (i u>= 4)
            
            if (i_2 == 0xfffffffc)
                eax_1.b = 1
                return eax_1
            
        label_493c01:
            eax_1.b = *esi_1
            
            if (eax_1.b != *edi_1)
                eax_1.b = 0
                return eax_1
            
            if (i_2 == 0xfffffffd)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(esi_1 + 1)
            
            if (eax_1.b != *(edi_1 + 1))
                eax_1.b = 0
                return eax_1
            
            if (i_2 == 0xfffffffe)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(esi_1 + 2)
            
            if (eax_1.b != *(edi_1 + 2))
                eax_1.b = 0
                return eax_1
            
            if (i_2 == 0xffffffff)
                eax_1.b = 1
                return eax_1
            
            eax_1.b = *(esi_1 + 3)
            
            if (eax_1.b == *(edi_1 + 3))
                eax_1.b = 1
                return eax_1
            
            eax_1.b = 0
            return eax_1
    
    if (cond:0_1)
        eax_1.b = 0
        return eax_1
    
    eax_1.b = 1
    return eax_1
}
