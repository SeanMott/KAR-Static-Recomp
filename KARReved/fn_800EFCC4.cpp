//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800EFCC4(PPC::Runtime::GCContext* context)
{
/*800EFCC4 000ECAC4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFCC8 000ECAC8*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x38);
/*800EFCCC 000ECACC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800EFCD0 000ECAD0*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*800EFCD4 000ECAD4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EFCD8 000ECAD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800EFCDC 000ECADC*/ PPC::Runtime::ASM::beq(.L_800EFD80);
/*800EFCE0 000ECAE0*/ PPC::Runtime::ASM::bge(.L_800EFCF4);
/*800EFCE4 000ECAE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EFCE8 000ECAE8*/ PPC::Runtime::ASM::beq(.L_800EFD04);
/*800EFCEC 000ECAEC*/ PPC::Runtime::ASM::bge(.L_800EFD3C);
/*800EFCF0 000ECAF0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFCF4, 0x800EFCF4) //this is a jump label
/*800EFCF4 000ECAF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800EFCF8 000ECAF8*/ PPC::Runtime::ASM::beq(.L_800EFE44);
/*800EFCFC 000ECAFC*/ PPC::Runtime::ASM::bgelr();
/*800EFD00 000ECB00*/ PPC::Runtime::ASM::b(.L_800EFDF4);
RUNTIME_PPC_JUMP_LABEL(.L_800EFD04, 0x800EFD04) //this is a jump label
/*800EFD04 000ECB04*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x5c);
/*800EFD08 000ECB08*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFD0C 000ECB0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800EFD10 000ECB10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFD14 000ECB14*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4a);
/*800EFD18 000ECB18*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r4);
/*800EFD1C 000ECB1C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*800EFD20 000ECB20*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r4);
/*800EFD24 000ECB24*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFD28 000ECB28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFD2C 000ECB2C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r4);
/*800EFD30 000ECB30*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 1, 30, 30);
/*800EFD34 000ECB34*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r4);
/*800EFD38 000ECB38*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFD3C, 0x800EFD3C) //this is a jump label
/*800EFD3C 000ECB3C*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x5c);
/*800EFD40 000ECB40*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFD44 000ECB44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFD48 000ECB48*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4a);
/*800EFD4C 000ECB4C*/ PPC::Runtime::ASM::lbzx(context->r3, context->r4, context->r5);
/*800EFD50 000ECB50*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 1, 29);
/*800EFD54 000ECB54*/ PPC::Runtime::ASM::xori(context->r0, context->r0, 0x1);
/*800EFD58 000ECB58*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 2, 29, 29);
/*800EFD5C 000ECB5C*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r5);
/*800EFD60 000ECB60*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFD64 000ECB64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFD68 000ECB68*/ PPC::Runtime::ASM::lbzx(context->r3, context->r4, context->r5);
/*800EFD6C 000ECB6C*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 1, 30);
/*800EFD70 000ECB70*/ PPC::Runtime::ASM::xori(context->r0, context->r0, 0x1);
/*800EFD74 000ECB74*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 1, 30, 30);
/*800EFD78 000ECB78*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r5);
/*800EFD7C 000ECB7C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFD80, 0x800EFD80) //this is a jump label
/*800EFD80 000ECB80*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x5c);
/*800EFD84 000ECB84*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFD88 000ECB88*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFD8C 000ECB8C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, 0x4a);
/*800EFD90 000ECB90*/ PPC::Runtime::ASM::lbzx(context->r3, context->r6, context->r7);
/* 800EFD94 000ECB94  54 60 F7 FF */ extrwi. context->r0 , context->r3 , 1 , 29
/*800EFD98 000ECB98*/ PPC::Runtime::ASM::beq(.L_800EFDA4);
/* 800EFD9C 000ECB9C  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*800EFDA0 000ECBA0*/ PPC::Runtime::ASM::bne(.L_800EFDD0);
RUNTIME_PPC_JUMP_LABEL(.L_800EFDA4, 0x800EFDA4) //this is a jump label
/*800EFDA4 000ECBA4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r6, context->r7);
/*800EFDA8 000ECBA8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800EFDAC 000ECBAC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*800EFDB0 000ECBB0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x4a);
/*800EFDB4 000ECBB4*/ PPC::Runtime::ASM::stbx(context->r0, context->r6, context->r7);
/*800EFDB8 000ECBB8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFDBC 000ECBBC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EFDC0 000ECBC0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*800EFDC4 000ECBC4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 1, 30, 30);
/*800EFDC8 000ECBC8*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
/*800EFDCC 000ECBCC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFDD0, 0x800EFDD0) //this is a jump label
/*800EFDD0 000ECBD0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800EFDD4 000ECBD4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 2, 29, 29);
/*800EFDD8 000ECBD8*/ PPC::Runtime::ASM::stbx(context->r3, context->r6, context->r7);
/*800EFDDC 000ECBDC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFDE0 000ECBE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFDE4 000ECBE4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r7);
/*800EFDE8 000ECBE8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*800EFDEC 000ECBEC*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r7);
/*800EFDF0 000ECBF0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFDF4, 0x800EFDF4) //this is a jump label
/*800EFDF4 000ECBF4*/ PPC::Runtime::ASM::mulli(context->r7, context->r3, 0x5c);
/*800EFDF8 000ECBF8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFDFC 000ECBFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFE00 000ECC00*/ PPC::Runtime::ASM::addi(context->r6, context->r7, 0x4a);
/*800EFE04 000ECC04*/ PPC::Runtime::ASM::lbzx(context->r3, context->r4, context->r6);
/* 800EFE08 000ECC08  54 60 F7 FF */ extrwi. context->r0 , context->r3 , 1 , 29
/*800EFE0C 000ECC0C*/ PPC::Runtime::ASM::bne(.L_800EFE18);
/* 800EFE10 000ECC10  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*800EFE14 000ECC14*/ PPC::Runtime::ASM::beqlr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFE18, 0x800EFE18) //this is a jump label
/*800EFE18 000ECC18*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r6);
/*800EFE1C 000ECC1C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800EFE20 000ECC20*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*800EFE24 000ECC24*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x4a);
/*800EFE28 000ECC28*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r6);
/*800EFE2C 000ECC2C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFE30 000ECC30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EFE34 000ECC34*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*800EFE38 000ECC38*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 1, 30, 30);
/*800EFE3C 000ECC3C*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
/*800EFE40 000ECC40*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFE44, 0x800EFE44) //this is a jump label
/*800EFE44 000ECC44*/ PPC::Runtime::ASM::mulli(context->r8, context->r3, 0x5c);
/*800EFE48 000ECC48*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFE4C 000ECC4C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFE50 000ECC50*/ PPC::Runtime::ASM::addi(context->r7, context->r8, 0x4a);
/*800EFE54 000ECC54*/ PPC::Runtime::ASM::lbzx(context->r3, context->r6, context->r7);
/* 800EFE58 000ECC58  54 64 F7 FF */ extrwi. context->r4 , context->r3 , 1 , 29
/*800EFE5C 000ECC5C*/ PPC::Runtime::ASM::bne(.L_800EFE90);
/*800EFE60 000ECC60*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 1, 30);
/*800EFE64 000ECC64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*800EFE68 000ECC68*/ PPC::Runtime::ASM::bne(.L_800EFE90);
/*800EFE6C 000ECC6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800EFE70 000ECC70*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 2, 29, 29);
/*800EFE74 000ECC74*/ PPC::Runtime::ASM::stbx(context->r3, context->r6, context->r7);
/*800EFE78 000ECC78*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFE7C 000ECC7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EFE80 000ECC80*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r7);
/*800EFE84 000ECC84*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*800EFE88 000ECC88*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r7);
/*800EFE8C 000ECC8C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFE90, 0x800EFE90) //this is a jump label
/*800EFE90 000ECC90*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x1);
/*800EFE94 000ECC94*/ PPC::Runtime::ASM::bne(.L_800EFECC);
/*800EFE98 000ECC98*/ PPC::Runtime::ASM::lbzx(context->r4, context->r6, context->r7);
/* 800EFE9C 000ECC9C  54 80 FF FF */ extrwi. context->r0 , context->r4 , 1 , 30
/*800EFEA0 000ECCA0*/ PPC::Runtime::ASM::bne(.L_800EFECC);
/*800EFEA4 000ECCA4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800EFEA8 000ECCA8*/ PPC::Runtime::ASM::addi(context->r3, context->r8, 0x4a);
/*800EFEAC 000ECCAC*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r5, 2, 29, 29);
/*800EFEB0 000ECCB0*/ PPC::Runtime::ASM::stbx(context->r4, context->r6, context->r7);
/*800EFEB4 000ECCB4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFEB8 000ECCB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EFEBC 000ECCBC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*800EFEC0 000ECCC0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 1, 30, 30);
/*800EFEC4 000ECCC4*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
/*800EFEC8 000ECCC8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EFECC, 0x800EFECC) //this is a jump label
/*800EFECC 000ECCCC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r6, context->r7);
/*800EFED0 000ECCD0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800EFED4 000ECCD4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*800EFED8 000ECCD8*/ PPC::Runtime::ASM::addi(context->r3, context->r8, 0x4a);
/*800EFEDC 000ECCDC*/ PPC::Runtime::ASM::stbx(context->r0, context->r6, context->r7);
/*800EFEE0 000ECCE0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EFEE4 000ECCE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EFEE8 000ECCE8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*800EFEEC 000ECCEC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 1, 30, 30);
/*800EFEF0 000ECCF0*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
/*800EFEF4 000ECCF4*/ PPC::Runtime::ASM::blr();
}