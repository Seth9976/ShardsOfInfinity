// 函数名称: sub_494410
// 虚拟地址: 0x494410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_494410(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 4)
    int32_t* ecx = *(arg1 + 4)
    
    if (ecx == 0)
        return 
    
    while (true)
        char* const edx = &data_5559b1
        char const* const var_2c
        int32_t var_28
        char const* const var_24_3
        uint32_t eax
        char* ecx_7
        
        if (ecx == 0)
            var_24_3 = "XList<struct DefParseItem *>::GetNextIter"
            var_28 = 0x1a1
            var_2c = "c:\ax2017\engine\xlist.h"
            ecx_7 = "iter != NULL"
        else
            int32_t* ebx_1 = *ecx
            int32_t* ecx_1 = ecx[1]
            char* eax_1 = *ebx_1
            
            if (eax_1 != 0)
                edx = eax_1
            
            eax_1.b = ebx_1[4].b == 0
            uint32_t eax_2 = zx.d(eax_1.b)
            sub_4e0680(eax_2, edx, arg2, eax_2.b)
            bool var_10_1 = false
            
            if (ebx_1[2] == 0)
                char* edi_1 = ebx_1[1]
                
                if (edi_1 == 0 || *edi_1 == 0)
                    goto label_4944a9
                
                eax = arg2[1]
                
                if (eax == 1 || eax == 3)
                    sub_4e0590(arg2)
                    sub_4e04c0(arg2, edi_1)
                    goto label_4944a9
                
                var_24_3 = "XmlWriteLiteralString"
                var_28 = 0xbb
                var_2c = "c:\ax2017\engine\xmlwriter.cpp"
                ecx_7 = "pXmlWriter->mWriterState == XML_WRITE_OPEN_TAG || pXmlWriter->mWriterState == 
                    XML_WRITE_LITERAL"
            else
                sub_494410()
                var_10_1 = *(ebx_1 + 0x11) == 0
            label_4944a9:
                char* eax_3 = *ebx_1
                char* edx_3 = &data_5559b1
                
                if (eax_3 != 0)
                    edx_3 = eax_3
                
                eax = sub_4e0700(eax_3, edx_3, arg2, var_10_1)
                ecx = ecx_1
                
                if (ecx == 0)
                    break
                
                continue
        
        sub_44e4d0(eax, &data_5559b1, ecx_7, var_2c, var_28, var_24_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
}
