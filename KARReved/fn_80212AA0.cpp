//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204FAC.hpp"
#include "fn_80212B48.hpp"
#include "fn_80212B48.hpp"
#include "fn_802042FC.hpp"



void fn_80212AA0(PPC::Runtime::GCContext* context)
{
/*80212AA0 0020F8A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80212AA4 0020F8A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80212AA8 0020F8A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212AAC 0020F8AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212AB0 0020F8B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80212AB4 0020F8B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r3));
/*80212AB8 0020F8B8*/ PPC::Runtime::ASM::bl(fn_80204FAC);
/*80212ABC 0020F8BC*/ PPC::Runtime::ASM::lis(context->r3, fn_80212B48 @ Get_MemoryOffset_HighBit);
/*80212AC0 0020F8C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80212B48 @ Get_MemoryOffset_LowBit);
/*80212AC4 0020F8C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xacc, context->r31));
/*80212AC8 0020F8C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad0, context->r31));
/*80212ACC 0020F8CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80212AD0 0020F8D0*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*80212AD4 0020F8D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212AD8 0020F8D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212ADC 0020F8DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212AE0 0020F8E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212AE4 0020F8E4*/ PPC::Runtime::ASM::blr();
}