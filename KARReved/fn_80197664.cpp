//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"
#include "fn_801972C0.hpp"



void fn_80197664(PPC::Runtime::GCContext* context)
{
/*80197664 00194464*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80197668 00194468*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019766C 0019446C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*80197670 00194470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80197674 00194474*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80197678 00194478*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019767C 0019447C*/ PPC::Runtime::ASM::beq(.L_801976CC);
/*80197680 00194480*/ PPC::Runtime::ASM::bge(.L_80197690);
/*80197684 00194484*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80197688 00194488*/ PPC::Runtime::ASM::bge(.L_8019769C);
/*8019768C 0019448C*/ PPC::Runtime::ASM::b(.L_80197728);
RUNTIME_PPC_JUMP_LABEL(.L_80197690, 0x80197690) //this is a jump label
/*80197690 00194490*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x3);
/*80197694 00194494*/ PPC::Runtime::ASM::bge(.L_80197728);
/*80197698 00194498*/ PPC::Runtime::ASM::b(.L_801976FC);
RUNTIME_PPC_JUMP_LABEL(.L_8019769C, 0x8019769C) //this is a jump label
/*8019769C 0019449C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801976A0 001944A0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801976A4 001944A4*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*801976A8 001944A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801976AC 001944AC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801976B0 001944B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801976B4 001944B4*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*801976B8 001944B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801976BC 001944BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801976C0 001944C0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801976C4 001944C4*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*801976C8 001944C8*/ PPC::Runtime::ASM::b(.L_80197728);
RUNTIME_PPC_JUMP_LABEL(.L_801976CC, 0x801976CC) //this is a jump label
/*801976CC 001944CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801976D0 001944D0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801976D4 001944D4*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*801976D8 001944D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801976DC 001944DC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801976E0 001944E0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801976E4 001944E4*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*801976E8 001944E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801976EC 001944EC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801976F0 001944F0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801976F4 001944F4*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*801976F8 001944F8*/ PPC::Runtime::ASM::b(.L_80197728);
RUNTIME_PPC_JUMP_LABEL(.L_801976FC, 0x801976FC) //this is a jump label
/*801976FC 001944FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80197700 00194500*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80197704 00194504*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*80197708 00194508*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019770C 0019450C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80197710 00194510*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80197714 00194514*/ PPC::Runtime::ASM::bl(fn_801972C0);
/*80197718 00194518*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019771C 0019451C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80197720 00194520*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80197724 00194524*/ PPC::Runtime::ASM::bl(fn_801972C0);
RUNTIME_PPC_JUMP_LABEL(.L_80197728, 0x80197728) //this is a jump label
/*80197728 00194528*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019772C 0019452C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80197730 00194530*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80197734 00194534*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80197738 00194538*/ PPC::Runtime::ASM::blr();
}