//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E6190.hpp"



void fn_801E5ABC(PPC::Runtime::GCContext* context)
{
/*801E5ABC 001E28BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E5AC0 001E28C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E5AC4 001E28C4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E1E08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E5AC8 001E28C8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801E5ACC 001E28CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E5AD0 001E28D0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801E5AD4 001E28D4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E1E00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E5AD8 001E28D8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801E5ADC 001E28DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E5AE0 001E28E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*801E5AE4 001E28E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*801E5AE8 001E28E8*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*801E5AEC 001E28EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*801E5AF0 001E28F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E5AF4 001E28F4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801E5AF8 001E28F8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E5AFC 001E28FC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*801E5B00 001E2900*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*801E5B04 001E2904*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*801E5B08 001E2908*/ PPC::Runtime::ASM::fdivs(context->f2, context->f4, context->f2);
/*801E5B0C 001E290C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r6));
/*801E5B10 001E2910*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801E5B14 001E2914*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f2, context->f0, context->f1);
/*801E5B18 001E2918*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*801E5B1C 001E291C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*801E5B20 001E2920*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*801E5B24 001E2924*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801E5B28 001E2928*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f2, context->f0, context->f1);
/*801E5B2C 001E292C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*801E5B30 001E2930*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*801E5B34 001E2934*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*801E5B38 001E2938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*801E5B3C 001E293C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*801E5B40 001E2940*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E5B44 001E2944*/ PPC::Runtime::ASM::bne(.L_801E5B6C);
/*801E5B48 001E2948*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*801E5B4C 001E294C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801E5B50 001E2950*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E5B54 001E2954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*801E5B58 001E2958*/ PPC::Runtime::ASM::beq(.L_801E5B68);
/*801E5B5C 001E295C*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*801E5B60 001E2960*/ PPC::Runtime::ASM::bl(fn_801E6190);
/*801E5B64 001E2964*/ PPC::Runtime::ASM::b(.L_801E5B6C);
RUNTIME_PPC_JUMP_LABEL(.L_801E5B68, 0x801E5B68) //this is a jump label
/*801E5B68 001E2968*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_801E5B6C, 0x801E5B6C) //this is a jump label
/*801E5B6C 001E296C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E5B70 001E2970*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E5B74 001E2974*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E5B78 001E2978*/ PPC::Runtime::ASM::blr();
}