//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022FCCC(PPC::Runtime::GCContext* context)
{
/*8022FCCC 0022CACC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022FCD0 0022CAD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022FCD4 0022CAD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022FCD8 0022CAD8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022FCDC 0022CADC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8022FCE0 0022CAE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022FCE4 0022CAE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8022FCE8 0022CAE8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*8022FCEC 0022CAEC*/ PPC::Runtime::ASM::blt(.L_8022FD08);
/*8022FCF0 0022CAF0*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022FCF4 0022CAF4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022FCF8 0022CAF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022FCFC 0022CAFC*/ PPC::Runtime::ASM::li(context->r4, 0x54a);
/*8022FD00 0022CB00*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022FD04 0022CB04*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022FD08, 0x8022FD08) //this is a jump label
/*8022FD08 0022CB08*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x15);
/*8022FD0C 0022CB0C*/ PPC::Runtime::ASM::blt(.L_8022FD18);
/*8022FD10 0022CB10*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x29);
/*8022FD14 0022CB14*/ PPC::Runtime::ASM::blt(.L_8022FD20);
RUNTIME_PPC_JUMP_LABEL(.L_8022FD18, 0x8022FD18) //this is a jump label
/*8022FD18 0022CB18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022FD1C 0022CB1C*/ PPC::Runtime::ASM::b(.L_8022FD30);
RUNTIME_PPC_JUMP_LABEL(.L_8022FD20, 0x8022FD20) //this is a jump label
/*8022FD20 0022CB20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022FD24 0022CB24*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022FD28 0022CB28*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8022FD2C 0022CB2C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62b, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8022FD30, 0x8022FD30) //this is a jump label
/*8022FD30 0022CB30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022FD34 0022CB34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022FD38 0022CB38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022FD3C 0022CB3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022FD40 0022CB40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022FD44 0022CB44*/ PPC::Runtime::ASM::blr();
}