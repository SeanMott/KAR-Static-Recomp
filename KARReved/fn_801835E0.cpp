//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_801835E0(PPC::Runtime::GCContext* context)
{
/*801835E0 001803E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801835E4 001803E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801835E8 001803E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801835EC 001803EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801835F0 001803F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801835F4 001803F4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801835F8 001803F8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801835FC 001803FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1160, context->r3));
/*80183600 00180400*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183604 00180404*/ PPC::Runtime::ASM::beq(.L_8018367C);
/*80183608 00180408*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8018360C 0018040C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80183610 00180410*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80183614 00180414*/ PPC::Runtime::ASM::bne(.L_80183628);
/*80183618 00180418*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E20 @ Get_MemoryOffset_SDA21);
/*8018361C 0018041C*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80183620 00180420*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E28 @ Get_MemoryOffset_SDA21);
/*80183624 00180424*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183628, 0x80183628) //this is a jump label
/*80183628 00180428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8018362C 0018042C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80183630 00180430*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80183634 00180434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80183638 00180438*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8018363C 0018043C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80183640 00180440*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183644 00180444*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80183648 00180448*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8018364C 0018044C*/ PPC::Runtime::ASM::beq(.L_80183668);
/*80183650 00180450*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80183654 00180454*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80183658 00180458*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8018365C 0018045C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80183660 00180460*/ PPC::Runtime::ASM::bl(fn_800644AC);
/*80183664 00180464*/ PPC::Runtime::ASM::b(.L_8018367C);
RUNTIME_PPC_JUMP_LABEL(.L_80183668, 0x80183668) //this is a jump label
/*80183668 00180468*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AD688 @ Get_MemoryOffset_HighBit);
/*8018366C 0018046C*/ PPC::Runtime::ASM::li(context->r4, 0x75);
/*80183670 00180470*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804AD688 @ Get_MemoryOffset_LowBit);
/*80183674 00180474*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E30 @ Get_MemoryOffset_SDA21);
/*80183678 00180478*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8018367C, 0x8018367C) //this is a jump label
/*8018367C 0018047C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183680 00180480*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183684 00180484*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183688 00180488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018368C 0018048C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80183690 00180490*/ PPC::Runtime::ASM::blr();
}