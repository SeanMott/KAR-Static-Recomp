//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D1D3C.hpp"



void fn_8027713C(PPC::Runtime::GCContext* context)
{
/*8027713C 00273F3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80277140 00273F40*/ PPC::Runtime::ASM::mflr(context->r0);
/*80277144 00273F44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80277148 00273F48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027714C 00273F4C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80277150 00273F50*/ PPC::Runtime::ASM::bl(fn_800D1D3C);
/*80277154 00273F54*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80277158 00273F58*/ PPC::Runtime::ASM::beq(.L_80277160);
/*8027715C 00273F5C*/ PPC::Runtime::ASM::b(.L_80277174);
RUNTIME_PPC_JUMP_LABEL(.L_80277160, 0x80277160) //this is a jump label
/*80277160 00273F60*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B8CD8 @ Get_MemoryOffset_HighBit);
/*80277164 00273F64*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80277168 00273F68*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804B8CD8 @ Get_MemoryOffset_LowBit);
/*8027716C 00273F6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80277170 00273F70*/ PPC::Runtime::ASM::b(.L_80277180);
RUNTIME_PPC_JUMP_LABEL(.L_80277174, 0x80277174) //this is a jump label
/*80277174 00273F74*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80277178 00273F78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8027717C 00273F7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80277180, 0x80277180) //this is a jump label
/*80277180 00273F80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80277184 00273F84*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80277188 00273F88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027718C 00273F8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80277190 00273F90*/ PPC::Runtime::ASM::blr();
}