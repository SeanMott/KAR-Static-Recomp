//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013BB00.hpp"



void fn_8014F3C8(PPC::Runtime::GCContext* context)
{
/*8014F3C8 0014C1C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014F3CC 0014C1CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014F3D0 0014C1D0*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8014F3D4 0014C1D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F3D8 0014C1D8*/ PPC::Runtime::ASM::bl(fn_8013BB00);
/*8014F3DC 0014C1DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F3E0 0014C1E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014F3E4 0014C1E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014F3E8 0014C1E8*/ PPC::Runtime::ASM::blr();
}