// 函数名称: sub_514980
// 虚拟地址: 0x514980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_514980(int32_t* arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg2 == 0)
    label_5149df:
        arg1[2] = 0
        arg1[3] = 0
        
        while (true)
            int32_t i = arg1[2]
            int32_t edi_3 = arg1[3]
            int32_t eax_9
            
            if (i s>= 1)
                eax_9 = edi_3
            else
                int32_t ebx_1 = arg1[1]
                
                do
                    char* eax_5 = *arg1
                    
                    if (eax_5 u< ebx_1)
                        arg2.b = *eax_5
                        *arg1 = &eax_5[1]
                    else
                        arg2.b = 0
                    
                    uint32_t eax_8 = zx.d(arg2.b) << i.b
                    i += 8
                    eax_9 = eax_8 | edi_3
                    arg1[2] = i
                    edi_3 = eax_9
                    arg1[3] = edi_3
                while (i s<= 0x18)
            
            int32_t i_1 = i - 1
            uint32_t eax_10 = eax_9 u>> 1
            arg1[3] = eax_10
            arg1[2] = i_1
            
            if (i_1 s< 2)
                int32_t edi_4 = arg1[1]
                uint32_t ebx_4 = eax_10
                
                do
                    char* eax_11 = *arg1
                    
                    if (eax_11 u< edi_4)
                        arg2.b = *eax_11
                        *arg1 = &eax_11[1]
                    else
                        arg2.b = 0
                    
                    uint32_t eax_14 = zx.d(arg2.b) << i_1.b
                    i_1 += 8
                    eax_10 = eax_14 | ebx_4
                    arg1[2] = i_1
                    ebx_4 = eax_10
                    arg1[3] = ebx_4
                while (i_1 s<= 0x18)
            
            arg1[3] = eax_10 u>> 2
            arg1[2] = i_1 - 2
            int32_t edx_3 = eax_10 & 3
            int32_t eax_17
            
            if (edx_3 != 0)
                if (edx_3 == 3)
                    break
                
                int32_t eax_19
                
                if (edx_3 != 1)
                    eax_19 = sub_5143f0(arg1)
                else
                    int32_t eax_18 = sub_513d80(i_1 - 2, 0x572df0, &arg1[8], 0x120)
                    
                    if (eax_18 == 0)
                        break
                    
                    eax_19 = sub_513d80(eax_18, 0x572dd0, &arg1[0x201], 0x20)
                
                if (eax_19 == 0)
                    break
                
                eax_17, arg2 = sub_5140c0(arg1)
            else
                eax_17, arg2 = sub_514840(arg1)
            
            if (eax_17 == 0)
                break
            
            if ((eax_9 & 1) != 0)
                return 1
    else
        char* ecx = *arg1
        int32_t edx = arg1[1]
        char eax
        
        if (ecx u< edx)
            eax = *ecx
            ecx = &ecx[1]
            *arg1 = ecx
        else
            eax = 0
        
        uint32_t eax_1 = zx.d(eax)
        
        if (ecx u< edx)
            edx.b = *ecx
            *arg1 = &ecx[1]
        else
            edx.b = 0
        
        uint32_t ecx_2 = zx.d(edx.b)
        
        if (modu.dp.d(0:((eax_1 << 8) + ecx_2), 0x1f) == 0 && (ecx_2.b & 0x20) == 0
                && (eax_1 & 0xf) == 8)
            goto label_5149df
    
    return 0
}
