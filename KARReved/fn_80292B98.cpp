//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80292B98(PPC::Runtime::GCContext* context)
{
/*80292B98 0028F998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80292B9C 0028F99C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80292BA0 0028F9A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292BA4 0028F9A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292BA8 0028F9A8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80292BAC 0028F9AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80292BB0 0028F9B0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80292BB4 0028F9B4*/ PPC::Runtime::ASM::beq(.L_80292BE4);
/*80292BB8 0028F9B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD7B4 @ Get_MemoryOffset_HighBit);
/*80292BBC 0028F9BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD7B4 @ Get_MemoryOffset_LowBit);
/*80292BC0 0028F9C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292BC4 0028F9C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80292BC8 0028F9C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80292BCC 0028F9CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80292BD0 0028F9D0*/ PPC::Runtime::ASM::bctrl();
/*80292BD4 0028F9D4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80292BD8 0028F9D8*/ PPC::Runtime::ASM::ble(.L_80292BE4);
/*80292BDC 0028F9DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292BE0 0028F9E0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80292BE4, 0x80292BE4) //this is a jump label
/*80292BE4 0028F9E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292BE8 0028F9E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292BEC 0028F9EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292BF0 0028F9F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80292BF4 0028F9F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292BF8 0028F9F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292BFC 0028F9FC*/ PPC::Runtime::ASM::blr();
}