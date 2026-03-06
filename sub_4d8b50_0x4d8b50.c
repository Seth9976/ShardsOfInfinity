// 函数名称: sub_4d8b50
// 虚拟地址: 0x4d8b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __thiscallsub_4d8b50(void* arg1, int32_t arg2, uint32_t arg3, void* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: if (*(arg1 + 0x425c) s> 0)
    if (*(arg1 + 0x425c) s> 0)
        return 
    
    int32_t edi_1 = *(data_ce26e8 + 0x404c)
    
    if (edi_1 == 0xffffffff)
        return 
    
    int32_t* eax_2 = sub_4dd530(arg1 + 0x4240, arg3)
    void* eax_3 = data_ce26e8
    int32_t ecx_1 = *eax_2
    
    if (*(eax_3 + 0x4090) != ecx_1)
        *(eax_3 + 0x4090) = ecx_1
        (*__glewBindBuffer)(0x8892, ecx_1)
        eax_3 = data_ce19c4
        *(eax_3 + 0x10) += 1
    
    void* eax_5 = sub_4d8300(eax_3.b, edi_1, eax_2, arg4)
    
    if (eax_5.b == 0)
        sub_4d8630(eax_5, arg5, edi_1, 0)
        
        if (arg4 != 0)
            (*__glewBindBuffer)(0x8893, *sub_4dd530(arg1 + 0x4240, arg4))
        
        if (arg8 != 0)
            int32_t* eax_9 = sub_4dd530(arg1 + 0x4240, arg8)
            sub_4d8630(sub_4d6980(*eax_9), eax_9[0x37], edi_1, 1)
    
    uint32_t mode = *((arg2 << 2) + &data_572bc0)
    int32_t ebx_2
    
    if (arg4 == 0)
        ebx_2 = arg9
        int32_t first = eax_2[0x4e]
        
        if (ebx_2 s< 1)
            glDrawArrays(mode, first, arg7)
        else
            (*__glewDrawArraysInstanced)(mode, first, arg7, ebx_2)
    else
        if (arg2 - 1 u> 4)
            sub_44e4d0(arg2 - 1, &data_5559b1, "Halt", "c:\ax2017\engine\openglgraphics.cpp", 0x9ef, 
                "OpenGLInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t edi_2
        
        switch (arg2)
            case 1
                edi_2 = arg6
            case 2
                edi_2 = arg6 * 2
            case 3
                edi_2 = arg6 + 1
            case 4
                edi_2 = arg6 * 3
            case 5
                edi_2 = arg6 + 2
        
        int32_t* eax_12 = sub_4dd530(arg1 + 0x4240, arg4)
        ebx_2 = arg9
        int32_t edx_4
        edx_4.b = *(eax_12 + 0x13e) != 0
        
        if (ebx_2 s< 1)
            int32_t ecx_10 = eax_12[0x4e]
            (*__glewDrawRangeElements)(mode, ecx_10, arg7 + ecx_10, edi_2, (edx_4 << 1) + 0x1403, 0)
        else
            (*__glewDrawElementsInstanced)(mode, edi_2, (edx_4 << 1) + 0x1403, 0, ebx_2)
    
    void* ecx_12 = data_ce19c4
    int32_t edx_7 = 1
    
    if (ebx_2 s> 0)
        edx_7 = ebx_2
    
    *(ecx_12 + 0xc) += edx_7 * arg7
    *(ecx_12 + 8) += edx_7 * arg6
    *(ecx_12 + 4) += 1
}
