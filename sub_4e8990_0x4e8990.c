// 函数名称: sub_4e8990
// 虚拟地址: 0x4e8990
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e8990(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t var_8 = arg1
    uint32_t var_8 = arg1
    uint32_t result = arg1
    
    if (arg2 != 0)
        uint32_t edx_1 = zx.d(arg2.w)
        
        if (edx_1 u< *(result + 0x3c))
            int32_t* edi_2 = edx_1 * 0x24c + *(result + 0x38)
            
            if (edi_2[0x92] == arg2)
                int32_t* ecx_1 = edi_2[6]
                
                if (ecx_1 != 0)
                    (*(*ecx_1 + 8))(ecx_1)
                
                void* esi_1 = &edi_2[0x81]
                int32_t i_1 = 0x11
                int32_t i
                
                do
                    int32_t* ecx_2 = *esi_1
                    
                    if (ecx_2 != 0)
                        (*(*ecx_2 + 8))(ecx_2)
                    
                    esi_1 += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                int32_t eax_2 = *edi_2
                int32_t* ecx_3
                
                if (eax_2 == 3)
                    ecx_3 = edi_2[0xa]
                else
                    if (eax_2 != 4)
                        sub_44e4d0(eax_2 - 4, &data_5559b1, "Halt", 
                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x3fd, 
                            "Dx11GraphicsInterface::ReleaseShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    ecx_3 = edi_2[0xb]
                
                if (ecx_3 != 0)
                    (*(*ecx_3 + 8))(ecx_3)
                
                uint32_t result_1 = result
                result = zx.d(edi_2[0x92].w)
                int32_t ecx_4 = *(result_1 + 0x44)
                *(result_1 + 0x44) = result
                edi_2[0x92] = ecx_4
                *(result_1 + 0x48) -= 1
    
    return result
}
