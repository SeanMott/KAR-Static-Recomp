//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_8016D7DC(PPC::Runtime::GCContext* context)
{
/*8016D7DC 0016A5DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016D7E0 0016A5E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016D7E4 0016A5E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016D7E8 0016A5E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016D7EC 0016A5EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016D7F0 0016A5F0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016D7F4 0016A5F4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8016D7F8 0016A5F8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xb40);
/*8016D7FC 0016A5FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016D800 0016A600*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8016D804 0016A604*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8016D808 0016A608*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8016D80C 0016A60C*/ PPC::Runtime::ASM::beq(.L_8016D83C);
/*8016D810 0016A610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*8016D814 0016A614*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016D818 0016A618*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*8016D81C 0016A61C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016D820 0016A620*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8016D824 0016A624*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016D828 0016A628*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*8016D82C 0016A62C*/ PPC::Runtime::ASM::slwi(context->r6, context->r0, 1);
/*8016D830 0016A630*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016D834 0016A634*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x1);
/*8016D838 0016A638*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_8016D83C, 0x8016D83C) //this is a jump label
/*8016D83C 0016A63C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016D840 0016A640*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016D844 0016A644*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016D848 0016A648*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016D84C 0016A64C*/ PPC::Runtime::ASM::blr();
}