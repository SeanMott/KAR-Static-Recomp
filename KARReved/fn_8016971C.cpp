//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_8016971C(PPC::Runtime::GCContext* context)
{
/*8016971C 0016651C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80169720 00166520*/ PPC::Runtime::ASM::mflr(context->r0);
/*80169724 00166524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169728 00166528*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016972C 0016652C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80169730 00166530*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80169734 00166534*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80169738 00166538*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xa80);
/*8016973C 0016653C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80169740 00166540*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*80169744 00166544*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80169748 00166548*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8016974C 0016654C*/ PPC::Runtime::ASM::beq(.L_8016977C);
/*80169750 00166550*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*80169754 00166554*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80169758 00166558*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*8016975C 0016655C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*80169760 00166560*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80169764 00166564*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80169768 00166568*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 1);
/*8016976C 0016656C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80169770 00166570*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80169774 00166574*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80169778 00166578*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_8016977C, 0x8016977C) //this is a jump label
/*8016977C 0016657C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169780 00166580*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169784 00166584*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80169788 00166588*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016978C 0016658C*/ PPC::Runtime::ASM::blr();
}