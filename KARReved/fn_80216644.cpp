//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_802166A8.hpp"
#include "fn_802166E0.hpp"



void fn_80216644(PPC::Runtime::GCContext* context)
{
/*80216644 00213444*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216648 00213448*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021664C 0021344C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216650 00213450*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80216654 00213454*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80216658 00213458*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*8021665C 0021345C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216660 00213460*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*80216664 00213464*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80216668 00213468*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3f);
/*8021666C 0021346C*/ PPC::Runtime::ASM::beq(.L_8021668C);
/*80216670 00213470*/ PPC::Runtime::ASM::bge(.L_80216694);
/*80216674 00213474*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x27);
/*80216678 00213478*/ PPC::Runtime::ASM::beq(.L_80216680);
/*8021667C 0021347C*/ PPC::Runtime::ASM::b(.L_80216694);
RUNTIME_PPC_JUMP_LABEL(.L_80216680, 0x80216680) //this is a jump label
/*80216680 00213480*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216684 00213484*/ PPC::Runtime::ASM::bl(fn_802166A8);
/*80216688 00213488*/ PPC::Runtime::ASM::b(.L_80216694);
RUNTIME_PPC_JUMP_LABEL(.L_8021668C, 0x8021668C) //this is a jump label
/*8021668C 0021348C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216690 00213490*/ PPC::Runtime::ASM::bl(fn_802166E0);
RUNTIME_PPC_JUMP_LABEL(.L_80216694, 0x80216694) //this is a jump label
/*80216694 00213494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216698 00213498*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021669C 0021349C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802166A0 002134A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802166A4 002134A4*/ PPC::Runtime::ASM::blr();
}