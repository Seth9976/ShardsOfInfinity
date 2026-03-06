// 函数名称: sub_4b92a0
// 虚拟地址: 0x4b92a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4b92a0(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void*** edi = *(arg1 + 4)
    
    if (edi == 0)
        return 
    
    while (true)
        void*** ebx_1 = edi
        char const* const var_20
        int32_t var_1c
        char const* const var_18
        int32_t eax
        char* ecx_5
        
        if (edi == 0)
            var_18 = "XList<struct AnimSet *>::GetNextIter"
            var_1c = 0x1a1
            var_20 = "c:\ax2017\engine\xlist.h"
            ecx_5 = "iter != NULL"
        else
            void** edx_1 = *edi
            void* ecx = &edi[1]
            edi = *ecx
            float xmm3_2 = *edx_1 f* data_5b0f3c
            float xmm0_1 = edx_1[1]
            edx_1[2] = xmm0_1
            float xmm0_2 = xmm0_1 + xmm3_2
            edx_1[1] = xmm0_2
            
            if (not(xmm3_2 <= 0f))
                eax = edx_1[7]
                
                if (eax == 1)
                    if (not(xmm0_2 < 1f))
                        edx_1[1] = 0x3f800000
                    
                    goto label_4b9373
                
                if (eax == 0)
                    if (not(xmm0_2 <= 1f))
                        float i
                        
                        do
                            i = edx_1[1] f- 1f
                            edx_1[1] = i
                        while (i > 1f)
                    
                    goto label_4b9373
                
                var_18 = "AnimSetUpdateTime"
                var_1c = 0x107
                var_20 = "c:\ax2017\engine\animation.cpp"
                ecx_5 = "Halt"
            else if (0 f<= xmm3_2)
            label_4b9373:
                float xmm0_5 = edx_1[6]
                float xmm3_3 = edx_1[5]
                
                if (xmm0_5 <= 0f)
                    bool cond:3_1
                    
                    if (0 f<= xmm0_5)
                        cond:3_1 = 0f < xmm3_3
                    else
                        float xmm0_7 = xmm0_5 + xmm3_3
                        edx_1[5] = xmm0_7
                        cond:3_1 = 0f < xmm0_7
                    
                    if (not(cond:3_1))
                        sub_4b8f40(arg1, edx_1)
                        void* ecx_2 = ebx_1[2]
                        int32_t eax_1 = *ecx
                        
                        if (ecx_2 == 0)
                            *(arg1 + 4) = eax_1
                        else
                            *(ecx_2 + 4) = eax_1
                        
                        void* ecx_3 = *ecx
                        int32_t eax_2 = ebx_1[2]
                        
                        if (ecx_3 == 0)
                            *(arg1 + 8) = eax_2
                        else
                            *(ecx_3 + 8) = eax_2
                        
                        *(arg1 + 0xc) -= 1
                        eax = sub_45d050(ebx_1, 0xc)
                else
                    float xmm0_6 = xmm0_5 + xmm3_3
                    edx_1[5] = xmm0_6
                    
                    if (not(xmm0_6 <= 1f))
                        edx_1[5] = 0x3f800000
                        edx_1[6] = 0
                
                if (edi == 0)
                    break
                
                continue
            else
                eax = edx_1[7]
                
                if (eax == 1)
                    if (not(0 f< xmm0_2))
                        edx_1[1] = 0
                    
                    goto label_4b9373
                
                if (eax == 0)
                    if (not(0 f<= xmm0_2))
                        float i_1
                        
                        do
                            i_1 = edx_1[1] f+ 1f
                            edx_1[1] = i_1
                        while (0f > i_1)
                    
                    goto label_4b9373
                
                var_18 = "AnimSetUpdateTime"
                var_1c = 0x11c
                var_20 = "c:\ax2017\engine\animation.cpp"
                ecx_5 = "Halt"
        
        sub_44e4d0(eax, &data_5559b1, ecx_5, var_20, var_1c, var_18)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
}
