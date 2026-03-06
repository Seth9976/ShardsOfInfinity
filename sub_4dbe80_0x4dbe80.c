// 函数名称: sub_4dbe80
// 虚拟地址: 0x4dbe80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4dbe80(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t edx_1 = zx.d(arg2.w)
        
        if (edx_1 u< *(arg1 + 0x4244))
            int32_t* edi_2 = edx_1 * 0x14c + *(arg1 + 0x4240)
            
            if (edi_2[0x52] == arg2)
                if (edi_2[0x4f].b != 0)
                    int32_t eax_1 = edi_2[0x37]
                    
                    if (eax_1 u> 0x10)
                        sub_44e4d0(eax_1, &data_5559b1, 
                            "vertexBufferData->mBufferFormat >= 0 && vertexBufferData->mBufferFormat < 
                                VERTEX_FORMAT_COUNT", 
                            "c:\ax2017\engine\openglgraphics.cpp", 0x13a6, 
                            "OpenGLInterface::GetSortVertexBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    void* esi_3 = data_ce26e8 + 0x4370 + eax_1 * 0xc0
                    int32_t eax_2 = xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
                        *arg3, 0)
                    
                    for (int32_t i = 0; i s< 0x10; )
                        if (*(esi_3 + 4) == eax_2)
                            return *esi_3
                        
                        i += 1
                        esi_3 += 0xc
                
                return *edi_2
    
    return 0
}
