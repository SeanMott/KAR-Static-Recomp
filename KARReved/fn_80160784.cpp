//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013124C.hpp"
#include "fn_80059520.hpp"



void fn_80160784(PPC::Runtime::GCContext* context)
{
/*80160784 0015D584*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80160788 0015D588*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016078C 0015D58C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80160790 0015D590*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80160794 0015D594*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80160798 0015D598*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016079C 0015D59C*/ PPC::Runtime::ASM::bl(fn_8013124C);
/*801607A0 0015D5A0*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1273 @ Get_MemoryOffset_HighBit);
/*801607A4 0015D5A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801607A8 0015D5A8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1273 @ Get_MemoryOffset_LowBit);
/*801607AC 0015D5AC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801607B0 0015D5B0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x228);
/*801607B4 0015D5B4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801607B8 0015D5B8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801607BC 0015D5BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801607C0 0015D5C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801607C4 0015D5C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801607C8 0015D5C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801607CC 0015D5CC*/ PPC::Runtime::ASM::blr();
}