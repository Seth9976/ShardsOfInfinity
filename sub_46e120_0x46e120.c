// 函数名称: sub_46e120
// 虚拟地址: 0x46e120
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46e120(int32_t arg1)
{
    // 第一条实际指令: char const* const var_4c
    char const* const var_4c
    int32_t var_48_1
    char const* const var_44
    int32_t eax
    char* ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        int32_t edi_1
        
        if (edx_1 u< data_5c99a4)
            edi_1 = data_5c99a0
            eax = edx_1 * 0x1008
        
        if (edx_1 u>= data_5c99a4 || *(eax + edi_1 + 0x1004) != arg1)
            var_44 = "DataArray<struct UI2>::DataArrayGet"
            var_48_1 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_4c = "c:\ax2017\engine\dataarray.h"
        else
            void* esi_2 = edx_1 * 0x1008 + edi_1
            bool cond:0_1 = *(esi_2 + 0x7f4) == 0
            float xmm0_1[0x4] = *(esi_2 + 0x6cc)
            float xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa) f- xmm0_1
            float xmm1_6 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff) - _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)
            
            if (cond:0_1 || *(esi_2 + 0x7f8) == 0)
                return 0
            
            void* eax_1 = sub_4627e0(esi_2, 0)
            int32_t ecx_2 = *(esi_2 + 0x63c) * 0x208
            float xmm3_2 = *(eax_1 + 0x6d4) f- *(eax_1 + 0x6cc)
            float xmm2_2 = *(eax_1 + 0x6d8) f- *(eax_1 + 0x6d0)
            int32_t eax_2 = *(ecx_2 + esi_2 + 0x1a0)
            int32_t var_48
            int32_t mxcsr
            
            if (eax_2 == 1)
                float xmm0_28 = *(esi_2 + 0x668)
                int32_t xmm1_13 = (xmm0_28 / xmm2_2) ^ (data_59e5c0.o).d
                int16_t x87control_2
                float xmm0_30
                x87control_2, xmm0_30 = sub_4297a0((xmm1_6 - xmm0_28) / xmm2_2)
                int32_t var_38_2
                var_38_2.q = _mm_cvtps_pd(xmm1_13)
                var_48.q = fconvert.d(fconvert.t(var_38_2.q))
                var_38_2.q = fconvert.d(sub_53ea80(mxcsr, x87control_2, var_48))
                float xmm0_35 = _mm_cvtpd_ps(zx.o(var_38_2.q))
                
                if (0 f<= xmm0_35)
                    return int.d(xmm0_35 + 0.5f)
                
                return int.d(xmm0_35 - 0.5f)
            
            if (eax_2 == 2)
                float xmm1_10 = *(esi_2 + 0x664)
                int32_t xmm0_16 = (xmm1_10 / xmm3_2) ^ (data_59e5c0.o).d
                int16_t x87control_1
                float xmm0_20
                x87control_1, xmm0_20 = sub_4297a0((xmm1_3 - xmm1_10) / xmm3_2)
                int32_t var_38_1
                var_38_1.q = _mm_cvtps_pd(xmm0_16)
                var_48.q = fconvert.d(fconvert.t(var_38_1.q))
                var_38_1.q = fconvert.d(sub_53ea80(mxcsr, x87control_1, var_48))
                float xmm0_25 = _mm_cvtpd_ps(zx.o(var_38_1.q))
                
                if (0 f<= xmm0_25)
                    return int.d(xmm0_25 + 0.5f)
                
                return int.d(xmm0_25 - 0.5f)
            
            eax = eax_2 - 3
            
            if (eax_2 == 3)
                float xmm0_3 = *(esi_2 + 0x668)
                int32_t esi_3 = *(ecx_2 + esi_2 + 0x180)
                int32_t var_38
                var_38.q = fconvert.d((xmm0_3 / xmm2_2) ^ (data_59e5c0.o).d)
                var_48.q = fconvert.d(fconvert.t(var_38.q))
                int16_t x87control
                var_38.q = fconvert.d(sub_53ea80(mxcsr, x87control, var_48))
                _mm_cvtpd_ps(zx.o(var_38.q))
                float xmm0_11 = sub_4297a0((xmm1_6 - xmm0_3) / xmm2_2)
                
                if (0 f<= xmm0_11)
                    return esi_3 - int.d(xmm0_11 + 0.5f)
                
                return esi_3 - int.d(xmm0_11 - 0.5f)
            
            var_44 = "UI2TableGetRange"
            var_48_1 = 0x2130
            var_4c = "c:\ax2017\engine\ui2.cpp"
            ecx = "Halt"
    else
        var_44 = "DataArray<struct UI2>::DataArrayGet"
        var_48_1 = 0x6c
        ecx = "id != DATAID_NULL"
        var_4c = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_4c, var_48_1, var_44)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
