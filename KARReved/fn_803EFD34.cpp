//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EFD34(PPC::Runtime::GCContext* context)
{
/*803EFD34 003ECB34*/ PPC::Runtime::ASM::mflr(context->r0);
/*803EFD38 003ECB38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803EFD3C 003ECB3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803EFD40 003ECB40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EFD44 003ECB44*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803EFD48 003ECB48*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EFD4C 003ECB4C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803EFD50 003ECB50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803EFD54 003ECB54*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*803EFD58 003ECB58*/ PPC::Runtime::ASM::add(context->r31, context->r29, context->r0);
/*803EFD5C 003ECB5C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803EFD60 003ECB60*/ PPC::Runtime::ASM::b(.L_803EFD64);
RUNTIME_PPC_JUMP_LABEL(.L_803EFD64, 0x803EFD64) //this is a jump label
/*803EFD64 003ECB64*/ PPC::Runtime::ASM::b(.L_803EFD68);
RUNTIME_PPC_JUMP_LABEL(.L_803EFD68, 0x803EFD68) //this is a jump label
/*803EFD68 003ECB68*/ PPC::Runtime::ASM::b(.L_803EFD84);
RUNTIME_PPC_JUMP_LABEL(.L_803EFD6C, 0x803EFD6C) //this is a jump label
/*803EFD6C 003ECB6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803EFD70 003ECB70*/ PPC::Runtime::ASM::lwz(context->r12, StructWithFuncPtrs_9 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EFD74 003ECB74*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803EFD78 003ECB78  4E 80 00 21 */ blrl
/*803EFD7C 003ECB7C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x14);
/*803EFD80 003ECB80*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803EFD84, 0x803EFD84) //this is a jump label
/*803EFD84 003ECB84*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r30, 24);
/*803EFD88 003ECB88*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*803EFD8C 003ECB8C*/ PPC::Runtime::ASM::blt(.L_803EFD6C);
/*803EFD90 003ECB90*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803EFD94 003ECB94*/ PPC::Runtime::ASM::mulli(context->r0, context->r30, 0x14);
/*803EFD98 003ECB98*/ PPC::Runtime::ASM::add(context->r31, context->r29, context->r0);
/*803EFD9C 003ECB9C*/ PPC::Runtime::ASM::b(.L_803EFDA0);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDA0, 0x803EFDA0) //this is a jump label
/*803EFDA0 003ECBA0*/ PPC::Runtime::ASM::b(.L_803EFDA4);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDA4, 0x803EFDA4) //this is a jump label
/*803EFDA4 003ECBA4*/ PPC::Runtime::ASM::b(.L_803EFDC0);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDA8, 0x803EFDA8) //this is a jump label
/*803EFDA8 003ECBA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*803EFDAC 003ECBAC*/ PPC::Runtime::ASM::lwz(context->r12, StructWithFuncPtrs_9 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EFDB0 003ECBB0*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803EFDB4 003ECBB4  4E 80 00 21 */ blrl
/*803EFDB8 003ECBB8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x14);
/*803EFDBC 003ECBBC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDC0, 0x803EFDC0) //this is a jump label
/*803EFDC0 003ECBC0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r30, 24);
/*803EFDC4 003ECBC4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*803EFDC8 003ECBC8*/ PPC::Runtime::ASM::blt(.L_803EFDA8);
/*803EFDCC 003ECBCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r29));
/*803EFDD0 003ECBD0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803EFDD4 003ECBD4*/ PPC::Runtime::ASM::beq(.L_803EFE14);
/*803EFDD8 003ECBD8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803EFDDC 003ECBDC*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*803EFDE0 003ECBE0*/ PPC::Runtime::ASM::add(context->r31, context->r29, context->r0);
/*803EFDE4 003ECBE4*/ PPC::Runtime::ASM::b(.L_803EFDE8);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDE8, 0x803EFDE8) //this is a jump label
/*803EFDE8 003ECBE8*/ PPC::Runtime::ASM::b(.L_803EFDEC);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDEC, 0x803EFDEC) //this is a jump label
/*803EFDEC 003ECBEC*/ PPC::Runtime::ASM::b(.L_803EFE08);
RUNTIME_PPC_JUMP_LABEL(.L_803EFDF0, 0x803EFDF0) //this is a jump label
/*803EFDF0 003ECBF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r31));
/*803EFDF4 003ECBF4*/ PPC::Runtime::ASM::lwz(context->r12, StructWithFuncPtrs_9 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EFDF8 003ECBF8*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803EFDFC 003ECBFC  4E 80 00 21 */ blrl
/*803EFE00 003ECC00*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*803EFE04 003ECC04*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803EFE08, 0x803EFE08) //this is a jump label
/*803EFE08 003ECC08*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r30, 24);
/*803EFE0C 003ECC0C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x3);
/*803EFE10 003ECC10*/ PPC::Runtime::ASM::blt(.L_803EFDF0);
RUNTIME_PPC_JUMP_LABEL(.L_803EFE14, 0x803EFE14) //this is a jump label
/*803EFE14 003ECC14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803EFE18 003ECC18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EFE1C 003ECC1C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803EFE20 003ECC20*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EFE24 003ECC24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803EFE28 003ECC28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EFE2C 003ECC2C*/ PPC::Runtime::ASM::blr();
}