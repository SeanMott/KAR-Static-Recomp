//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80449BA0.hpp"



void fn_8044576C(PPC::Runtime::GCContext* context)
{
/*8044576C 0044256C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80445770 00442570*/ PPC::Runtime::ASM::mflr(context->r0);
/*80445774 00442574*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*80445778 00442578*/ PPC::Runtime::ASM::mr(context->r6, context->r4);
/*8044577C 0044257C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80445780 00442580*/ PPC::Runtime::ASM::blt(.L_80445790);
/*80445784 00442584*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445788 00442588*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8044578C 0044258C*/ PPC::Runtime::ASM::ble(.L_80445798);
RUNTIME_PPC_JUMP_LABEL(.L_80445790, 0x80445790) //this is a jump label
/*80445790 00442590*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80445794 00442594*/ PPC::Runtime::ASM::b(.L_804457D0);
RUNTIME_PPC_JUMP_LABEL(.L_80445798, 0x80445798) //this is a jump label
/*80445798 00442598*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*8044579C 0044259C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*804457A0 004425A0*/ PPC::Runtime::ASM::ble(.L_804457A8);
/*804457A4 004425A4*/ PPC::Runtime::ASM::li(context->r3, 0xff);
RUNTIME_PPC_JUMP_LABEL(.L_804457A8, 0x804457A8) //this is a jump label
/*804457A8 004425A8*/ PPC::Runtime::ASM::lis(context->r4, lbl_80508BC8 @ Get_MemoryOffset_HighBit);
/*804457AC 004425AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*804457B0 004425B0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80508BC8 @ Get_MemoryOffset_LowBit);
/*804457B4 004425B4*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r3, 24);
/*804457B8 004425B8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r5, context->r0);
/*804457BC 004425BC*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r6, 16);
/*804457C0 004425C0*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*804457C4 004425C4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*804457C8 004425C8*/ PPC::Runtime::ASM::bl(fn_80449BA0);
/*804457CC 004425CC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804457D0, 0x804457D0) //this is a jump label
/*804457D0 004425D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804457D4 004425D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804457D8 004425D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804457DC 004425DC*/ PPC::Runtime::ASM::blr();
}