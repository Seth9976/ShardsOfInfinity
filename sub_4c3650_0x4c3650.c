// 函数名称: sub_4c3650
// 虚拟地址: 0x4c3650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4c3650(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_c = arg3
    void* var_c = arg3
    int32_t ebx = 0
    void* var_8 = nullptr
    int32_t esi = 0
    int32_t eax = *(arg2 + 4)
    int32_t edx = eax << 2
    
    if (eax s> 0)
        do
            void* eax_1 = sub_4c3330(eax, arg2, arg3, esi, arg5)
            
            if (esi == 0 || var_8 != eax_1)
                var_8 = eax_1
                ebx += 1
            
            eax = *(arg2 + 4)
            esi += 1
            arg3 = var_c
        while (esi s< eax)
    
    int32_t* esi_1 = arg4
    void* ebx_2 = ebx * 6
    void* result
    
    if (ebx_2 s>= edx)
        void* ebx_4 = eax << 2
        esi_1[1] = ebx_4
        
        if (ebx_4 != 0)
            void* result_2 = sub_45cd70(ebx_4)
            _memset(result_2, 0, ebx_4)
            result = result_2
        else
            result = nullptr
        
        int32_t i = 0
        *esi_1 = result
        esi_1[2] = 2
        
        if (*(arg2 + 4) s> 0)
            do
                int32_t eax_8 = *esi_1
                result = sub_4c3330(eax_8, arg2, var_c, i, arg5)
                *(eax_8 + (i << 2)) = result
                i += 1
                esi_1 = arg4
            while (i s< *(arg2 + 4))
    else
        esi_1[1] = ebx_2
        uint32_t (* var_8_1)[0x4]
        uint32_t (* ecx)[0x4]
        
        if (ebx_2 != 0)
            uint32_t (* eax_2)[0x4] = sub_45cd70(ebx_2)
            var_8_1 = eax_2
            _memset(eax_2, 0, ebx_2)
            ecx = var_8_1
        else
            ecx = nullptr
            var_8_1 = nullptr
        
        *esi_1 = ecx
        esi_1[2] = 4
        int32_t ebx_3 = 0
        void* result_1 = nullptr
        int32_t eax_6 = ebx_2 s/ 6
        result = *(arg2 + 4)
        int32_t var_2c_2
        char const* const ecx_2
        
        if (result s>= 0xffff)
            char const* const var_28_3 = "FlanimCompressConstantInt"
            var_2c_2 = 0x5f2
            ecx_2 = "pMayaVertex->mFrameCount < MAXUINT16"
        label_4c37e4:
            sub_44e4d0(result, &data_5559b1, ecx_2, "c:\ax2017\engine\flanim.cpp", var_2c_2, 
                "FlanimCompressConstantInt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t i_1 = 0
        
        if (result s> 0)
            do
                result = sub_4c3330(result, arg2, var_c, i_1, arg5)
                
                if (i_1 == 0 || result_1 != result)
                    result_1 = result
                    *(&(*ecx)[eax_6] + (ebx_3 << 1)) = i_1.w
                    (*var_8_1)[ebx_3] = result
                    ebx_3 += 1
                
                i_1 += 1
            while (i_1 s< *(arg2 + 4))
        
        if (ebx_3 != eax_6)
            char const* const var_28_7 = "FlanimCompressConstantInt"
            var_2c_2 = 0x601
            ecx_2 = "dataIndex == numValues"
            goto label_4c37e4
    
    return result
}
