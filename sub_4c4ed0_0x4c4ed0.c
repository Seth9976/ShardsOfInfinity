// 函数名称: sub_4c4ed0
// 虚拟地址: 0x4c4ed0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __thiscallsub_4c4ed0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 != 0x2e)
    if (arg2 != 0x2e)
        void* eax_4
        
        if (arg2 != 8)
            int32_t eax
            
            if (arg2 == 0x24)
                if (arg3 != 1)
                    arg1[3] = 0
                
                arg1[1] = 0
                eax.b = 1
                arg1[2] = 0
                return eax
            
            if (arg2 == 0x23)
                eax_4 = sub_44f8a0(arg1)
                arg1[1] = eax_4
                
                if (arg3 != 1)
                    arg1[3] = eax_4
                    eax_4.b = 1
                    arg1[2] = 0
                    return eax_4
            else if (arg2 != 0x25)
                if (arg2 != 0x27)
                    if (arg2 != 0x41 || arg3 != 2)
                        eax.b = 0
                        return eax
                    
                    sub_4c4d00(arg1)
                    char* eax_11
                    eax_11.b = 1
                    return eax_11
                
                if ((arg3.b & 1) == 0)
                    void* ecx_4 = arg1[1]
                    void* eax_10 = arg1[3]
                    
                    if (ecx_4 != eax_10)
                        if (ecx_4 s>= eax_10)
                            eax_10 = ecx_4
                        
                        arg1[2] = 0
                        arg1[1] = eax_10
                        arg1[3] = eax_10
                        eax_10.b = 1
                        return eax_10
                    
                    if (ecx_4 s< sub_44f8a0(arg1))
                        eax_4 = sub_4c4d30(arg1, ecx_4)
                        arg1[1] = eax_4
                        arg1[3] = eax_4
                else
                    void* edi_1 = arg1[1]
                    
                    if (edi_1 != sub_44f8a0(arg1))
                        arg1[1] = sub_4c4d30(arg1, edi_1)
                        void* eax_9
                        eax_9.b = 1
                        arg1[2] = 0
                        return eax_9
            else
                eax_4 = arg1[1]
                
                if ((arg3.b & 1) == 0)
                    void* ecx_1 = arg1[3]
                    
                    if (eax_4 != ecx_1)
                        if (eax_4 s<= ecx_1)
                            ecx_1 = eax_4
                        
                        arg1[2] = 0
                        arg1[1] = ecx_1
                        eax_4.b = 1
                        arg1[3] = ecx_1
                        return eax_4
                    
                    if (eax_4 s> 0)
                        int32_t eax_8 = sub_4c4e30(arg1, eax_4)
                        arg1[1] = eax_8
                        arg1[3] = eax_8
                        eax_8.b = 1
                        arg1[2] = 0
                        return eax_8
                else if (eax_4 s> 0)
                    arg1[1] = sub_4c4e30(arg1, eax_4)
                    int32_t eax_7
                    eax_7.b = 1
                    arg1[2] = 0
                    return eax_7
            
            goto label_4c5079
        
        eax_4 = arg1[1]
        
        if (eax_4 == arg1[3])
            if (eax_4 s<= 0)
            label_4c5079:
                arg1[2] = 0
                eax_4.b = 1
                return eax_4
            
            int32_t eax_5 = sub_4c4e30(arg1, eax_4)
            int32_t var_10_3 = eax_5
            arg1[1] = eax_5
            arg1[3] = eax_5
            sub_4c4870(arg1)
            arg1[2] = 0
            struct _EXCEPTION_REGISTRATION_RECORD** eax_6
            eax_6.b = 1
            return eax_6
    else
        int32_t eax_1 = arg1[1]
        
        if (eax_1 == arg1[3])
            int32_t var_10_1 = eax_1
            sub_4c4870(arg1)
            arg1[2] = 0
            struct _EXCEPTION_REGISTRATION_RECORD** eax_3
            eax_3.b = 1
            return eax_3
    
    sub_4c4770(arg1)
    arg1[2] = 0
    int32_t* eax_2
    eax_2.b = 1
    return eax_2
}
