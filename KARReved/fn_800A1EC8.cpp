//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A16A8.hpp"



void fn_800A1EC8(PPC::Runtime::GCContext* context)
{
/*800A1EC8 0009ECC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800A1ECC 0009ECCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A1ED0 0009ECD0*/ PPC::Runtime::ASM::lis(context->r5, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A1ED4 0009ECD4*/ PPC::Runtime::ASM::mr(context->r6, context->r4);
/*800A1ED8 0009ECD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A1EDC 0009ECDC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A1EE0 0009ECE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A1EE4 0009ECE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*800A1EE8 0009ECE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800A1EEC 0009ECEC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*800A1EF0 0009ECF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF084 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A1EF4 0009ECF4*/ PPC::Runtime::ASM::bl(fn_800A16A8);
/*800A1EF8 0009ECF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A1EFC 0009ECFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A1F00 0009ED00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800A1F04 0009ED04*/ PPC::Runtime::ASM::blr();
}