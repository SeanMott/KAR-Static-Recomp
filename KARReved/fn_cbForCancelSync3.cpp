//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSWakeupThread.hpp"



void fn_cbForCancelSync3(PPC::Runtime::GCContext* context)
{
/*8047DB6C 0047A96C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047DB70 0047A970*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_4 @ Get_MemoryOffset_SDA21);
/*8047DB74 0047A974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047DB78 0047A978*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*8047DB7C 0047A97C*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
/*8047DB80 0047A980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8047DB84 0047A984*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*8047DB88 0047A988*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047DB8C 0047A98C*/ PPC::Runtime::ASM::blr();
}