//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800547E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"



void fn_8016EBD0(PPC::Runtime::GCContext* context)
{
/*8016EBD0 0016B9D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016EBD4 0016B9D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016EBD8 0016B9D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016EBDC 0016B9DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016EBE0 0016B9E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016EBE4 0016B9E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016EBE8 0016B9E8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8016EBEC 0016B9EC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016EBF0 0016B9F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8016EBF4 0016B9F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016EBF8 0016B9F8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8016EBFC 0016B9FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016EC00 0016BA00*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8016EC04 0016BA04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8016EC08 0016BA08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016EC0C 0016BA0C*/ PPC::Runtime::ASM::bne(.L_8016EC54);
/*8016EC10 0016BA10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016EC14 0016BA14*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*8016EC18 0016BA18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016EC1C 0016BA1C*/ PPC::Runtime::ASM::bne(.L_8016EC54);
/*8016EC20 0016BA20*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8016EC24 0016BA24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016EC28 0016BA28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8016EC2C 0016BA2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016EC30 0016BA30*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016EC34 0016BA34*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8016EC38 0016BA38*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbcc, context->r31));
/*8016EC3C 0016BA3C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8016EC40 0016BA40*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*8016EC44 0016BA44*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*8016EC48 0016BA48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016EC4C 0016BA4C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*8016EC50 0016BA50*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_8016EC54, 0x8016EC54) //this is a jump label
/*8016EC54 0016BA54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016EC58 0016BA58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016EC5C 0016BA5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016EC60 0016BA60*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016EC64 0016BA64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016EC68 0016BA68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016EC6C 0016BA6C*/ PPC::Runtime::ASM::blr();
}