//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_802306D4(PPC::Runtime::GCContext* context)
{
/*802306D4 0022D4D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802306D8 0022D4D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802306DC 0022D4DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802306E0 0022D4E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802306E4 0022D4E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802306E8 0022D4E8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*802306EC 0022D4EC*/ PPC::Runtime::ASM::blt(.L_80230708);
/*802306F0 0022D4F0*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*802306F4 0022D4F4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*802306F8 0022D4F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*802306FC 0022D4FC*/ PPC::Runtime::ASM::li(context->r4, 0x69b);
/*80230700 0022D500*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230704 0022D504*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80230708, 0x80230708) //this is a jump label
/*80230708 0022D508*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8023070C 0022D50C*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230710 0022D510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230714 0022D514*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a0, context->r3));
/*80230718 0022D518*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023071C 0022D51C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230720 0022D520*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230724 0022D524*/ PPC::Runtime::ASM::blr();
}