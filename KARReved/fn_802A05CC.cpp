//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8029CF8C.hpp"



void fn_802A05CC(PPC::Runtime::GCContext* context)
{
/*802A05CC 0029D3CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A05D0 0029D3D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A05D4 0029D3D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A05D8 0029D3D8*/ PPC::Runtime::ASM::bl(fn_8029CF8C);
/*802A05DC 0029D3DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A05E0 0029D3E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A05E4 0029D3E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A05E8 0029D3E8*/ PPC::Runtime::ASM::blr();
}