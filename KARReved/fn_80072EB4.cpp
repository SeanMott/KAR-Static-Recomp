//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80072EE4.hpp"



void fn_80072EB4(PPC::Runtime::GCContext* context)
{
/*80072EB4 0006FCB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80072EB8 0006FCB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80072EBC 0006FCBC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180550F68 @ Get_MemoryOffset_HighBit);
/*80072EC0 0006FCC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80072EC4 0006FCC4*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*80072EC8 0006FCC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180550F68 @ Get_MemoryOffset_LowBit);
/*80072ECC 0006FCCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c4, context->r3));
/*80072ED0 0006FCD0*/ PPC::Runtime::ASM::bl(fn_80072EE4);
/*80072ED4 0006FCD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80072ED8 0006FCD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80072EDC 0006FCDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80072EE0 0006FCE0*/ PPC::Runtime::ASM::blr();
}