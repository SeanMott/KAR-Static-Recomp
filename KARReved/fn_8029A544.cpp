//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029A544(PPC::Runtime::GCContext* context)
{
/*8029A544 00297344*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029A548 00297348*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029A54C 0029734C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029A550 00297350*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029A554 00297354*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029A558 00297358*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029A55C 0029735C*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029A560 00297360*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029A564 00297364*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029A568 00297368*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029A56C 0029736C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029A570 00297370*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029A574 00297374*/ PPC::Runtime::ASM::bctrl();
/*8029A578 00297378*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029A57C 0029737C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029A580 00297380*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029A584 00297384*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029A588 00297388*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029A58C 0029738C*/ PPC::Runtime::ASM::bctrl();
/*8029A590 00297390*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029A594 00297394*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029A598 00297398*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8029A59C 0029739C*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8029A5A0 002973A0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8029A5A4 002973A4*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8029A5A8 002973A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029A5AC 002973AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029A5B0 002973B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029A5B4 002973B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029A5B8 002973B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029A5BC 002973BC*/ PPC::Runtime::ASM::blr();
}