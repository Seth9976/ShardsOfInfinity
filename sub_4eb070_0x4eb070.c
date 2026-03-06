// 函数名称: sub_4eb070
// 虚拟地址: 0x4eb070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4eb070(void* arg1, int32_t arg2, int32_t arg3, uint32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    void* result = sub_4e91b0(arg5)
    
    if (result != 0)
        int32_t* ecx_1 = *(arg1 + 8)
        (*(*ecx_1 + 0x44))(ecx_1, result)
        void* eax = data_ce19c4
        *(eax + 0x10) += 1
        int32_t* eax_1 = *(arg1 + 8)
        uint32_t eax_2 = (*(*eax_1 + 0x60))(eax_1, arg2)
        void* edx_2 = data_ce26f4
        int32_t* esi_1
        
        if (arg3 != 0)
            eax_2 = zx.d(arg3.w)
            
            if (eax_2 u< *(edx_2 + 0x3c))
                int32_t esi_2 = eax_2 * 0x24c
                eax_2 = 0
                esi_1 = esi_2 + *(edx_2 + 0x38)
                
                if (esi_1[0x92] != arg3)
                    esi_1 = nullptr
            else
                esi_1 = nullptr
        else
            esi_1 = nullptr
        
        int32_t var_1c_3
        char const* const ecx_4
        
        if (*esi_1 != 0)
            char const* const var_18_2 = "Dx11GraphicsInterface::DrawPrimitive"
            var_1c_3 = 0x8f4
            ecx_4 = "vertexBufferData->mBufferType == DX11BUFFER_VERTEX"
        label_4eb23e:
            sub_44e4d0(eax_2, &data_5559b1, ecx_4, "c:\ax2017\engine\windows\windowsdx11.cpp", 
                var_1c_3, "Dx11GraphicsInterface::DrawPrimitive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        arg5 = 0
        int32_t eax_3 = sub_4f24b0()
        int32_t* ecx_6 = *(arg1 + 8)
        int32_t var_8 = eax_3
        (*(*ecx_6 + 0x48))(ecx_6, 0, 1, &esi_1[6], &var_8, &arg5)
        eax_2 = arg4
        
        if (eax_2 != 0)
            void* edx_4 = data_ce26f4
            uint32_t ecx_7 = zx.d(eax_2.w)
            int32_t* ecx_8
            
            if (ecx_7 u< *(edx_4 + 0x3c))
                ecx_8 = ecx_7 * 0x24c + *(edx_4 + 0x38)
                
                if (ecx_8[0x92] != eax_2)
                    ecx_8 = nullptr
            else
                ecx_8 = nullptr
            
            if (*ecx_8 != 1)
                char const* const var_18_4 = "Dx11GraphicsInterface::DrawPrimitive"
                var_1c_3 = 0x8fd
                ecx_4 = "indexBufferData->mBufferType == DX11BUFFER_INDEX"
                goto label_4eb23e
            
            int32_t* edx_5 = *(arg1 + 8)
            int32_t var_1c_5
            
            if (*(ecx_8 + 5) == 0)
                var_1c_5 = 0x39
            else
                var_1c_5 = 0x2a
            
            (*(*edx_5 + 0x4c))(edx_5, ecx_8[6], var_1c_5, 0)
            eax_2 = arg2 - 1
            
            if (eax_2 u> 4)
                char const* const var_18_5 = "Dx11GraphicsInterface::DrawPrimitive"
                var_1c_3 = 0x911
                ecx_4 = "Halt"
                goto label_4eb23e
            
            int32_t edi_3
            
            switch (eax_2)
                case 0
                    edi_3 = arg6
                case 1
                    edi_3 = arg6 * 2
                case 2
                    edi_3 = arg6 + 1
                case 3
                    edi_3 = arg6 * 3
                case 4
                    edi_3 = arg6 + 2
            
            int32_t ecx_10 = esi_1[5]
            var_18 = 0
            int32_t* eax_9 = *(arg1 + 8)
            int32_t edx_6 = *eax_9
            
            if (arg8 == 0)
                (*(edx_6 + 0x30))(eax_9, edi_3, ecx_10)
            else
                (*(edx_6 + 0x50))(eax_9, edi_3, arg8, ecx_10, 0)
            
            if (esi_1[1].b != 0)
                esi_1[5] += edi_3
            
            goto label_4eb208
        
        int32_t* eax_10 = *(arg1 + 8)
        var_18 = 0
        int32_t ecx_11 = *eax_10
        
        if (arg8 == 0)
            (*(ecx_11 + 0x34))(eax_10, arg7)
        else
            (*(ecx_11 + 0x54))(eax_10, arg7, arg8, 0)
        
    label_4eb208:
        result = data_ce19c4
        esi_1[4] += arg7
        *(result + 8) += arg6
        *(result + 0xc) += arg7
        *(result + 4) += 1
    
    return result
}
