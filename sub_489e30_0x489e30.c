// 函数名称: sub_489e30
// 虚拟地址: 0x489e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_489e30(int32_t arg1, uint32_t (* arg2)[0x4], int32_t arg3, char arg4))[0x4]
{
    // 第一条实际指令: char const* const var_1c
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    char* ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        int32_t edi_1
        
        if (edx u< data_654ebc)
            edi_1 = data_654eb8
            arg1 = edx * 0x438
        
        if (edx u>= data_654ebc || *(arg1 + edi_1 + 0x434) != arg3)
            var_14 = "DataArray<struct UIState>::DataArrayGet"
            var_18 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_1c = "c:\ax2017\engine\dataarray.h"
        else
            void* esi_2 = edx * 0x438 + edi_1
            int32_t* ecx_1 = *(esi_2 + 4)
            
            if (ecx_1[1] == 0x1e)
                int32_t eax = sub_4459f0(ecx_1)
                void* edi_3 = arg2 * 0x118 + *eax
                uint32_t (* result)[0x4] = sub_486810(eax, arg2, esi_2, &data_5559b1)
                uint32_t edx_2 = *result
                (*result)[2] = edx_2 + 1
                uint32_t ecx_3
                ecx_3.b = arg4
                (*result)[3].b = ecx_3.b
                uint32_t ecx_4
                
                if ((*result)[0x4d] s<= edx_2)
                    ecx_4 = *(edi_3 + 0x4c)
                else
                    ecx_4 = (*result)[0x4e]
                
                uint32_t xmm0
                
                if ((*result)[0x17] == 0)
                    xmm0 = _mm_cvtepi32_ps(zx.o(*(edi_3 + 0x50)))
                else
                    xmm0 = result[6][0]
                
                uint32_t xmm1_3 = (_mm_cvtepi32_ps(zx.o(ecx_4)) f+ xmm0) / 1000f
                
                if (not((*result)[5] f<= xmm1_3))
                    (*result)[5] = xmm1_3
                
                return result
            
            var_14 = "UIDefGet"
            var_18 = 0x10d
            var_1c = "c:\ax2017\engine\uidef.cpp"
            ecx = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_14 = "DataArray<struct UIState>::DataArrayGet"
        var_18 = 0x6c
        ecx = "id != DATAID_NULL"
        var_1c = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
