//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80391B1C.hpp"
#include "fn_80391C1C.hpp"



void fn_8039A550(PPC::Runtime::GCContext* context)
{
/*8039A550 00397350*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A554 00397354*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A558 00397358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A55C 0039735C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A560 00397360*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A564 00397364*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A568 00397368*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8039A56C 0039736C*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8039A570 00397370*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A574 00397374*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A578 00397378*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039A57C 0039737C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A580 00397380*/ PPC::Runtime::ASM::bctrl();
/*8039A584 00397384*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039A588 00397388*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A58C 0039738C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A590 00397390*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039A594 00397394*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A598 00397398*/ PPC::Runtime::ASM::bctrl();
/*8039A59C 0039739C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8039A5A0 003973A0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8039A5A4 003973A4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8039A5A8 003973A8*/ PPC::Runtime::ASM::bl(fn_80391C1C);
/*8039A5AC 003973AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A5B0 003973B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A5B4 003973B4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A5B8 003973B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A5BC 003973BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A5C0 003973C0*/ PPC::Runtime::ASM::blr();
}