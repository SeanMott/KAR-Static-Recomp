//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_Cancel2.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_UDPCancel(PPC::Runtime::GCContext* context)
{
/*804702B8 0046D0B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804702BC 0046D0BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804702C0 0046D0C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804702C4 0046D0C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804702C8 0046D0C8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804702CC 0046D0CC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*804702D0 0046D0D0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804702D4 0046D0D4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*804702D8 0046D0D8*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804702DC 0046D0DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*804702E0 0046D0E0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*804702E4 0046D0E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x11);
/*804702E8 0046D0E8*/ PPC::Runtime::ASM::beq(.L_804702F0);
/*804702EC 0046D0EC*/ PPC::Runtime::ASM::li(context->r30, -0xc);
RUNTIME_PPC_JUMP_LABEL(.L_804702F0, 0x804702F0) //this is a jump label
/*804702F0 0046D0F0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*804702F4 0046D0F4*/ PPC::Runtime::ASM::beq(.L_80470308);
/*804702F8 0046D0F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804702FC 0046D0FC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80470300 0046D100*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80470304 0046D104*/ PPC::Runtime::ASM::b(.L_80470320);
RUNTIME_PPC_JUMP_LABEL(.L_80470308, 0x80470308) //this is a jump label
/*80470308 0046D108*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047030C 0046D10C*/ PPC::Runtime::ASM::li(context->r4, -0x10);
/*80470310 0046D110*/ PPC::Runtime::ASM::bl(fn_Cancel2);
/*80470314 0046D114*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80470318 0046D118*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047031C 0046D11C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80470320, 0x80470320) //this is a jump label
/*80470320 0046D120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80470324 0046D124*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80470328 0046D128*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047032C 0046D12C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80470330 0046D130*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80470334 0046D134*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80470338 0046D138*/ PPC::Runtime::ASM::blr();
}