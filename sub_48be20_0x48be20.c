// 函数名称: sub_48be20
// 虚拟地址: 0x48be20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_48be20(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    void* esi = arg2
    void* eax = arg3[3]
    int32_t var_1c_1
    char const* const ecx
    
    if (*(eax + 0x10) != 8 || arg3[9] != 0)
        if ((arg3[0xa].b & 0x80) != 0)
            return esi
        
        if (arg5 != 0)
            void* var_18_2 = esi
            int32_t var_1c_2 = *arg3
            int32_t var_20_1 = arg3[1]
            sub_44e260("          field %s pos %d crc %x")
        
        int32_t* ecx_1 = arg3
        int32_t i_8 = 4
        int32_t i
        
        do
            char eax_2 = *ecx_1
            ecx_1 += 1
            esi = esi u>> 8 ^ *(((zx.d(eax_2) ^ zx.d(esi.b)) << 2) + &data_5720f8)
            i = i_8
            i_8 -= 1
        while (i != 1)
        char* edx = arg3[1]
        char* ecx_2 = edx
        void* ebx_1 = &ecx_2[1]
        uint32_t eax_4
        
        do
            eax_4.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (eax_4.b != 0)
        
        int32_t i_7 = ecx_2 - ebx_1
        
        if (ecx_2 != ebx_1)
            int32_t i_1
            
            do
                char eax_5 = *edx
                edx = &edx[1]
                eax_4 = zx.d(eax_5) ^ zx.d(esi.b)
                esi = esi u>> 8 ^ *((eax_4 << 2) + &data_5720f8)
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        void* eax_7 = sub_48c040(eax_4, esi, arg3[3], arg4, arg5)
        void* esi_3 = &arg3[4]
        eax = sub_48c040(eax_7, eax_7, arg3[6], arg4, arg5)
        int32_t i_9 = 4
        int32_t i_2
        
        do
            char ecx_5 = *esi_3
            esi_3 += 1
            eax = eax u>> 8 ^ *(((zx.d(ecx_5) ^ zx.d(eax.b)) << 2) + &data_5720f8)
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
        void* edx_3 = &arg3[8]
        int32_t i_10 = 4
        int32_t i_3
        
        do
            char ecx_8 = *edx_3
            edx_3 += 1
            eax = eax u>> 8 ^ *(((zx.d(ecx_8) ^ zx.d(eax.b)) << 2) + &data_5720f8)
            i_3 = i_10
            i_10 -= 1
        while (i_3 != 1)
        void* edx_4 = &arg3[0xa]
        int32_t i_11 = 4
        int32_t i_4
        
        do
            char ecx_11 = *edx_4
            edx_4 += 1
            eax = eax u>> 8 ^ *(((zx.d(ecx_11) ^ zx.d(eax.b)) << 2) + &data_5720f8)
            i_4 = i_11
            i_11 -= 1
        while (i_4 != 1)
        void* edx_5 = &arg3[0xb]
        int32_t i_12 = 4
        int32_t i_5
        
        do
            char ecx_14 = *edx_5
            edx_5 += 1
            eax = eax u>> 8 ^ *(((zx.d(ecx_14) ^ zx.d(eax.b)) << 2) + &data_5720f8)
            i_5 = i_12
            i_12 -= 1
        while (i_5 != 1)
        char ecx_17 = (arg3[0xa]).b
        
        if ((ecx_17 & 3) != 0)
            void* ecx_24 = arg3[7]
            
            if (ecx_24 != 0)
                return sub_48bc60(ecx_24, eax)
            
            char const* const var_18_6 = "DefCalcHashField"
            var_1c_1 = 0x3f8
            ecx = "pField->itemInfo != 0"
        else
            int32_t ecx_19
            
            if ((ecx_17 & 0x20) == 0)
                ecx_19 = *(arg3[3] + 0x10)
            
            if ((ecx_17 & 0x20) != 0 || ecx_19 == 0x13 || ecx_19 == 0x14)
                return sub_48bcd0(eax, eax, arg3[7], arg4, arg5)
            
            int32_t* edx_6 = arg3[7]
            
            if (ecx_19 == 6)
                var_8 = edx_6
                int32_t i_13 = ecx_19 - 2
                int32_t** edx_7 = &var_8
                int32_t i_6
                
                do
                    char ecx_20 = *edx_7
                    edx_7 += 1
                    eax = eax u>> 8 ^ *(((zx.d(ecx_20) ^ zx.d(eax.b)) << 2) + &data_5720f8)
                    i_6 = i_13
                    i_13 -= 1
                while (i_6 != 1)
                return eax
            
            if (edx_6 == 0)
                return eax
            
            char const* const var_18_4 = "DefCalcHashField"
            var_1c_1 = 0x409
            ecx = "pField->itemInfo == 0"
    else
        char const* const var_18_1 = "DefCalcHashField"
        var_1c_1 = 0x3e3
        ecx = "pField->pDefMap->defType != DT_STRING || pField->defaultValue != 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\definition.cpp", var_1c_1, "DefCalcHashField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
