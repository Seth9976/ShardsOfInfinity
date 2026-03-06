// 函数名称: sub_42a220
// 虚拟地址: 0x42a220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_42a220(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_54198b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b8c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_b5c = arg1
    void* var_b5c_1 = arg1
    uint32_t var_b58[0x22][0x4]
    _memset(&var_b58, 0, 0xb20)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_b90)(char** arg1) = sub_429de0
    `eh vector constructor iterator'(&var_b58, 0x2c8, 4, sub_42a550)
    int32_t* edx = arg2
    int32_t var_14_1 = 0
    int96_t var_38 = (zx.o(0)).12
    int32_t i_1 = 0
    int32_t ecx = edx[1]
    var_38:4.d = edx[2]
    var_38.d = ecx
    var_38:8.d = edx[3]
    
    if (ecx s> 0)
        int32_t ecx_1 = 0
        void var_934
        void* edi_1 = &var_934
        int32_t var_b5c_2 = 0
        void* var_b60_1 = &var_934
        int32_t i
        
        do
            char** esi_2 = *edx + ecx_1
            *(edi_1 + 0x1c) = esi_2[0x55]
            sub_44f590(edi_1, esi_2[0x51])
            sub_44f590(edi_1 + 0x14, esi_2[1])
            sub_44f590(edi_1 - 4, esi_2[0x50])
            *(edi_1 + 0x20) = esi_2[0x56]
            *(edi_1 + 0x30) = esi_2[0x5a]
            *(edi_1 + 0x24) = *(esi_2 + 0x15c)
            *(edi_1 + 0x2c) = esi_2[0x59]
            *(edi_1 + 0x34) = esi_2[0x5b]
            __builtin_memcpy(edi_1 + 0x38, &esi_2[0x5c], 0x6c)
            void* ecx_6 = var_b60_1 - 0x1fc
            int32_t j_1 = 2
            void* edx_2 = &esi_2[7]
            void* var_b6c_1 = ecx_6
            void* var_b68_1 = edx_2
            int32_t j
            
            do
                void* edi_3 = edx_2
                int32_t k_1 = 5
                void* esi_4 = ecx_6
                *(ecx_6 + 0xd0) = *(edx_2 + 0x70)
                *(ecx_6 + 0xe0) = *(edx_2 + 0x80)
                *(ecx_6 + 0xe8) = *(edx_2 + 0x88)
                int32_t k
                
                do
                    *(esi_4 + 8) = *edi_3
                    *esi_4 = *(edi_3 - 8)
                    *(esi_4 + 0xc) = *(edi_3 + 4)
                    *(esi_4 + 8) = *edi_3
                    _strncpy(esi_4 - 0x10, *(edi_3 - 0xc), 0x10)
                    *(esi_4 - 1) = 0
                    edi_3 += 0x18
                    esi_4 += 0x2c
                    *(esi_4 - 0x28) = *(edi_3 - 0x1c)
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                edx_2 = var_b68_1 + 0x98
                ecx_6 = var_b6c_1 + 0x108
                var_b68_1 = edx_2
                j = j_1
                j_1 -= 1
                var_b6c_1 = ecx_6
            while (j != 1)
            sub_44f590(var_b60_1 - 0x220, esi_2[2])
            *(var_b60_1 - 0x21c) = esi_2[3]
            sub_44f590(var_b60_1 - 0x224, *esi_2)
            edx = arg2
            *(var_b60_1 + 0x18) = esi_2[0x54]
            ecx_1 = var_b5c_2 + 0x1dc
            *(var_b60_1 + 8) = esi_2[0x53]
            edi_1 = var_b60_1 + 0x2c8
            i = i_1 + 1
            var_b5c_2 = ecx_1
            i_1 = i
            var_b60_1 = edi_1
        while (i s< edx[1])
    
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_b90_6)(char** arg1) = sub_429de0
    (arg1, &var_b58, 0x2c8, 4, sub_42a590)
    *(arg1 + 0xb20) = var_38.d
    *(arg1 + 0xb24) = var_38:4.d
    *(arg1 + 0xb28) = var_38:8.d
    int32_t var_14_2 = 1
    `eh vector vbase constructor iterator'(&var_b58, 0x2c8, 4, sub_429de0)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return arg1
}
