//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025F7B0(PPC::Runtime::GCContext* context)
{
/*8025F7B0 0025C5B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F7B4 0025C5B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F7B8 0025C5B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F7BC 0025C5BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F7C0 0025C5C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F7C4 0025C5C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F7C8 0025C5C8*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025F7CC 0025C5CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F7D0 0025C5D0*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025F7D4 0025C5D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F7D8 0025C5D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F7DC 0025C5DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F7E0 0025C5E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F7E4 0025C5E4*/ PPC::Runtime::ASM::blr();
}