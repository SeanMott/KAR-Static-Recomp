//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007D988.hpp"



void fn_800825E8(PPC::Runtime::GCContext* context)
{
/*800825E8 0007F3E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800825EC 0007F3EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800825F0 0007F3F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800825F4 0007F3F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800825F8 0007F3F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800825FC 0007F3FC*/ PPC::Runtime::ASM::beq(.L_80082690);
/*80082600 0007F400*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5550 @ Get_MemoryOffset_SDA21);
/*80082604 0007F404*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80082608 0007F408*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*8008260C 0007F40C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5550 @ Get_MemoryOffset_SDA21);
/*80082610 0007F410*/ PPC::Runtime::ASM::subi(context->r7, context->r6, 0xff);
/*80082614 0007F414*/ PPC::Runtime::ASM::subfic(context->r6, context->r6, 0xff);
/*80082618 0007F418*/ PPC::Runtime::ASM::nor(context->r6, context->r7, context->r6);
/*8008261C 0007F41C*/ PPC::Runtime::ASM::srawi(context->r6, context->r6, 31);
/*80082620 0007F420*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r6);
/*80082624 0007F424*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80082628 0007F428*/ PPC::Runtime::ASM::bne(.L_80082690);
/*8008262C 0007F42C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r3));
/* 80082630 0007F430  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*80082634 0007F434*/ PPC::Runtime::ASM::beq(.L_80082640);
/*80082638 0007F438*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8008263C 0007F43C*/ PPC::Runtime::ASM::b(.L_80082648);
RUNTIME_PPC_JUMP_LABEL(.L_80082640, 0x80082640) //this is a jump label
/*80082640 0007F440*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80082644 0007F444*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80082648, 0x80082648) //this is a jump label
/*80082648 0007F448*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8008264C 0007F44C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80082650 0007F450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*80082654 0007F454*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x4);
/*80082658 0007F458*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8008265C 0007F45C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80082660 0007F460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*80082664 0007F464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80082668 0007F468*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*8008266C 0007F46C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*80082670 0007F470*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80082674 0007F474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80082678 0007F478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8008267C 0007F47C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80082680 0007F480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80082684 0007F484*/ PPC::Runtime::ASM::bl(fn_8007D988);
/*80082688 0007F488*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8008268C 0007F48C*/ PPC::Runtime::ASM::b(.L_80082694);
RUNTIME_PPC_JUMP_LABEL(.L_80082690, 0x80082690) //this is a jump label
/*80082690 0007F490*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80082694, 0x80082694) //this is a jump label
/*80082694 0007F494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80082698 0007F498*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8008269C 0007F49C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800826A0 0007F4A0*/ PPC::Runtime::ASM::blr();
}