//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025C398(PPC::Runtime::GCContext* context)
{
/*8025C398 00259198*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025C39C 0025919C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025C3A0 002591A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C3A4 002591A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C3A8 002591A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025C3AC 002591AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C3B0 002591B0*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025C3B4 002591B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C3B8 002591B8*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025C3BC 002591BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C3C0 002591C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C3C4 002591C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025C3C8 002591C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025C3CC 002591CC*/ PPC::Runtime::ASM::blr();
}