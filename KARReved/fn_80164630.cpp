//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_80164630(PPC::Runtime::GCContext* context)
{
/*80164630 00161430*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80164634 00161434*/ PPC::Runtime::ASM::mflr(context->r0);
/*80164638 00161438*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016463C 0016143C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80164640 00161440*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80164644 00161444*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80164648 00161448*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9bc, context->r3));
/*8016464C 0016144C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80164650 00161450*/ PPC::Runtime::ASM::beq(.L_8016466C);
/*80164654 00161454*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80164658 00161458*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*8016465C 0016145C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80164660 00161460*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80164664 00161464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80164668 00161468*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_8016466C, 0x8016466C) //this is a jump label
/*8016466C 0016146C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80164670 00161470*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80164674 00161474*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80164678 00161478*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016467C 0016147C*/ PPC::Runtime::ASM::blr();
}