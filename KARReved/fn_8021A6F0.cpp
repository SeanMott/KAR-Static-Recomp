//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_80204B4C.hpp"
#include "fn_8021A778.hpp"
#include "fn_8021AAC0.hpp"



void fn_8021A6F0(PPC::Runtime::GCContext* context)
{
/*8021A6F0 002174F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021A6F4 002174F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021A6F8 002174F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021A6FC 002174FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021A700 00217500*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021A704 00217504*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*8021A708 00217508*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021A70C 0021750C*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*8021A710 00217510*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021A714 00217514*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8021A718 00217518*/ PPC::Runtime::ASM::bl(fn_80204B4C);
/*8021A71C 0021751C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021A720 00217520*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8021A724 00217524*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*8021A728 00217528*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021A72C 0021752C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8021A730 00217530*/ PPC::Runtime::ASM::beq(.L_8021A750);
/*8021A734 00217534*/ PPC::Runtime::ASM::bge(.L_8021A750);
/*8021A738 00217538*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021A73C 0021753C*/ PPC::Runtime::ASM::bge(.L_8021A744);
/*8021A740 00217540*/ PPC::Runtime::ASM::b(.L_8021A750);
RUNTIME_PPC_JUMP_LABEL(.L_8021A744, 0x8021A744) //this is a jump label
/*8021A744 00217544*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021A748 00217548*/ PPC::Runtime::ASM::bl(fn_8021A778);
/*8021A74C 0021754C*/ PPC::Runtime::ASM::b(.L_8021A764);
RUNTIME_PPC_JUMP_LABEL(.L_8021A750, 0x8021A750) //this is a jump label
/*8021A750 00217550*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8021A754 00217554*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021A758 00217558*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r31));
/*8021A75C 0021755C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021A760 00217560*/ PPC::Runtime::ASM::bl(fn_8021AAC0);
RUNTIME_PPC_JUMP_LABEL(.L_8021A764, 0x8021A764) //this is a jump label
/*8021A764 00217564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021A768 00217568*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021A76C 0021756C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021A770 00217570*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021A774 00217574*/ PPC::Runtime::ASM::blr();
}