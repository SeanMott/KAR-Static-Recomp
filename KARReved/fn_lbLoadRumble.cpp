//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"



void fn_lbLoadRumble(PPC::Runtime::GCContext* context)
{
/*80071CC0 0006EAC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80071CC4 0006EAC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80071CC8 0006EAC8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_240 @ Get_MemoryOffset_HighBit);
/*80071CCC 0006EACC*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_241 @ Get_MemoryOffset_HighBit);
/*80071CD0 0006EAD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071CD4 0006EAD4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_240 @ Get_MemoryOffset_LowBit);
/*80071CD8 0006EAD8*/ PPC::Runtime::ASM::addi(context->r6, context->r5, MemoryOffset_241 @ Get_MemoryOffset_LowBit);
/*80071CDC 0006EADC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80071CE0 0006EAE0*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DD5C8 @ Get_MemoryOffset_SDA21);
/*80071CE4 0006EAE4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80071CE8 0006EAE8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80071CEC 0006EAEC*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*80071CF0 0006EAF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071CF4 0006EAF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80071CF8 0006EAF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80071CFC 0006EAFC*/ PPC::Runtime::ASM::blr();
}