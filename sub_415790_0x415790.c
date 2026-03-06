// 函数名称: sub_415790
// 虚拟地址: 0x415790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct InputHitResult::HitResult::VTable** __fastcallsub_415790(struct InputHitResult::HitResult::VTable** arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg1 = &HitResult::`vftable'{for `InputHitResult'}
    *arg1 = &HitResult::`vftable'{for `InputHitResult'}
    arg1[3] = &UI2HitResult::`vftable'{for `InputHitResult'}
    arg1[4] = 0
    arg1[1] = 0
    struct InputHitResult::UI2HitResult::VTable** eax_1
    int32_t edx
    eax_1, edx = sub_437fe0(arg2)
    struct InputHitResult::UI2HitResult::VTable** var_14 = eax_1
    int32_t edi = 5
    int32_t var_18 = edx
    int32_t* esi = &data_5bb284
    int32_t var_34
    int32_t var_c
    int32_t eax_2
    int32_t esi_1
    int32_t edi_1
    
    while (true)
        if (*esi != 0)
            struct InputHitResult::UI2HitResult::VTable* var_3c
            eax_1, edx = sub_463570(eax_1, esi[1], &var_3c, arg2)
            int32_t var_2c
            
            if (var_2c != 0)
            label_4157fe:
                
                if (*esi == 0x3e9)
                    eax_1 = data_5c2e9c
                
                if (*esi != 0x3e9 || eax_1[0x186] == 0xffffffff)
                    int32_t var_30
                    edi_1 = var_30
                    esi_1 = var_2c
                    int32_t var_38
                    var_c = var_38
                    eax_2 = var_34
                    break
            else if (edi != 5 && edi != 1)
                goto label_4157fe
        
        esi -= 0x20
        edi -= 1
        
        if (esi s< &data_5bb1e4)
            esi_1 = var_18
            edi_1 = var_18
            eax_2 = var_18
            var_c = 0
            break
    
    int64_t* eax_4 = sub_414100(&var_34, edx, arg2, &var_34)
    int64_t xmm0 = *eax_4
    int32_t edx_2 = eax_4[1].d
    int32_t eax_5 = 0xffffffff
    
    if (var_14 != 0)
        eax_5 = var_18
        arg1[1] = 1
        arg1[2] = var_14
    
    if (var_c != 0 && edi_1 s> eax_5)
        arg1[1] = 2
        arg1[5] = eax_2
        eax_5 = edi_1
        arg1[4] = var_c
        arg1[6] = edi_1
        arg1[7] = esi_1
    
    if (xmm0:4.d == 0xffffffff)
        return arg1
    
    if (edx_2 s<= eax_5)
        return arg1
    
    *(arg1 + 0x20) = xmm0
    arg1[1] = 3
    arg1[0xa] = edx_2
    return arg1
}
