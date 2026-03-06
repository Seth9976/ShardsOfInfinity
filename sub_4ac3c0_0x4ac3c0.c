// 函数名称: sub_4ac3c0
// 虚拟地址: 0x4ac3c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4ac3c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?Initialize@SchedulerBase@details@Concurrency@@AAEXXZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_c4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_e49c68 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e49c68)
        
        if (data_e49c68 == 0xffffffff)
            int32_t var_8_1 = 0
            data_e49c6c = sub_48d5b0("sys/DebugFont.font", 0x12)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_e49c68)
    
    void* eax_6
    
    if (*(data_65ae00 + 0x27) != 0)
        if ((*(sub_452df0() + 0x1c) & 0x200) != 0 || data_ce19bd != 0)
            eax_6.b = 1
        else
            eax_6.b = 0
    else
        eax_6.b = 0
    
    int32_t ecx_1 = 0x7d0
    char* const result_1 = &data_5559b1
    
    if (eax_6.b == 0)
        ecx_1 = 0x3e8
    
    int32_t var_8_3 = 1
    void* esi = data_ce19c4
    int32_t var_c8 = divs.dp.d(sx.q(*(esi + 0x68)), ecx_1)
    int32_t var_cc = divs.dp.d(sx.q(*(esi + 0x6c)), ecx_1)
    int32_t var_d0 = divs.dp.d(sx.q(*(esi + 0x74)), zx.d(eax_6.b) + 1)
    int32_t var_d4 = divs.dp.d(sx.q(*(esi + 0x70)), zx.d(eax_6.b) + 1)
    int32_t var_d8 = divs.dp.d(sx.q(*(esi + 0x64)), zx.d(eax_6.b) + 1)
    var_8_3.b = 2
    char* const ebx = &data_5559b1
    char* var_14
    char* eax_23 = *sub_44f980(&var_14, "draw calls: %d, vb: %d, vao: %d, verts: %dK, tris: %dK\r")
    char* ecx_2 = &data_5559b1
    
    if (eax_23 != 0)
        ecx_2 = eax_23
    
    sub_44f620(&result_1, ecx_2)
    var_8_3.b = 3
    
    if (data_cdf414 != 0)
        char* eax_24 = var_14
        
        if (eax_24 != 0 && *eax_24 != 0)
            char* eax_25 = sub_44f000(&var_14)
            int32_t temp2_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
    
    var_8_3.b = 1
    int32_t var_c8_2 = divs.dp.d(sx.q(*(esi + 0x90)), zx.d(eax_6.b) + 1)
    int32_t var_cc_1 = divs.dp.d(sx.q(*(esi + 0x8c)), zx.d(eax_6.b) + 1)
    int32_t var_d0_1 = divs.dp.d(sx.q(*(esi + 0x88)), zx.d(eax_6.b) + 1)
    var_8_3.b = 4
    char* ecx_6 = &data_5559b1
    char* eax_36 = *sub_44f980(&var_14, "sprite: draws %d, draws calls %d, texture swaps %d\r")
    
    if (eax_36 != 0)
        ecx_6 = eax_36
    
    sub_44f620(&result_1, ecx_6)
    var_8_3.b = 5
    
    if (data_cdf414 != 0)
        char* eax_37 = var_14
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_44f000(&var_14)
            int32_t temp3_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
    
    var_8_3.b = 1
    int32_t var_c8_4 = divs.dp.d(sx.q(*(esi + 0x7c)), zx.d(eax_6.b) + 1)
    int32_t var_cc_2 = divs.dp.d(sx.q(*(esi + 0x78)), zx.d(eax_6.b) + 1)
    var_8_3.b = 6
    char* ecx_10 = &data_5559b1
    char* eax_46 = *sub_44f980(&var_14, "draw3d: meshes %d (draws calls %d)\r")
    
    if (eax_46 != 0)
        ecx_10 = eax_46
    
    sub_44f620(&result_1, ecx_10)
    var_8_3.b = 7
    
    if (data_cdf414 != 0)
        char* eax_47 = var_14
        
        if (eax_47 != 0 && *eax_47 != 0)
            char* eax_48 = sub_44f000(&var_14)
            int32_t temp4_1 = *(eax_48 + 4)
            *(eax_48 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_45d050(eax_48, *(eax_48 + 0xc) + 0x10)
    
    var_8_3.b = 1
    int32_t var_c8_6 = divs.dp.d(sx.q(*(esi + 0x84)), zx.d(eax_6.b) + 1)
    int32_t var_cc_3 = divs.dp.d(sx.q(*(esi + 0x80)), zx.d(eax_6.b) + 1)
    var_8_3.b = 8
    char* ecx_14 = &data_5559b1
    char* eax_56 = *sub_44f980(&var_14, "draw3d: quads %d (draws calls %d)\r")
    
    if (eax_56 != 0)
        ecx_14 = eax_56
    
    sub_44f620(&result_1, ecx_14)
    var_8_3.b = 9
    
    if (data_cdf414 != 0)
        char* eax_57 = var_14
        
        if (eax_57 != 0 && *eax_57 != 0)
            char* eax_58 = sub_44f000(&var_14)
            int32_t temp5_1 = *(eax_58 + 4)
            *(eax_58 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_45d050(eax_58, *(eax_58 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_3.b = 1
    float var_1c
    
    if (*(data_65ae00 + 0x27) != 0)
        (*(*data_ce19b4 + 0xac))(0)
        int32_t* ecx_19 = data_ce19b4
        long double x87_r0
        var_1c = fconvert.s(x87_r0)
        (*(*ecx_19 + 0xac))(1)
        long double x87_r1
        var_14 = fconvert.s(x87_r1)
        var_cc_3.q = _mm_cvtps_pd(var_14)
        char** var_d4_2
        var_d4_2.q = _mm_cvtps_pd(var_1c)
        var_8_3.b = 0xa
        char* eax_65 = *sub_44f980(&var_14, "gpu eyes %0.2f ms, vr end %0.2f ms\r")
        
        if (eax_65 != 0)
            ebx = eax_65
        
        sub_44f620(&result_1, ebx)
        var_8_3.b = 0xb
        
        if (data_cdf414 != 0)
            char* eax_66 = var_14
            
            if (eax_66 != 0 && *eax_66 != 0)
                char* eax_67 = sub_44f000(&var_14)
                int32_t temp7_1 = *(eax_67 + 4)
                *(eax_67 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_45d050(eax_67, *(eax_67 + 0xc) + 0x10)
        
        var_8_3.b = 1
    
    int128_t xmm0_5 = data_59e540
    var_1c = data_e49c6c
    int128_t var_2c = xmm0_5
    int32_t var_9c = 0
    uint32_t var_94[0x6][0x4]
    _memset(&var_94, 0, 0x68)
    struct _EXCEPTION_REGISTRATION_RECORD* var_b4 = "NORMAL"
    int32_t var_a4 = 1
    float* var_b0 = &var_1c
    int32_t var_a0 = 0xffffffff
    int32_t var_ac = 0
    int32_t var_a8 = 0
    int32_t var_98 = 0x3f800000
    char* result = sub_4afc40(&var_2c, &data_57251c, &result_1, &var_2c, &var_b4, 0xffffffff, nullptr)
    int32_t var_8_4 = 0xc
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp6_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp6_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
