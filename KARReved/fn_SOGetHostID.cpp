//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8046D7FC.hpp"



void fn_SOGetHostID(PPC::Runtime::GCContext* context)
{
/*8047DB1C 0047A91C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047DB20 0047A920*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047DB24 0047A924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047DB28 0047A928*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8047DB2C 0047A92C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8047DB30 0047A930*/ PPC::Runtime::ASM::bl(fn_8046D7FC);
/*8047DB34 0047A934*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8047DB38 0047A938*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047DB3C 0047A93C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8047DB40 0047A940*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047DB44 0047A944*/ PPC::Runtime::ASM::blr();
}