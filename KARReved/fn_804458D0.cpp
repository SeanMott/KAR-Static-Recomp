//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80449A40.hpp"



void fn_804458D0(PPC::Runtime::GCContext* context)
{
/*804458D0 004426D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804458D4 004426D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804458D8 004426D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*804458DC 004426DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804458E0 004426E0*/ PPC::Runtime::ASM::blt(.L_804458F0);
/*804458E4 004426E4*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804458E8 004426E8*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*804458EC 004426EC*/ PPC::Runtime::ASM::ble(.L_804458F8);
RUNTIME_PPC_JUMP_LABEL(.L_804458F0, 0x804458F0) //this is a jump label
/*804458F0 004426F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804458F4 004426F4*/ PPC::Runtime::ASM::b(.L_80445910);
RUNTIME_PPC_JUMP_LABEL(.L_804458F8, 0x804458F8) //this is a jump label
/*804458F8 004426F8*/ PPC::Runtime::ASM::lis(context->r4, lbl_80508BC8 @ Get_MemoryOffset_HighBit);
/*804458FC 004426FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*80445900 00442700*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_80508BC8 @ Get_MemoryOffset_LowBit);
/*80445904 00442704*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80445908 00442708*/ PPC::Runtime::ASM::bl(fn_80449A40);
/*8044590C 0044270C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80445910, 0x80445910) //this is a jump label
/*80445910 00442710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80445914 00442714*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80445918 00442718*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8044591C 0044271C*/ PPC::Runtime::ASM::blr();
}