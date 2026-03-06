// 函数名称: sub_4b3810
// 虚拟地址: 0x4b3810
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b3810(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t var_1c
    char const* const var_18
    int32_t* eax
    char* ecx
    
    if (arg1[1] == 0x20)
        eax = sub_4459f0(arg1)
        int32_t result = 0
        int32_t ebx_1 = eax[1]
        
        if (ebx_1 s> 0)
            int32_t* edi_2 = *eax + 4
            
            while (true)
                char* eax_1 = *edi_2
                char* ecx_1 = arg2
                
                while (true)
                    char edx = *ecx_1
                    char temp0_1 = *eax_1
                    bool c_1 = edx u< temp0_1
                    
                    if (edx == temp0_1)
                        if (edx == 0)
                            eax = nullptr
                            break
                        
                        edx = ecx_1[1]
                        char temp1_1 = eax_1[1]
                        c_1 = edx u< temp1_1
                        
                        if (edx == temp1_1)
                            ecx_1 = &ecx_1[2]
                            eax_1 = &eax_1[2]
                            
                            if (edx != 0)
                                continue
                            
                            eax = nullptr
                            break
                    
                    eax = sbb.d(eax_1, eax_1, c_1) | 1
                    break
                
                if (eax == 0)
                    return result
                
                result += 1
                edi_2 = &edi_2[0x2e]
                
                if (result s>= ebx_1)
                    break
        
        var_18 = "FabElement"
        var_1c = 0x753
        ecx = "Halt"
    else
        var_18 = "FabDefGet"
        var_1c = 0xe7
        ecx = "ptr->assetType == ASSET_TYPE_FAB"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\fabdef.cpp", var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
